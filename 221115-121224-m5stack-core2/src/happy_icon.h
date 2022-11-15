#include <pgmspace.h> // PROGMEM support header

// Espressif logo pixel array in XBM format
// #define logoWidth 128  // logo width
// #define logoHeight 128 // logo height

// Image is stored in this array

PROGMEM const uint16_t happy_icon[] = {
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
    0x0000, 0xFFE0, 0xFD4A, 0xFDE8, 0xFE66, 0xFE66, 0xFDE8, 0xFFEA, 0xFC00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFF7, // 0x00B0 (176) pixels
    0x0000, 0xFF97, 0xFFF7, 0xFFB7, 0xFF96, 0x0000, 0xFFF9, 0x0000, 0xFFFF, 0x0000, 0xFFB7, 0xFFB7, 0x0000, 0x0000, 0xFFE0, 0x0000, // 0x00C0 (192) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFE0, 0xFFEA, 0xFDE8, // 0x00D0 (208) pixels
    0xFFE0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFEA, 0xFFEA, 0xFFF0, 0xF800, 0x0000, 0xFFFF, // 0x00E0 (224) pixels
    0x0000, 0xFF96, 0xFFD7, 0xFF96, 0xFFB7, 0x0000, 0xFFF9, 0xFFFF, 0x0000, 0xFFB7, 0xFFF7, 0xFFF8, 0xFFB7, 0x0000, 0xFFF5, 0x0000, // 0x00F0 (240) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFD4A, 0xFE66, 0x0000, 0x0000, 0x0000, // 0x0100 (256) pixels
    0x0000, 0xFEC9, 0xFF68, 0xFF28, 0xFF28, 0xFE48, 0xFE08, 0xFE48, 0xFE28, 0xFD4A, 0x0000, 0x0000, 0x0000, 0xFD4A, 0xFDE8, 0xFFFF, // 0x0110 (272) pixels
    0x0000, 0xFFB7, 0xFFF9, 0xFF96, 0xFF96, 0x0000, 0xFE73, 0x0000, 0xFFB7, 0xFFF7, 0xFF56, 0xFFF7, 0xFFD7, 0x0000, 0xFFF5, 0x0000, // 0x0120 (288) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFE6, 0x0000, 0x0000, 0xFFE0, 0xFF48, 0xFF28, // 0x0130 (304) pixels
    0xFF28, 0xFF08, 0xFF08, 0xFF28, 0xFF48, 0xFE68, 0xFE28, 0xFE08, 0xFE08, 0xFE08, 0xFE08, 0xFE28, 0xFE09, 0x0000, 0x0000, 0xFEB0, // 0x0140 (320) pixels
    0x0000, 0xFF97, 0xFF96, 0xFFB6, 0x0000, 0xFFFF, 0x0000, 0xFFB7, 0xFFF7, 0xFF76, 0xFFF7, 0xFFB7, 0x0000, 0xFFFF, 0x0000, 0x0000, // 0x0150 (336) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFEA, 0xFFE0, 0x0000, 0xFF48, 0xFF28, 0xFF08, 0xFF28, 0xFF88, // 0x0160 (352) pixels
    0xFF68, 0xFF28, 0xFF08, 0xFEE8, 0xFEE7, 0xFE27, 0xFDC7, 0xFDE8, 0xFE08, 0xFE28, 0xFE68, 0xFE48, 0xFE08, 0xFE08, 0xFE28, 0x0000, // 0x0170 (368) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0xFFB7, 0xFFF7, 0xFF56, 0xFFF7, 0xFFB7, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, // 0x0180 (384) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFE6, 0x0000, 0x0000, 0xFF08, 0xFF28, 0xFF68, 0xFF48, 0xFEE8, 0xFEE8, // 0x0190 (400) pixels
    0xFEE8, 0xFEE8, 0xFF08, 0xFEE8, 0xFF08, 0xFE28, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE08, 0xFE48, 0xFE08, 0xFE28, // 0x01A0 (416) pixels
    0xFE48, 0x0000, 0xFEB0, 0xFFF5, 0x0000, 0xFFD7, 0xFFF7, 0xFF56, 0xFFF7, 0xFFB7, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, // 0x01B0 (432) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFE8, 0x0000, 0xFF07, 0xFF28, 0xFF68, 0xFF28, 0xFEE8, 0xFEE8, 0xFF08, 0xFEE8, // 0x01C0 (448) pixels
    0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFE28, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE68, // 0x01D0 (464) pixels
    0xFE08, 0xFE28, 0x0000, 0xFFFF, 0x0000, 0xFFB7, 0xFF96, 0xFFF7, 0xFFB7, 0x0000, 0xFE73, 0xFFF9, 0xFFF9, 0xFFF3, 0xFFF7, 0xFFF5, // 0x01E0 (480) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0xF800, 0xFFE8, 0x0000, 0xFF28, 0xFF08, 0xFF68, 0xFEE8, 0xFF08, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, // 0x01F0 (496) pixels
    0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFE28, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, // 0x0200 (512) pixels
    0xFE08, 0xFE48, 0xFE28, 0x0000, 0x0000, 0x0000, 0xFFB7, 0xFFD7, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0210 (528) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0xFFE8, 0x0000, 0xFF07, 0xFF48, 0xFF28, 0xFEE7, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, // 0x0220 (544) pixels
    0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFE28, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, // 0x0230 (560) pixels
    0xFDE8, 0xFDE8, 0xFE68, 0xFE08, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0xFF96, 0xFFD7, 0xFF97, 0xFF97, 0xFFB7, 0xFFB7, // 0x0240 (576) pixels
    0x0000, 0x0000, 0x0000, 0xFFE8, 0x0000, 0xFF28, 0xFF48, 0xFF08, 0xFEE8, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, // 0x0250 (592) pixels
    0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFE28, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, // 0x0260 (608) pixels
    0xFDE8, 0xFDE8, 0xFDE7, 0xFE68, 0xFE08, 0x0000, 0xFFFF, 0xFFF5, 0x0000, 0xFFB7, 0xFF96, 0xFF96, 0xFFB7, 0xFFD7, 0xFFF8, 0xFF96, // 0x0270 (624) pixels
    0x0000, 0x0000, 0xFFE6, 0x0000, 0xFF28, 0xFF28, 0xFF08, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, // 0x0280 (640) pixels
    0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFE28, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, // 0x0290 (656) pixels
    0xFDE8, 0xFDE8, 0xFDE8, 0xFDE7, 0xFE68, 0xFE28, 0x0000, 0xFEB0, 0x0000, 0xFF96, 0xFFF9, 0xFFD7, 0xFFF7, 0xFFB7, 0xFFB7, 0xFF96, // 0x02A0 (672) pixels
    0x0000, 0xFD4A, 0x0000, 0xFF48, 0xFF08, 0xFF28, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF08, 0xFF28, 0xFF28, 0xFF28, // 0x02B0 (688) pixels
    0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFE28, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE08, 0xFE08, 0xFE08, 0xFE08, 0xFDE8, 0xFDE8, // 0x02C0 (704) pixels
    0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE48, 0xFE28, 0x0000, 0x0000, 0xFF97, 0xFFB7, 0xFF96, 0xFF97, 0xFFB7, 0xFF96, 0xFFF5, // 0x02D0 (720) pixels
    0x0000, 0xFFF0, 0x0000, 0xFF28, 0xFF68, 0xFEE7, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF28, 0xF688, 0xD5A8, 0xD588, 0xEE48, // 0x02E0 (736) pixels
    0xFF08, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, 0xFE28, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE08, 0xF5A7, 0xD4C7, 0xCCA7, 0xE547, 0xFE08, 0xFE08, // 0x02F0 (752) pixels
    0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE08, 0xFE08, 0xFDE6, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0300 (768) pixels
    0xFE66, 0x0000, 0xFF28, 0xFF48, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF08, 0xCD68, 0x8268, 0x7188, 0x71A8, 0x71C8, // 0x0310 (784) pixels
    0xB468, 0xFEE8, 0xFF08, 0xFEE8, 0xFEE8, 0xFE28, 0xFDE8, 0xFDE8, 0xFE08, 0xCCC7, 0x69C6, 0x50C6, 0x50E6, 0x5106, 0xA386, 0xFDC7, // 0x0320 (800) pixels
    0xFE08, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE68, 0xFE28, 0x0000, 0xFEB0, 0xFFFF, 0xFFFF, 0xFFF7, 0xFFF5, 0xFFF5, 0xFFFF, // 0x0330 (816) pixels
    0x0000, 0x0000, 0xFF08, 0xFF48, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF28, 0xDDC8, 0x6888, 0x7A28, 0x79E8, 0x71A8, 0x8268, // 0x0340 (832) pixels
    0x6008, 0xB488, 0xFF08, 0xFEE8, 0xFEE8, 0xFE28, 0xFDC8, 0xFE08, 0xDD07, 0x4006, 0x6166, 0x5946, 0x50E6, 0x61C6, 0x3806, 0xA386, // 0x0350 (848) pixels
    0xFE08, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE08, 0xFE48, 0x0000, 0xFDE8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0360 (864) pixels
    0x0000, 0xFF28, 0xFF48, 0xFEE7, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF08, 0xFEE8, 0x9BA8, 0x71C8, 0x8288, 0xC4E8, 0xD588, 0x8AE8, // 0x0370 (880) pixels
    0x8268, 0x7A08, 0xEE68, 0xFF08, 0xFEE8, 0xFE28, 0xFDC8, 0xFE08, 0x9326, 0x5106, 0x69C6, 0xB3E7, 0xD4C7, 0x7A86, 0x69C6, 0x5106, // 0x0380 (896) pixels
    0xE547, 0xFE08, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE48, 0xFE28, 0x0000, 0xFD4A, 0xF800, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0390 (912) pixels
    0x0000, 0xFF28, 0xFF68, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF08, 0xF6A8, 0x8288, 0x7168, 0xA3A8, 0xFF28, 0xFF68, 0xC528, // 0x03A0 (928) pixels
    0x6928, 0x7188, 0xD5A8, 0xFF28, 0xFEE8, 0xFE28, 0xFDE8, 0xF5C7, 0x7226, 0x50C6, 0x82A6, 0xFDE8, 0xFE48, 0xCC87, 0x4886, 0x4866, // 0x03B0 (944) pixels
    0xCCA7, 0xFE08, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE08, 0xFE08, 0xFE07, 0x0000, 0xFFF0, 0x0000, 0x0000, 0x0000, 0x0000, // 0x03C0 (960) pixels
    0xFF08, 0xFF28, 0xFF28, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF08, 0xFEE8, 0xAC28, 0x6008, 0xCD68, 0xFF08, 0xFEE8, 0xEE68, // 0x03D0 (976) pixels
    0x8248, 0x82A8, 0xEE68, 0xFF08, 0xFEE8, 0xFE28, 0xFDE8, 0xFDE8, 0xABA6, 0x3006, 0xC467, 0xFE08, 0xFDE8, 0xED87, 0x6A06, 0x61A6, // 0x03E0 (992) pixels
    0xE547, 0xFE08, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE48, 0xFE28, 0x0000, 0xFFEA, 0x0000, 0x0000, 0x0000, 0x0000, // 0x03F0 (1008) pixels
    0xFF28, 0xFF68, 0xFEE8, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF08, 0xFEC8, 0xEE68, 0xFF08, 0xFEE8, 0xFEE8, 0xFF08, // 0x0400 (1024) pixels
    0xF688, 0xF6A8, 0xFF08, 0xFEE8, 0xFF08, 0xFE28, 0xFDC8, 0xFE08, 0xFDC8, 0xED67, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE08, 0xF5A7, 0xED87, // 0x0410 (1040) pixels
    0xFE08, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE68, 0xFE08, 0x0000, 0xFFEA, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0420 (1056) pixels
    0xFF08, 0xFF88, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF08, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, // 0x0430 (1072) pixels
    0xFF08, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, 0xFE28, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE08, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE08, 0xFE08, // 0x0440 (1088) pixels
    0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE28, 0xFE28, 0xFFF0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0450 (1104) pixels
    0xFF28, 0xFF48, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE7, 0xFEE8, 0xFF09, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF08, // 0x0460 (1120) pixels
    0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF08, 0xFE28, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, // 0x0470 (1136) pixels
    0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE08, 0xFE08, 0xFE28, 0x0000, 0xFC00, 0x0000, 0x0000, 0x0000, // 0x0480 (1152) pixels
    0xFF28, 0xFF28, 0xFEE7, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE7, 0xFEE0, 0xFEE0, 0xFEE0, 0xFEE0, 0xFEE0, 0xFEE0, 0xFEE0, // 0x0490 (1168) pixels
    0xFEE0, 0xFEE0, 0xFEE0, 0xFEE0, 0xFEE0, 0xFE04, 0xFDC5, 0xFDC5, 0xFDC5, 0xFDC5, 0xFDC5, 0xFDC5, 0xFDC5, 0xFDC5, 0xFDC5, 0xFDC5, // 0x04A0 (1184) pixels
    0xFDC5, 0xFDC6, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE08, 0xFE28, 0x0000, 0xFFEA, 0x0000, 0x0000, 0x0000, // 0x04B0 (1200) pixels
    0xFF08, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE7, 0xFEE9, 0xFF75, 0xFF97, 0xFF77, 0xFF97, 0xFF77, 0xFF77, 0xFF77, // 0x04C0 (1216) pixels
    0xFF77, 0xFF77, 0xFF77, 0xFF77, 0xFF97, 0xFEF3, 0xFED1, 0xFED2, 0xFED2, 0xFED2, 0xFED2, 0xFED2, 0xFED2, 0xFED2, 0xFED2, 0xFED2, // 0x04D0 (1232) pixels
    0xFED2, 0xFE2C, 0xFDE6, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE7, 0xFE28, 0xFE28, 0x0000, 0xFDE8, 0x0000, 0x0000, 0x0000, // 0x04E0 (1248) pixels
    0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE7, 0xFF09, 0xFEE0, 0xFF53, 0xFFFE, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, // 0x04F0 (1264) pixels
    0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFF98, 0xFF76, 0xFF97, 0xFF97, 0xFF97, 0xFF97, 0xFF97, 0xFF97, 0xFF97, 0xFF97, 0xFF96, // 0x0500 (1280) pixels
    0xFF97, 0xFF34, 0xFDE6, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE7, 0xFE28, 0xFE08, 0x0000, 0xFE66, 0x0000, 0x0000, 0x0000, // 0x0510 (1296) pixels
    0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE7, 0xFF09, 0xFEE0, 0xFF74, 0xFFFD, 0xFFFC, 0xFFFC, 0xFFFC, 0xFFFC, 0xFFFC, 0xFFFC, // 0x0520 (1312) pixels
    0xFFFC, 0xFFFC, 0xFFFC, 0xFFFC, 0xFFFC, 0xFF97, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, 0xFF76, // 0x0530 (1328) pixels
    0xFF96, 0xFF34, 0xFDE7, 0xFDE7, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE7, 0xFE28, 0xFE08, 0x0000, 0xFE66, 0x0000, 0x0000, 0x0000, // 0x0540 (1344) pixels
    0xFF08, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF07, 0xEE6B, 0xA470, 0xAC90, 0xAC90, 0xAC90, 0xAC90, 0xAC90, 0xAC90, // 0x0550 (1360) pixels
    0xAC90, 0xAC90, 0xAC90, 0xAC90, 0xAC90, 0x9C4D, 0x9C2C, 0x9C2C, 0x9C2C, 0x9C2C, 0x9C2C, 0x9C2C, 0x9C2C, 0x9C2C, 0x9C2C, 0x9C2C, // 0x0560 (1376) pixels
    0x940C, 0xC4CB, 0xFE07, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE28, 0xFE48, 0x0000, 0xFDE8, 0x0000, 0x0000, 0x0000, // 0x0570 (1392) pixels
    0xFF28, 0xFF28, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE7, 0xFF08, 0xEE66, 0x7101, 0x7102, 0x7102, 0x7102, 0x7102, 0x7102, 0x7102, // 0x0580 (1408) pixels
    0x7102, 0x7102, 0x7102, 0x7102, 0x7102, 0x5802, 0x4802, 0x5002, 0x5002, 0x5002, 0x5002, 0x5002, 0x5002, 0x5002, 0x5002, 0x5802, // 0x0590 (1424) pixels
    0x2001, 0xBC25, 0xFE28, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE08, 0xFE48, 0x0000, 0xFD4A, 0x0000, 0x0000, 0x0000, // 0x05A0 (1440) pixels
    0xFF08, 0xFF68, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE7, 0xFF08, 0xA3E9, 0x7A29, 0x82C9, 0x82A9, 0x82A9, 0x82A9, 0x82A9, // 0x05B0 (1456) pixels
    0x82A9, 0x82A9, 0x82A9, 0x8AA9, 0x8AA9, 0x7227, 0x7207, 0x7207, 0x6A07, 0x6A07, 0x6A07, 0x6A07, 0x6A07, 0x6A07, 0x6A07, 0x6A27, // 0x05C0 (1472) pixels
    0x59A7, 0xE548, 0xFE08, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE08, 0xFE08, 0xFDE8, 0x0000, 0xFFE0, 0x0000, 0x0000, 0x0000, // 0x05D0 (1488) pixels
    0xFF28, 0xFF88, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF28, 0xCD48, 0x68E8, 0x8288, 0x7A48, 0x8248, 0x8248, 0x8247, // 0x05E0 (1504) pixels
    0x8247, 0x8248, 0x7248, 0x6A48, 0x6A48, 0x51C6, 0x49A6, 0x51A6, 0x61A6, 0x69A6, 0x69A6, 0x61A6, 0x61A6, 0x61A6, 0x69C6, 0x5926, // 0x05F0 (1520) pixels
    0x8AC6, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE48, 0xFE28, 0x0000, 0xFFE0, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0600 (1536) pixels
    0xFF28, 0xFF28, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF08, 0xF6A8, 0x8AC8, 0x7A28, 0x8268, 0x7A48, 0x8248, 0x8248, // 0x0610 (1552) pixels
    0x7248, 0x7A48, 0xA287, 0xC2A7, 0xCAC7, 0xC205, 0xB1A4, 0x99C5, 0x71A6, 0x51A6, 0x61A6, 0x69A6, 0x61A6, 0x61A6, 0x69E6, 0x4006, // 0x0620 (1568) pixels
    0xCCA7, 0xFE08, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE68, 0xFE28, 0x0000, 0xFDE8, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0630 (1584) pixels
    0xFF29, 0xFF28, 0xFF48, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF28, 0xCD68, 0x68C8, 0x8288, 0x8248, 0x7A48, 0x7248, // 0x0640 (1600) pixels
    0xBAA7, 0xEB06, 0xFB26, 0xFB26, 0xFB26, 0xF223, 0xE9A2, 0xE9C2, 0xE1C3, 0xB9C4, 0x71A6, 0x51A6, 0x69A6, 0x69E6, 0x50C6, 0x8B06, // 0x0650 (1616) pixels
    0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE28, 0xFE28, 0x0000, 0xFD4A, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0660 (1632) pixels
    0x0000, 0xFF28, 0xFF88, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF08, 0xAC28, 0x7128, 0x7AA8, 0x8A67, 0xE2E6, // 0x0670 (1648) pixels
    0xFB26, 0xFB26, 0xFB26, 0xFB26, 0xFB26, 0xEA23, 0xE1A2, 0xE1C3, 0xE1C2, 0xE9C2, 0xE1C3, 0x91A5, 0x59E6, 0x6186, 0x6186, 0xED67, // 0x0680 (1664) pixels
    0xFE08, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE28, 0xFE08, 0xFFEA, 0x0000, 0xFC00, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0690 (1680) pixels
    0x0000, 0xFF08, 0xFF08, 0xFF08, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF08, 0xFEC8, 0x9BA8, 0x8147, 0xEB26, 0xFB46, // 0x06A0 (1696) pixels
    0xFB26, 0xFB26, 0xFB26, 0xFB26, 0xFB26, 0xEA23, 0xE1A2, 0xE1C3, 0xE1C2, 0xE1C3, 0xE9C2, 0xEA02, 0x9965, 0x4926, 0xDD07, 0xFE08, // 0x06B0 (1712) pixels
    0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE48, 0xFE28, 0x0000, 0xFE66, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x06C0 (1728) pixels
    0xFFEA, 0x0000, 0xFF28, 0xFF68, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF08, 0xF6C8, 0xEC67, 0xFA66, 0xFB06, // 0x06D0 (1744) pixels
    0xFB46, 0xFB26, 0xFB26, 0xFB26, 0xFB26, 0xEA23, 0xE1A2, 0xE1C2, 0xE1C2, 0xE203, 0xE1E3, 0xE0A1, 0xE203, 0xE527, 0xFE08, 0xFDE8, // 0x06E0 (1760) pixels
    0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE08, 0xFE08, 0xFE49, 0x0000, 0xFD4A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x06F0 (1776) pixels
    0xFD4A, 0x0000, 0xFF08, 0xFF28, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF08, 0xFF08, 0xFD87, 0xFB46, // 0x0700 (1792) pixels
    0xFA66, 0xFAE6, 0xFB26, 0xFB46, 0xFB46, 0xEA43, 0xE1E2, 0xE1E3, 0xE1A2, 0xE0C2, 0xE102, 0xEB84, 0xFD87, 0xFE08, 0xFDE8, 0xFDE8, // 0x0710 (1808) pixels
    0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE68, 0xFE28, 0x0000, 0xFE66, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0720 (1824) pixels
    0x0000, 0xFFE8, 0x0000, 0xFF28, 0xFF88, 0xFEE7, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF28, 0xFEA7, // 0x0730 (1840) pixels
    0xFD67, 0xFBE6, 0xFB06, 0xFAA6, 0xFA86, 0xE943, 0xE081, 0xE142, 0xE243, 0xEBA5, 0xFD27, 0xFE08, 0xFE08, 0xFDE8, 0xFDE8, 0xFDE8, // 0x0740 (1856) pixels
    0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE7, 0xFE48, 0xFE08, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0750 (1872) pixels
    0x0000, 0xFFE0, 0xFFE0, 0x0000, 0xFF28, 0xFF88, 0xFEE8, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF08, // 0x0760 (1888) pixels
    0xFF28, 0xFEE8, 0xFE67, 0xFDE7, 0xFDA7, 0xF4C6, 0xF4A6, 0xFD27, 0xFDA7, 0xFE08, 0xFE08, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, // 0x0770 (1904) pixels
    0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE08, 0xFE08, 0xFE28, 0x0000, 0xFD4A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0780 (1920) pixels
    0x0000, 0x0000, 0xFFEA, 0x0000, 0xFF68, 0xFF08, 0xFF48, 0xFEE8, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, // 0x0790 (1936) pixels
    0xFEE8, 0xFF08, 0xFF08, 0xFF28, 0xFF28, 0xFE48, 0xFE08, 0xFE08, 0xFE08, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, // 0x07A0 (1952) pixels
    0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE28, 0xFE48, 0x0000, 0xFE66, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x07B0 (1968) pixels
    0x0000, 0x0000, 0x0000, 0xFFE8, 0x0000, 0xFF08, 0xFF08, 0xFF48, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, // 0x07C0 (1984) pixels
    0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFE07, 0xFDC7, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, // 0x07D0 (2000) pixels
    0xFDE8, 0xFDE8, 0xFDE8, 0xFE48, 0xFE08, 0x0000, 0xFDE8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x07E0 (2016) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0xFFE6, 0x0000, 0xFF08, 0xFF08, 0xFF88, 0xFEE7, 0xFEE8, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, // 0x07F0 (2032) pixels
    0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFF08, 0xFE28, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, // 0x0800 (2048) pixels
    0xFDE7, 0xFE28, 0xFE28, 0xFE08, 0x0000, 0xFDE8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0810 (2064) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFE6, 0x0000, 0xFF68, 0xFF28, 0xFF88, 0xFF08, 0xFEE8, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, // 0x0820 (2080) pixels
    0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFE28, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, // 0x0830 (2096) pixels
    0xFE48, 0xFE08, 0xFE48, 0x0000, 0xFDE8, 0xF800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0840 (2112) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFE8, 0x0000, 0x0000, 0xFF28, 0xFF08, 0xFF68, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, // 0x0850 (2128) pixels
    0xFEE8, 0xFF08, 0xFEE8, 0xFEE8, 0xFEE8, 0xFE28, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE7, 0xFE28, 0xFE48, // 0x0860 (2144) pixels
    0xFE28, 0xFE07, 0x0000, 0xFDE8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0870 (2160) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFEA, 0xFFE0, 0x0000, 0xFF48, 0xFF28, 0xFF08, 0xFF88, 0xFF48, 0xFEE8, // 0x0880 (2176) pixels
    0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFEE8, 0xFE28, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFDE8, 0xFE08, 0xFE48, 0xFE28, 0xFE08, 0xFE28, // 0x0890 (2192) pixels
    0x0000, 0x0000, 0xFE66, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x08A0 (2208) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFE0, 0xFFE8, 0x0000, 0x0000, 0xFF28, 0xFF28, 0xFF28, 0xFF28, // 0x08B0 (2224) pixels
    0xFF88, 0xFF68, 0xFF28, 0xFF08, 0xFF08, 0xFE28, 0xFDE8, 0xFE08, 0xFE48, 0xFE68, 0xFE48, 0xFE08, 0xFE08, 0xFE28, 0x0000, 0x0000, // 0x08C0 (2240) pixels
    0xFFF0, 0xFD4A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x08D0 (2256) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFD4A, 0xFFEA, 0x0000, 0x0000, 0xFE69, 0xFF28, // 0x08E0 (2272) pixels
    0xFF28, 0xFF28, 0xFF28, 0xFF28, 0xFF08, 0xFE28, 0xFDE8, 0xFE28, 0xFE28, 0xFE08, 0xFE28, 0xFE48, 0x0000, 0x0000, 0x0000, 0xFE66, // 0x08F0 (2288) pixels
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // 0x0900 (2304) pixels
};