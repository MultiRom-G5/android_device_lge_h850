#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    "/sys/devices/virtual/mem/null",
    "/sys/devices/virtual/misc/fuse",
	
    "/sys/class/graphics/fb0",
    "/sys/devices/virtual/graphics/fb0",


    // boot and data
    "/sys/block/sde/sde1", //boot
    "/sys/block/sda/sda17", //data

    // system and cache
    "/sys/block/sde/sde20", //system
    "/sys/block/sda/sda3", //cache

    // Mount persist and firmware
    "/sys/block/sda/sda3", // persist-lg
    "/sys/block/sde/sde18", // firmware

    "/sys/bus/mmc*",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/bus/sdio/drivers",
    "/sys/module/sdhci",
    "/sys/module/sdhci*",
    "/sys/module/sdhci_msm",
    "/sys/module/sdhci_msm*",

    // for input
    "/sys/devices/virtual/input*",
    "/sys/devices/virtual/input/input0",
    "/sys/devices/virtual/misc/uinput",
    "/sys/devices/soc/soc:gpio_keys/input*",
    "/sys/devices/virtual/misc/uinput",
    "/sys/devices/virtual/misc/uinput/*",
    //"/sys/devices/soc/75b6000.i2c/i2c-8/8-0028/input*", USB Input
    //"/sys/devices/soc/75b6000.i2c/i2c-8/8-0028/input/input6*",
	"/sys/devices/soc/757a000.i2c/i2c-6/6-0020/input*",

    // for adb
    "/sys/class/tty/ptmx",
    "/sys/class/misc/android_adb",
    "/sys/class/android_usb/android0*",
    "/sys/class/android_usb/android0/f_adb",
    "/sys/bus/platform/drivers/android_usb",
    "/sys/bus/usb",

    // USB Drive
    "/sys/bus/platform/drivers/xhci-hcd*",

    // for qualcomm overlay - /dev/ion
    "/sys/devices/virtual/ecryptfs",
    "/sys/devices/virtual/misc/ecryptfs",
    "/sys/devices/virtual/icesdcc/icesdcc",
    "/sys/devices/virtual/misc/device-mapper",
    "/sys/devices/virtual/misc/ion",
    "/sys/devices/virtual/qseecom/qseecom",
	
	// Logging
    "/sys/devices/virtual/mem/kmsg",

    NULL
};