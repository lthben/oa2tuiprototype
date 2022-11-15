
#include <pgmspace.h> // PROGMEM support header

// Espressif logo pixel array in XBM format
// #define logoWidth 128  // logo width
// #define logoHeight 128 // logo height

// Image is stored in this array

PROGMEM const uint16_t neutral_icon[] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0010 (16) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, // 0x0020 (32) pixels
    0x0000, 0xFFFF, 0xFF97, 0xFF96, 0xFFB7, 0x0000, 0xFFF5, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0030 (48) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0040 (64) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFF5, // 0x0050 (80) pixels
    0x0000, 0xFF96, 0xFFB7, 0xFFF8, 0xFFB7, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0xFFF5, 0xFFF5, 0xFFE0, 0x0000, 0x0000, 0x0000, // 0x0060 (96) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0070 (112) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFF5, // 0x0080 (128) pixels
    0x0000, 0xFFB7, 0xFFB7, 0xFFD7, 0xFFB7, 0x0000, 0xFFF3, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0090 (144) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x00A0 (160) pixels
    0x0000, 0xFFFF, 0xFD55, 0xFFF7, 0xFE73, 0xFE73, 0xFFF0, 0xFFF5, 0xFC10, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFF7, // 0x00B0 (176) pixels
    0x0000, 0xFF97, 0xFFF7, 0xFFB7, 0xFF96, 0x0000, 0xFFF9, 0x0000, 0xFFFF, 0x0000, 0xFFB7, 0xFFB7, 0x0000, 0x0000, 0xFFE0, 0x0000, // 0x00C0 (192) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFF5, 0xFFF7, // 0x00D0 (208) pixels
    0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFF5, 0xFFF5, 0xFFF0, 0xFFE0, 0x0000, 0xFFFF, // 0x00E0 (224) pixels
    0x0000, 0xFF96, 0xFFD7, 0xFF96, 0xFFB7, 0x0000, 0xFFF9, 0xFFFF, 0x0000, 0xFFB7, 0xFFF7, 0xFFF8, 0xFFB7, 0x0000, 0xFFF5, 0x0000, // 0x00F0 (240) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFF5, 0xFFF3, 0x0000, 0x0000, 0x0000, // 0x0100 (256) pixels
    0x0000, 0xFF76, 0xFFD7, 0xFFB7, 0xFFD7, 0xFEB2, 0xFE90, 0xFED1, 0xFED1, 0xFD55, 0x0000, 0x0000, 0x0000, 0xFFF5, 0xFDF0, 0xFFFF, // 0x0110 (272) pixels
    0x0000, 0xFFB7, 0xFFF9, 0xFF96, 0xFF96, 0x0000, 0xFE73, 0x0000, 0xFFB7, 0xFFF7, 0xFF56, 0xFFF7, 0xFFD7, 0x0000, 0xFFF5, 0x0000, // 0x0120 (288) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFF9, 0x0000, 0x0000, 0xFFF0, 0xFFB6, 0xFF96, // 0x0130 (304) pixels
    0xFF97, 0xFF96, 0xFF96, 0xFFB7, 0xFFD7, 0xFEF2, 0xFE90, 0xFE70, 0xFE70, 0xFE90, 0xFE70, 0xFE90, 0xFED0, 0x0000, 0x0000, 0xFEB5, // 0x0140 (320) pixels
    0x0000, 0xFF97, 0xFF96, 0xFFB6, 0x0000, 0xFFFF, 0x0000, 0xFFB7, 0xFFF7, 0xFF76, 0xFFF7, 0xFFB7, 0x0000, 0xFFFF, 0x0000, 0x0000, // 0x0150 (336) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFF5, 0xFFFF, 0x0000, 0xFFF7, 0xFFB7, 0xFF96, 0xFF96, 0xFFF8, // 0x0160 (352) pixels
    0xFFD7, 0xFF97, 0xFF76, 0xFF56, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE70, 0xFE90, 0xFED1, 0xFEB1, 0xFE70, 0xFE90, 0xFEB1, 0x0000, // 0x0170 (368) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0xFFB7, 0xFFF7, 0xFF56, 0xFFF7, 0xFFB7, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, // 0x0180 (384) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFF9, 0x0000, 0x0000, 0xFF97, 0xFF96, 0xFFF7, 0xFFD7, 0xFF76, 0xFF76, // 0x0190 (400) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE70, 0xFED1, 0xFE70, 0xFE90, // 0x01A0 (416) pixels
    0xFE90, 0x0000, 0xFEB5, 0xFFF8, 0x0000, 0xFFD7, 0xFFF7, 0xFF56, 0xFFF7, 0xFFB7, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, // 0x01B0 (432) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFF7, 0x0000, 0xFF96, 0xFF96, 0xFFF8, 0xFFB7, 0xFF76, 0xFF76, 0xFF76, 0xFF76, // 0x01C0 (448) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFED1, // 0x01D0 (464) pixels
    0xFE70, 0xFE90, 0x0000, 0xFFF5, 0x0000, 0xFFB7, 0xFF96, 0xFFF7, 0xFFB7, 0x0000, 0xFE73, 0xFFF9, 0xFFF9, 0xFFF3, 0xFFF7, 0xFFF5, // 0x01E0 (480) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0xF800, 0xFFF7, 0x0000, 0xFFB6, 0xFF96, 0xFFF7, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, // 0x01F0 (496) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, // 0x0200 (512) pixels
    0xFE70, 0xFED1, 0xFE90, 0x0000, 0x0000, 0x0000, 0xFFB7, 0xFFD7, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0210 (528) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0xFFF7, 0x0000, 0xFF76, 0xFFB7, 0xFF97, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, // 0x0220 (544) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, // 0x0230 (560) pixels
    0xFE50, 0xFE50, 0xFEF1, 0xFE70, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0xFF96, 0xFFD7, 0xFF97, 0xFF97, 0xFFB7, 0xFFB7, // 0x0240 (576) pixels
    0x0000, 0x0000, 0x0000, 0xFFF7, 0x0000, 0xFF96, 0xFFD7, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, // 0x0250 (592) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, // 0x0260 (608) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFED1, 0xFE70, 0x0000, 0xFFF5, 0xFFF8, 0x0000, 0xFFB7, 0xFF96, 0xFF96, 0xFFB7, 0xFFD7, 0xFFF8, 0xFF96, // 0x0270 (624) pixels
    0x0000, 0x0000, 0xFFF9, 0x0000, 0xFFB7, 0xFF97, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, // 0x0280 (640) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, // 0x0290 (656) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFEF1, 0xFE90, 0x0000, 0xFEB5, 0x0000, 0xFF96, 0xFFF9, 0xFFD7, 0xFFF7, 0xFFB7, 0xFFB7, 0xFF96, // 0x02A0 (672) pixels
    0x0000, 0xFD55, 0x0000, 0xFF97, 0xFF96, 0xFFB7, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF56, 0xFF76, // 0x02B0 (688) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE4F, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, // 0x02C0 (704) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFED1, 0xFE90, 0x0000, 0x0000, 0xFF97, 0xFFB7, 0xFF96, 0xFF97, 0xFFB7, 0xFF96, 0xFFF5, // 0x02D0 (720) pixels
    0x0000, 0xFFFF, 0x0000, 0xFF97, 0xFFF8, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF96, 0xFF96, 0xFF76, // 0x02E0 (736) pixels
    0xFF56, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE4F, 0xFE70, 0xFE70, 0xFE50, 0xFE4F, 0xFE50, // 0x02F0 (752) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE70, 0xFE70, 0xFE90, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0300 (768) pixels
    0xFE73, 0x0000, 0xFF96, 0xFFD7, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF96, 0xFF96, 0xF735, 0xF715, 0xFF76, // 0x0310 (784) pixels
    0xFF96, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE4F, 0xFE70, 0xFE70, 0xF62F, 0xF60F, 0xFE50, 0xFE90, 0xFE50, // 0x0320 (800) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFED1, 0xFE90, 0x0000, 0xFFF5, 0xFFFF, 0xFFFF, 0xFFF7, 0xFFF5, 0xFFF5, 0xFFFF, // 0x0330 (816) pixels
    0x0000, 0x0000, 0xFF96, 0xFFD7, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF96, 0xF6F5, 0xB4AE, 0x934A, 0x8B2A, 0xA40C, // 0x0340 (832) pixels
    0xDE53, 0xFF96, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE70, 0xF60F, 0xAC0A, 0x7AA8, 0x7A87, 0x9329, 0xD54D, 0xFE70, // 0x0350 (848) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE70, 0xFEB1, 0x0000, 0xFDF0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0360 (864) pixels
    0x0000, 0xFFB7, 0xFFB7, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF56, 0xFF96, 0xF6F5, 0x8AE9, 0x70E5, 0x7186, 0x7125, 0x71C6, // 0x0370 (880) pixels
    0x68C5, 0xDE12, 0xFF96, 0xFF56, 0xFF76, 0xFE91, 0xFE2F, 0xFE70, 0xF60F, 0x7AA7, 0x4804, 0x5105, 0x4804, 0x5925, 0x4004, 0xCCEC, // 0x0380 (896) pixels
    0xFE70, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFED1, 0xFE90, 0x0000, 0xFFF5, 0xFFE0, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0390 (912) pixels
    0x0000, 0xFF96, 0xFFF7, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF96, 0xB4AE, 0x68C4, 0x8268, 0x936A, 0xA3EC, 0x7A27, // 0x03A0 (928) pixels
    0x7A07, 0x8AC9, 0xF735, 0xFF76, 0xFF76, 0xFE91, 0xFE2F, 0xFE90, 0xAC2B, 0x4004, 0x61C6, 0x7A87, 0x9349, 0x61A6, 0x6166, 0x69C6, // 0x03B0 (944) pixels
    0xF5EF, 0xFE70, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE70, 0xFE70, 0xFE70, 0x0000, 0xFFF0, 0x0000, 0x0000, 0x0000, 0x0000, // 0x03C0 (960) pixels
    0xFFB6, 0xFF96, 0xFF96, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xF735, 0x8B2A, 0x7186, 0x938B, 0xF715, 0xFF96, 0xB4CE, // 0x03D0 (976) pixels
    0x71A6, 0x71A6, 0xDE53, 0xFFB7, 0xFF56, 0xFE91, 0xFE4F, 0xFE2F, 0x82A8, 0x5105, 0x7A87, 0xEDEF, 0xFE70, 0xB44B, 0x5925, 0x5085, // 0x03E0 (992) pixels
    0xD52D, 0xFE90, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFEB1, 0xFE90, 0x0000, 0xFFF5, 0x0000, 0x0000, 0x0000, 0x0000, // 0x03F0 (1008) pixels
    0xFF96, 0xFFD7, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF96, 0xF715, 0x8AE9, 0x7125, 0xA42D, 0xFF96, 0xFFF7, 0xCDB1, // 0x0400 (1024) pixels
    0x7125, 0x79C6, 0xDE32, 0xFFB7, 0xFF56, 0xFE91, 0xFE4F, 0xFE2F, 0x7A87, 0x5085, 0x8B08, 0xFE70, 0xFED1, 0xCCEC, 0x50A5, 0x50A5, // 0x0410 (1040) pixels
    0xCD0C, 0xFE90, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFED1, 0xFE70, 0x0000, 0xFFF5, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0420 (1056) pixels
    0xFF96, 0xFFF8, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0x9BEC, 0x71A6, 0x8268, 0xBD0F, 0xCDD1, 0x8AC9, // 0x0430 (1072) pixels
    0x8248, 0x79E7, 0xEED4, 0xFF96, 0xFF76, 0xFE91, 0xFE4F, 0xFE70, 0x9B69, 0x50C5, 0x61A6, 0xAC0A, 0xCCEC, 0x7A67, 0x61A6, 0x50E5, // 0x0440 (1088) pixels
    0xE5AE, 0xFE70, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE90, 0xFE90, 0xFFF0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0450 (1104) pixels
    0xFF96, 0xFFD7, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF56, 0xFF97, 0xDE32, 0x6844, 0x7A27, 0x71A6, 0x7125, 0x7A47, // 0x0460 (1120) pixels
    0x6002, 0xBCEF, 0xFF96, 0xFF76, 0xFF76, 0xFE91, 0xFE2F, 0xFE70, 0xDD6E, 0x4804, 0x5965, 0x5905, 0x4824, 0x61A6, 0x3803, 0xA3CA, // 0x0470 (1136) pixels
    0xFE70, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE70, 0xFE70, 0xFE71, 0x0000, 0xFC10, 0x0000, 0x0000, 0x0000, // 0x0480 (1152) pixels
    0xFFB7, 0xFF97, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF96, 0xD5F1, 0x8288, 0x71A6, 0x71A6, 0x79E7, // 0x0490 (1168) pixels
    0xB4CE, 0xFF56, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE70, 0xD52D, 0x6A06, 0x5905, 0x50E5, 0x5925, 0xA3CA, 0xFE2F, // 0x04A0 (1184) pixels
    0xFE70, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE70, 0xFEB0, 0x0000, 0xFFF5, 0x0000, 0x0000, 0x0000, // 0x04B0 (1200) pixels
    0xFF96, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF96, 0xF715, 0xDE32, 0xD612, 0xEEB4, // 0x04C0 (1216) pixels
    0xFF96, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE70, 0xF60F, 0xD54D, 0xD50D, 0xE5AE, 0xFE70, 0xFE70, // 0x04D0 (1232) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE90, 0xFEB1, 0x0000, 0xFFF0, 0x0000, 0x0000, 0x0000, // 0x04E0 (1248) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF56, 0xFF96, 0xFFB7, 0xFFB7, 0xFF96, // 0x04F0 (1264) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE4F, 0xFE70, 0xFE90, 0xFE90, 0xFE70, 0xFE50, 0xFE50, // 0x0500 (1280) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE4F, 0xFEB0, 0xFE90, 0x0000, 0xFE73, 0x0000, 0x0000, 0x0000, // 0x0510 (1296) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF56, 0xFF56, 0xFF56, 0xFF56, // 0x0520 (1312) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE4F, 0xFE4F, 0xFE4F, 0xFE4F, 0xFE50, 0xFE50, // 0x0530 (1328) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE4F, 0xFEB0, 0xFE90, 0x0000, 0xFE6C, 0x0000, 0x0000, 0x0000, // 0x0540 (1344) pixels
    0xFF96, 0xFF96, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, // 0x0550 (1360) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE2F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, // 0x0560 (1376) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE90, 0xFEB1, 0x0000, 0xFDF0, 0x0000, 0x0000, 0x0000, // 0x0570 (1392) pixels
    0xFFB7, 0xFFB7, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, // 0x0580 (1408) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFEB1, 0xFE4F, 0xFE70, 0xFE70, 0xFE70, 0xFE70, 0xFE70, 0xFE70, 0xFE70, 0xFE50, 0xFE50, // 0x0590 (1424) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE70, 0xFEB1, 0x0000, 0xFD4A, 0x0000, 0x0000, 0x0000, // 0x05A0 (1440) pixels
    0xFF96, 0xFFF7, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF96, 0xFF56, 0xF735, 0xFF55, 0xFF55, // 0x05B0 (1456) pixels
    0xFF55, 0xFF55, 0xFF55, 0xFF55, 0xFF56, 0xFE71, 0xF60F, 0xF62F, 0xF62F, 0xF62F, 0xF62F, 0xF62F, 0xF62F, 0xF62F, 0xFE70, 0xFE50, // 0x05C0 (1472) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE70, 0xFE70, 0xFE71, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, // 0x05D0 (1488) pixels
    0xFFB7, 0xFFF8, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF96, 0xE673, 0x936A, 0x936A, 0x936A, 0x936A, // 0x05E0 (1504) pixels
    0x936A, 0x936A, 0x936A, 0x936A, 0x936A, 0x82E8, 0x82A7, 0x82C8, 0x82C8, 0x82C8, 0x82C8, 0x82C8, 0x82C8, 0x7A67, 0xBC6B, 0xFE50, // 0x05F0 (1520) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFEB0, 0xFE90, 0x0000, 0xFFE0, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0600 (1536) pixels
    0xFFB6, 0xFFB7, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF56, 0xFFB7, 0xB4AE, 0x5000, 0x7166, 0x68A4, 0x68C4, // 0x0610 (1552) pixels
    0x68C4, 0x68C4, 0x68C4, 0x68C4, 0x68C4, 0x5004, 0x4004, 0x4804, 0x4804, 0x4804, 0x4804, 0x4804, 0x4804, 0x3803, 0x5945, 0xF60F, // 0x0620 (1568) pixels
    0xFE70, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFED1, 0xFE90, 0x0000, 0xFDF0, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0630 (1584) pixels
    0xFF36, 0xFF96, 0xFFB7, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF96, 0xEEB4, 0xA42C, 0xA40C, 0xA40C, 0xA40C, // 0x0640 (1600) pixels
    0xA40C, 0xA40C, 0xA40C, 0xA40C, 0xA40C, 0x9B8A, 0x9349, 0x9349, 0x9349, 0x9349, 0x9349, 0x9349, 0x9369, 0x8B28, 0xC4CC, 0xFE70, // 0x0650 (1616) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE90, 0xFE91, 0x0000, 0xFD55, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0660 (1632) pixels
    0x0000, 0xFF96, 0xFFF8, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF96, 0xFF96, 0xFF76, 0xFF76, 0xFF76, // 0x0670 (1648) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE70, 0xFE50, // 0x0680 (1664) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFEB0, 0xFE70, 0xFFF5, 0x0000, 0xFC10, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0690 (1680) pixels
    0x0000, 0xFF97, 0xFF96, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, // 0x06A0 (1696) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE4F, 0xFE50, // 0x06B0 (1712) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFED1, 0xFE90, 0x0000, 0xFE6C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x06C0 (1728) pixels
    0xFFF5, 0x0000, 0xFF96, 0xFFF7, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, // 0x06D0 (1744) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE2F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, // 0x06E0 (1760) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE90, 0xFE70, 0xFED2, 0x0000, 0xFD4A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x06F0 (1776) pixels
    0xFFF5, 0x0000, 0xFF96, 0xFF96, 0xFF96, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, // 0x0700 (1792) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, // 0x0710 (1808) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFED1, 0xFE90, 0x0000, 0xFE73, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0720 (1824) pixels
    0x0000, 0xFFF7, 0x0000, 0xFFB6, 0xFFF8, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, // 0x0730 (1840) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, // 0x0740 (1856) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFEB1, 0xFE70, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0750 (1872) pixels
    0x0000, 0xFFFF, 0xFFFF, 0x0000, 0xFF96, 0xFFF8, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, // 0x0760 (1888) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, // 0x0770 (1904) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE70, 0xFE70, 0xFE91, 0x0000, 0xFFF5, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0780 (1920) pixels
    0x0000, 0x0000, 0xFFF5, 0x0000, 0xFF77, 0xFF96, 0xFFD7, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, // 0x0790 (1936) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, // 0x07A0 (1952) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE90, 0xFE91, 0x0000, 0xFE73, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x07B0 (1968) pixels
    0x0000, 0x0000, 0x0000, 0xFFF7, 0x0000, 0xFF96, 0xFF96, 0xFFD7, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, // 0x07C0 (1984) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, // 0x07D0 (2000) pixels
    0xFE50, 0xFE50, 0xFE50, 0xFEB0, 0xFE70, 0x0000, 0xFDF0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x07E0 (2016) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0xFFF9, 0x0000, 0xFF96, 0xFF96, 0xFFF8, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, // 0x07F0 (2032) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, // 0x0800 (2048) pixels
    0xFE50, 0xFE90, 0xFE90, 0xFE70, 0x0000, 0xFDF0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0810 (2064) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFF9, 0x0000, 0xFFF7, 0xFFB7, 0xFFF8, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, // 0x0820 (2080) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, // 0x0830 (2096) pixels
    0xFED1, 0xFE70, 0xFEB0, 0x0000, 0xFDF0, 0xFFE0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0840 (2112) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFF7, 0x0000, 0x0000, 0xFFB6, 0xFF96, 0xFFF7, 0xFF76, 0xFF76, 0xFF76, 0xFF76, // 0x0850 (2128) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE90, 0xFEB1, // 0x0860 (2144) pixels
    0xFE90, 0xFE70, 0x0000, 0xFDF0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0870 (2160) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFF5, 0xFFFF, 0x0000, 0xFFB7, 0xFF96, 0xFF96, 0xFFF8, 0xFFB7, 0xFF76, // 0x0880 (2176) pixels
    0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFE91, 0xFE4F, 0xFE50, 0xFE50, 0xFE50, 0xFE50, 0xFE70, 0xFED1, 0xFEB0, 0xFE70, 0xFE91, // 0x0890 (2192) pixels
    0x0000, 0x0000, 0xFE73, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x08A0 (2208) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFF7, 0x0000, 0x0000, 0xFF96, 0xFFB7, 0xFF96, 0xFF97, // 0x08B0 (2224) pixels
    0xFFF8, 0xFFF7, 0xFFB7, 0xFF96, 0xFF76, 0xFE91, 0xFE4F, 0xFE70, 0xFEB0, 0xFED1, 0xFEB1, 0xFE70, 0xFE90, 0xFE91, 0x0000, 0x0000, // 0x08C0 (2240) pixels
    0xFFF0, 0xFD4A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x08D0 (2256) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFF5, 0xFFFF, 0x0000, 0x0000, 0xFF36, 0xFFB7, // 0x08E0 (2272) pixels
    0xFFB6, 0xFF96, 0xFFB7, 0xFF96, 0xFF76, 0xFE91, 0xFE4F, 0xFE90, 0xFE90, 0xFE70, 0xFEB1, 0xFE91, 0x0000, 0x0000, 0x0000, 0xFE6C, // 0x08F0 (2288) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0900 (2304) pixels
};
