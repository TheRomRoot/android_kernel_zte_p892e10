cmd_arch/arm/lib/csumpartialcopyuser.o := /home/algesat/kernel/scripts/gcc-wrapper.py /home/algesat/arm-eabi-4.7/bin/arm-eabi-gcc -Wp,-MD,arch/arm/lib/.csumpartialcopyuser.o.d  -nostdinc -isystem /home/algesat/arm-eabi-4.7/bin/../lib/gcc/arm-eabi/4.7/include -I/home/algesat/kernel/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include /home/algesat/kernel/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables  -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float        -c -o arch/arm/lib/csumpartialcopyuser.o arch/arm/lib/csumpartialcopyuser.S

source_arch/arm/lib/csumpartialcopyuser.o := arch/arm/lib/csumpartialcopyuser.S

deps_arch/arm/lib/csumpartialcopyuser.o := \
    $(wildcard include/config/cpu.h) \
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
  /home/algesat/kernel/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /home/algesat/kernel/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
  /home/algesat/kernel/arch/arm/include/asm/hwcap.h \
  /home/algesat/kernel/arch/arm/include/asm/domain.h \
    $(wildcard include/config/verify/permission/fault.h) \
    $(wildcard include/config/io/36.h) \
  arch/arm/include/generated/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \
  /home/algesat/kernel/arch/arm/include/asm/asm-offsets.h \
  include/generated/asm-offsets.h \
  arch/arm/lib/csumpartialcopygeneric.S \

arch/arm/lib/csumpartialcopyuser.o: $(deps_arch/arm/lib/csumpartialcopyuser.o)

$(deps_arch/arm/lib/csumpartialcopyuser.o):
