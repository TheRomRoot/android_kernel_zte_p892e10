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
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x323bb93f, "no_llseek" },
	{ 0x522268c5, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x29679c49, "class_destroy" },
	{ 0xbe69e964, "driver_unregister" },
	{ 0x9ee56609, "spi_new_device" },
	{ 0x1139e63b, "spi_busnum_to_master" },
	{ 0x71518393, "spi_register_driver" },
	{ 0x6c458acc, "__class_create" },
	{ 0xf7148056, "__register_chrdev" },
	{ 0x3ae6af69, "put_device" },
	{ 0xab1196e2, "spi_setup" },
	{ 0x7f2e15c, "get_device" },
	{ 0xad998077, "complete" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x5f754e5a, "memset" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x2f4ea1ac, "wait_for_completion" },
	{ 0xc38623ba, "spi_async" },
	{ 0x634f1eda, "nonseekable_open" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x8cae3b, "kmalloc_caches" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xbf933245, "device_create" },
	{ 0xd3dbfbc4, "_find_first_zero_bit_le" },
	{ 0x46867532, "__mutex_init" },
	{ 0x22739ccf, "kmem_cache_alloc_trace" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x81eefda6, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x82ffa6bf, "device_destroy" },
	{ 0x8be3c739, "mutex_lock" },
	{ 0xaea99e9d, "_raw_spin_unlock_irq" },
	{ 0xccfc9a09, "dev_set_drvdata" },
	{ 0xe551272c, "_raw_spin_lock_irq" },
	{ 0xf62d5147, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

