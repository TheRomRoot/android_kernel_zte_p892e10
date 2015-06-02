#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x15865c53, "module_layout" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe990052, "gpio_free" },
	{ 0xd05ef115, "wakeup_source_drop" },
	{ 0x1b017697, "wakeup_source_remove" },
	{ 0xe251cb28, "hrtimer_cancel" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xfefc42a8, "wakeup_source_add" },
	{ 0x9f035ca5, "wakeup_source_prepare" },
	{ 0x3679cb80, "hrtimer_init" },
	{ 0x8226642f, "__gpio_cansleep" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x81ca7157, "input_set_capability" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x8d1c2cb3, "__pm_relax" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x78c62363, "input_event" },
	{ 0xa8f59416, "gpio_direction_output" },
	{ 0x6c8d5ae8, "__gpio_get_value" },
	{ 0x452f304f, "hrtimer_start" },
	{ 0xdc4157b3, "__pm_stay_awake" },
	{ 0x65d6d0f0, "gpio_direction_input" },
	{ 0x432fd7f6, "__gpio_set_value" },
	{ 0x11f447ce, "__gpio_to_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x27e1a049, "printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

