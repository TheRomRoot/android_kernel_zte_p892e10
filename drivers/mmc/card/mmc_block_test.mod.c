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
	{ 0xfa799e30, "test_iosched_unregister" },
	{ 0x8cae3b, "kmalloc_caches" },
	{ 0xf0372292, "test_iosched_register" },
	{ 0xa7ecf324, "__init_waitqueue_head" },
	{ 0x22739ccf, "kmem_cache_alloc_trace" },
	{ 0xdd66efca, "mmc_blk_get_packed_statistics" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x37e74642, "get_jiffies_64" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x9b6cb5b4, "mmc_blk_init_bkops_statistics" },
	{  0xf1338, "__wake_up" },
	{ 0xd4fb0ec, "test_iosched_add_unique_test_req" },
	{ 0x38490187, "check_test_completion" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xb81960ca, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x47f2b736, "__blk_put_request" },
	{ 0xb21ba582, "test_get_test_data" },
	{ 0xd1904368, "debugfs_create_file" },
	{ 0x25da3237, "debugfs_create_u32" },
	{ 0xd7449d51, "test_iosched_get_debugfs_tests_root" },
	{ 0xbbe45231, "test_iosched_get_debugfs_utils_root" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa1db0dca, "debugfs_remove" },
	{ 0x76aa5377, "test_iosched_set_test_result" },
	{ 0x65043b59, "test_iosched_set_ignore_round" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xbc3d21af, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x69ff5332, "prepare_to_wait" },
	{ 0x5f754e5a, "memset" },
	{ 0x178ba18c, "_raw_spin_unlock" },
	{ 0xc4097c34, "_raw_spin_lock" },
	{ 0x291a3060, "test_iosched_get_req_queue" },
	{ 0x7399fb6a, "test_iosched_add_wr_rd_test_req" },
	{ 0x4cdb3178, "ns_to_timeval" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc5618086, "mmc_blk_init_packed_statistics" },
	{ 0x53035116, "test_iosched_mark_test_completion" },
	{ 0xf9a482f9, "msleep" },
	{ 0x57097a93, "__blk_run_queue" },
	{ 0xaea99e9d, "_raw_spin_unlock_irq" },
	{ 0xe551272c, "_raw_spin_lock_irq" },
	{ 0x3991c708, "test_iosched_create_test_req" },
	{ 0x929424bf, "test_iosched_start_test" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x27e1a049, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=test-iosched";

