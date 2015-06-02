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
	{ 0x8cae3b, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x178ba18c, "_raw_spin_unlock" },
	{ 0x4cbf0ca6, "debugfs_create_dir" },
	{ 0x357ebbdb, "bio_alloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x3e4ca122, "blk_put_request" },
	{ 0xc87c1f84, "ktime_get" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x3c12873, "blk_run_queue" },
	{ 0x6f7950c1, "debugfs_remove_recursive" },
	{ 0x7d11c268, "jiffies" },
	{ 0xa7ecf324, "__init_waitqueue_head" },
	{ 0x25da3237, "debugfs_create_u32" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x6f4f036e, "init_request_from_bio" },
	{ 0x5f754e5a, "memset" },
	{ 0x27e1a049, "printk" },
	{ 0xddfcad6a, "elv_unregister" },
	{ 0xf82ba277, "elv_dispatch_sort" },
	{ 0xaea99e9d, "_raw_spin_unlock_irq" },
	{ 0x8834396c, "mod_timer" },
	{ 0xd88bde0c, "bio_put" },
	{ 0x592b4aee, "elv_register" },
	{ 0x9d86eaa2, "blk_rq_map_kern" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x1000e51, "schedule" },
	{ 0xe551272c, "_raw_spin_lock_irq" },
	{ 0x22739ccf, "kmem_cache_alloc_trace" },
	{ 0xc4097c34, "_raw_spin_lock" },
	{  0xf1338, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x69ff5332, "prepare_to_wait" },
	{ 0xbc3d21af, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd7614651, "blk_get_request" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

