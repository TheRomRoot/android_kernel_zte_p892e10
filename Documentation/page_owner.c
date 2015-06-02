/*
 * User-space helper to sort the output of /sys/kernel/debug/page_owner
 *
 * Example use:
 * cat /sys/kernel/debug/page_owner > page_owner_full.txt
 * grep -v ^PFN page_owner_full.txt > page_owner.txt
 * ./sort page_owner.txt sorted_page_owner.txt
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

struct block_list {
	char *txt;
	int len;
	int num;
};


static struct block_list *list;
static int list_size;
static int max_size;

struct block_list *block_head;

int read_block(char *buf, FILE *fin)
{
	int ret = 0;
	int hit = 0;
	char *curr = buf;

	for (;;) {
		*curr = getc(fin);
		if (*curr == EOF) return -1;

		ret++;
		if (*curr == '\n' && hit == 1)
			return ret - 1;
		else if (*curr == '\n')
			hit = 1;
		else
			hit = 0;
		curr++;
	}
}

static int compare_txt(struct block_list *l1, struct block_list *l2)
{
	return strcmp(l1->txt, l2->txt);
}

static int compare_num(struct block_list *l1, struct block_list *l2)
{
	return l2->num - l1->num;
}

static void add_list(char *buf, int len)
{
	if (list_size != 0 &&
	    len == list[list_size-1].len &&
	    memcmp(buf, list[list_size-1].txt, len) == 0) {
		list[list_size-1].num++;
		return;
	}
	if (list_size == max_size) {
		printf("max_size too small??\n");
		exit(1);
	}
	list[list_size].txt = malloc(len+1);
	list[list_size].len = len;
	list[list_size].num = 1;
	memcpy(list[list_size].txt, buf, len);
	list[list_size].txt[len] = 0;
	list_size++;
	if (list_size % 1000 == 0) {
		printf("loaded %d\r", list_size);
		fflush(stdout);
	}
}

int main(int argc, char **argv)
{
	FILE *fin, *fout;
	char buf[1024];
	int ret, i, count;
	struct block_list *list2;
	struct stat st;

	fin = fopen(argv[1], "r");
	fout = fopen(argv[2], "w");
	if (!fin || !fout) {
		printf("Usage: ./program <input> <output>\n");
		perror("open: ");
		exit(2);
	}

	fstat(fileno(fin), &st);
	max_size = st.st_size / 100; /* hack ... */

	list = malloc(max_size * sizeof(*list));

	for(;;) {
		ret = read_block(buf, fin);
		if (ret < 0)
			break;

		buf[ret] = '\0';
		add_list(buf, ret);
	}

	printf("loaded %d\n", list_size);

	printf("sorting ....\n");

	qsort(list, list_size, sizeof(list[0]), compare_txt);

	list2 = malloc(sizeof(*list) * list_size);

	printf("culling\n");

	for (i=count=0;i<list_size;i++) {
		if (count == 0 ||
		    strcmp(list2[count-1].txt, list[i].txt) != 0) {
			list2[count++] = list[i];
		} else {
			list2[count-1].num += list[i].num;
		}
	}

	qsort(list2, count, sizeof(list[0]), compare_num);

	for (i=0;i<count;i++) {
		fprintf(fout, "%d times:\n%s\n", list2[i].num, list2[i].txt);
	}
	return 0;
}
