#ifndef HW_MISC_APPLE_SILICON_SMC_H
#define HW_MISC_APPLE_SILICON_SMC_H

#include "qemu/osdep.h"
#include "hw/arm/apple-silicon/dtb.h"
#include "hw/misc/apple-silicon/a7iop/base.h"
#include "hw/sysbus.h"

#define APPLE_SMC_MMIO_ASC (1)
#define APPLE_SMC_MMIO_SRAM (2)

SysBusDevice *apple_smc_create(DTBNode *node, AppleA7IOPVersion version,
                               uint32_t protocol_version, uint32_t sram_size);

#endif /* HW_MISC_APPLE_SILICON_SMC_H */
