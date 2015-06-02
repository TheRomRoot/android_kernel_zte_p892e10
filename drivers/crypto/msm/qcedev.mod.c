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
	{ 0x40fb1384, "platform_driver_unregister" },
	{ 0xebd18f89, "platform_driver_register" },
	{ 0x6f7950c1, "debugfs_remove_recursive" },
	{ 0xd1904368, "debugfs_create_file" },
	{ 0xb81960ca, "snprintf" },
	{ 0x4cbf0ca6, "debugfs_create_dir" },
	{ 0xd26f8cb, "qce_enable_clk" },
	{ 0xa7ecf324, "__init_waitqueue_head" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x8cae3b, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x22739ccf, "kmem_cache_alloc_trace" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x922a45eb, "mem_map" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x2f4ea1ac, "wait_for_completion" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xad998077, "complete" },
	{ 0x8ddab831, "_raw_spin_unlock_irqrestore" },
	{ 0x1a9b678e, "_raw_spin_lock_irqsave" },
	{ 0x7ded90b3, "msm_bus_scale_register_client" },
	{ 0x776462ba, "msm_bus_cl_get_pdata" },
	{ 0x597ceff0, "qce_hw_support" },
	{ 0x943f98f2, "misc_register" },
	{ 0xccfc9a09, "dev_set_drvdata" },
	{ 0xa4bad0cd, "qce_open" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x75b45b18, "qce_process_sha_req" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x103c9c3e, "qce_ablk_cipher_req" },
	{ 0xdfabe0ff, "scm_call" },
	{ 0x81eefda6, "mutex_unlock" },
	{ 0x81a61e31, "qce_disable_clk" },
	{ 0x78f062cb, "msm_bus_scale_client_update_request" },
	{ 0x8be3c739, "mutex_lock" },
	{ 0x7a4497db, "kzfree" },
	{ 0x27e1a049, "printk" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x2bcea5c3, "misc_deregister" },
	{ 0xcf8cc5ee, "msm_bus_scale_unregister_client" },
	{ 0x575c81e1, "qce_close" },
	{ 0xf62d5147, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

