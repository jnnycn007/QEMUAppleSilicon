blockdev_ss.add(files('export.c'))

blockdev_ss.add(when: fuse, if_true: files('fuse.c'))

if have_vduse_blk_export
    blockdev_ss.add(files('vduse-blk.c', 'virtio-blk-handler.c'))
    blockdev_ss.add(libvduse)
endif
