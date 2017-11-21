# MultiROM Recovery Version
BOARD_MKBOOTIMG_ARGS += --board mrom$(MR_REC_VERSION)-00
MR_REC_VERSION := $(shell date -u +%Y%m%d)

# MultiROM
MR_DEVICE_SPECIFIC_VERSION := e
MR_DEVICE_HOOKS := device/lge/h850/multirom/mr_hooks.c
MR_DEVICE_HOOKS_VER := 4
MR_DEFAULT_BRIGHTNESS := 80
MR_DPI := xhdpi
MR_DPI_MUL := 1.5
MR_DPI_FONT := 420
MR_FSTAB := device/lge/h850/recovery.fstab
MR_INPUT_TYPE := type_b
MR_INIT_DEVICES := device/lge/h850/multirom/mr_init_devices.c
MR_KEXEC_MEM_MIN := 0x85800000
MR_KEXEC_DTB := true
MR_NO_KEXEC := enabled
MR_PIXEL_FORMAT := "RGBX_8888"
MR_QCOM_OVERLAY_HEADER := device/lge/h850/multirom/mr_qcom_overlay.h
MR_QCOM_OVERLAY_CUSTOM_PIXEL_FORMAT := MDP_RGBX_8888
MR_RD_ADDR := 0x2200000
MR_USE_MROM_FSTAB := true
MR_USE_QCOM_OVERLAY := true
TARGET_RECOVERY_IS_MULTIROM := true

# possible options:
#       1 true allowed      # NO_KEXEC_DISABLED =  0x00,   // no-kexec is disabled (ie it is built, but needs to be manually enabled)
#       2 enabled           # NO_KEXEC_ALLOWED  =  0x01,   // "Use no-kexec only when needed"
#       3 ui_confirm        # NO_KEXEC_CONFIRM  =  0x02,   // "..... but also ask for confirmation"
#       4 ui_choice         # NO_KEXEC_CHOICE   =  0x04,   // "Ask whether to kexec or use no-kexec"
#       5 forced            # NO_KEXEC_FORCED   =  0x08,   // "Always force using no-kexec workaround"
# any other setting won't build it at all