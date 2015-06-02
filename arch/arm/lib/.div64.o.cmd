cmd_arch/arm/lib/div64.o := /home/algesat/kernel/scripts/gcc-wrapper.py /home/algesat/arm-eabi-4.7/bin/arm-eabi-gcc -Wp,-MD,arch/arm/lib/.div64.o.d  -nostdinc -isystem /home/algesat/arm-eabi-4.7/bin/../lib/gcc/arm-eabi/4.7/include -I/home/algesat/kernel/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include /home/algesat/kernel/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables  -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float        -c -o arch/arm/lib/div64.o arch/arm/lib/div64.S

source_arch/arm/lib/div64.o := arch/arm/lib/div64.S

deps_arch/arm/lib/div64.o := \
  /home/algesat/kernel/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /home/algesat/kernel/arch/arm/include/asm/linkage.h \
  /home/algesat/kernel/arch/arm/include/asm/unwind.h \
    $(wildcard include/config/arm/unwind.h) \

arch/arm/lib/div64.o: $(deps_arch/arm/lib/div64.o)

$(deps_arch/arm/lib/div64.o):
