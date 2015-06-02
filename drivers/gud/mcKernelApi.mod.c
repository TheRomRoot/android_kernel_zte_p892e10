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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xcaa0f9e9, "mobicore_open" },
	{ 0x81eefda6, "mutex_unlock" },
	{ 0x3fe99d1f, "mobicore_unmap_vmem" },
	{ 0x7c680c2c, "netlink_kernel_create" },
	{ 0x588e8ef4, "dev_err" },
	{ 0xf25131ca, "mutex_lock_interruptible" },
	{ 0x46867532, "__mutex_init" },
	{ 0xa1f1ef1e, "netlink_kernel_release" },
	{ 0x434bb2a6, "mobicore_map_vmem" },
	{ 0x705082e2, "mobicore_free_wsm" },
	{ 0xb442d43e, "netlink_unicast" },
	{ 0x84607092, "init_net" },
	{ 0x352a292e, "_dev_info" },
	{ 0x84ca80e3, "__alloc_skb" },
	{ 0xbd46cdcf, "mobicore_allocate_wsm" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xa3eb6ca7, "kfree_skb" },
	{ 0xaefe81f7, "netlink_ack" },
	{ 0x22739ccf, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa72dab62, "up" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf41a3c7a, "dev_set_name" },
	{ 0xccdfd1bb, "__nlmsg_put" },
	{ 0x27e4faa5, "down_timeout" },
	{ 0xdfcb89fb, "mobicore_release" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mcDrvModule";

