#include "qemu/osdep.h"
#include "hw/virtio/vhost.h"

unsigned int vhost_get_max_memslots(void)
{
    return UINT_MAX;
}

unsigned int vhost_get_free_memslots(void)
{
    return UINT_MAX;
}

void vhost_toggle_device_iotlb(VirtIODevice *vdev)
{
}
