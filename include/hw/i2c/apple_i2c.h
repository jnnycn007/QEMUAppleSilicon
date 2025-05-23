#ifndef APPLE_I2C_H
#define APPLE_I2C_H

#include "qemu/osdep.h"
#include "hw/sysbus.h"
#include "qemu/fifo8.h"
#include "qom/object.h"

#define TYPE_APPLE_I2C "apple.i2c"
OBJECT_DECLARE_TYPE(AppleI2CState, AppleHWI2CClass, APPLE_I2C)

#define APPLE_I2C_MMIO_SIZE (0x10000)
#define APPLE_I2C_SDA "i2c.sda"
#define APPLE_I2C_SCL "i2c.scl"

struct AppleHWI2CClass {
    /*< private >*/
    SysBusDeviceClass parent_class;
    ResettablePhases parent_phases;

    /*< public >*/
};

struct AppleI2CState {
    /*< private >*/
    SysBusDevice parent_obj;

    /*< public >*/
    MemoryRegion iomem;
    I2CBus *bus;
    qemu_irq irq;
    qemu_irq sda, scl;
    uint8_t reg[APPLE_I2C_MMIO_SIZE];
    Fifo8 rx_fifo;
    bool last_irq;
    bool nak;
    bool xip;
    bool is_recv;
};

SysBusDevice *apple_i2c_create(const char *name);
#endif /* APPLE_I2C_H */
