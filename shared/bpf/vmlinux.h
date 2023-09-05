#if defined(__TARGET_ARCH_x86)
#include "vmlinux_x86.h"
#elif defined(__TARGET_ARCH_arm64)
#include "vmlinux_arm64.h"
#elif defined(__TARGET_ARCH_loongarch)
#include "vmlinux_loongarch64.h"
#endif
