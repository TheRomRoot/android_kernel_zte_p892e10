#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x15865c53, "module_layout" },
	{ 0x67d3e13d, "single_release" },
	{ 0xe7b465af, "seq_read" },
	{ 0xd564c053, "seq_lseek" },
	{ 0x866bc044, "mmc_unregister_driver" },
	{ 0xdf97ecb3, "mmc_register_driver" },
	{ 0x1424f59, "sg_copy_to_buffer" },
	{ 0x8371daff, "sg_copy_from_buffer" },
	{ 0xefdd2345, "sg_init_one" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x66b2a859, "nr_free_buffer_pages" },
	{ 0x922a45eb, "mem_map" },
	{ 0xd5152710, "sg_next" },
	{ 0xe9c057c, "page_address" },
	{ 0xf88c3301, "sg_init_table" },
	{ 0xc781d041, "mmc_wait_for_req" },
	{ 0x12f3926, "mmc_wait_for_cmd" },
	{ 0x5f754e5a, "memset" },
	{ 0x25ed9f6a, "mmc_start_req" },
	{ 0x352a292e, "_dev_info" },
	{ 0x46608fa0, "getnstimeofday" },
	{ 0xbfebc593, "mmc_can_trim" },
	{ 0x61bd977d, "mmc_erase" },
	{ 0x4faabd64, "mmc_can_erase" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x588e8ef4, "dev_err" },
	{ 0xa1db0dca, "debugfs_remove" },
	{ 0xd1904368, "debugfs_create_file" },
	{ 0xb3cfe4cf, "contig_page_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc0cde5c7, "mmc_rpm_release" },
	{ 0x629923d0, "mmc_release_host" },
	{ 0x7e74934e, "__mmc_claim_host" },
	{ 0x8b81a273, "mmc_rpm_hold" },
	{ 0x2fdf56de, "__alloc_pages_nodemask" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x37a0cba, "kfree" },
	{ 0xf315ccfe, "__free_pages" },
	{ 0xf6126212, "mmc_set_blocklen" },
	{ 0x27e1a049, "printk" },
	{ 0xe6da44a, "set_normalized_timespec" },
	{ 0x8cae3b, "kmalloc_caches" },
	{ 0x22739ccf, "kmem_cache_alloc_trace" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x26ae7b6a, "mmc_set_data_timeout" },
	{ 0x9cd5dc55, "mmc_can_reset" },
	{ 0xada75395, "mmc_hw_reset_check" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x81eefda6, "mutex_unlock" },
	{ 0xd67319, "seq_printf" },
	{ 0x8be3c739, "mutex_lock" },
	{ 0x346893c, "single_open" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

