#include "../include.h"

// format: 8-bit paletted pixel graphics
// image width: 100 pixels
// image height: 25 lines
// image pitch: 100 bytes
const u16 FishImg_Pal[256] __attribute__ ((aligned(4))) = {
	0xF81F, 0xF882, 0xF8A3, 0xF8A3, 0xF8A3, 0xF8A3, 0xF8C3, 0xF8C3, 0xF8E3, 0xF904, 0xF924, 0xF924, 0xF9C7, 0xF1C7, 0xF842, 0xF862, 
	0xF862, 0xD0A3, 0xF8E4, 0xF925, 0xF966, 0xD125, 0xE146, 0xF9A7, 0xF9E8, 0xF1E8, 0xF208, 0xEA29, 0xD30C, 0xE26A, 0xE2EC, 0xC24A, 
	0xB26B, 0xB2ED, 0xE3F2, 0xB390, 0xDC74, 0xABF1, 0x9A2C, 0xE992, 0xD2F4, 0xD5DA, 0xCCFA, 0x93F5, 0xB55B, 0x8C53, 0x8C96, 0x7BF2, 
	0xDEFD, 0x08C5, 0x03FF, 0x0BFF, 0x349D, 0x3C7B, 0x44DD, 0x6435, 0x045F, 0x0C7F, 0x4CDA, 0x04BD, 0x14DE, 0x149B, 0x353D, 0x4C76, 
	0x54F8, 0x04FD, 0x04BC, 0x4C55, 0x4C34, 0x04DC, 0x5539, 0x4434, 0x4C96, 0x4C95, 0x4454, 0x54B6, 0x4C54, 0x5474, 0x5CB5, 0x6CD6, 
	0x0D5D, 0x3D7A, 0x5D36, 0x5C94, 0x0DBB, 0x64D4, 0x161C, 0x1E9C, 0x2EBC, 0x36BC, 0x3EBC, 0xCF7E, 0xD77E, 0xDF9E, 0x267B, 0x6CF3, 
	0x46FC, 0xB77D, 0xD73D, 0x4638, 0x571C, 0x5EFC, 0x6F3C, 0x773C, 0x9F5D, 0xAF7D, 0xB77D, 0xBF7D, 0x673C, 0x8F5D, 0x975D, 0xA75D, 
	0xA77D, 0xBF5D, 0xE79E, 0x875C, 0x8D96, 0x6CF3, 0x873B, 0x66B8, 0xC73C, 0xE77D, 0x7D13, 0xA5D6, 0xE75D, 0xE77D, 0x8717, 0xB73A, 
	0x8D33, 0xD73B, 0xD6FA, 0xAEB7, 0xCEF9, 0xE75C, 0xE73C, 0x8D51, 0x96D1, 0xC737, 0xB732, 0x9571, 0xAEF0, 0x9D90, 0xDEFA, 0xC696, 
	0xDEFA, 0xE71B, 0xCE97, 0xA5B0, 0xD6B8, 0xCE77, 0xD70E, 0xC652, 0xD6B8, 0xB5CC, 0xDEFA, 0xE71B, 0xEEE8, 0xD649, 0xD68F, 0xCDEA, 
	0xDED4, 0xE6F6, 0xD675, 0xF6A0, 0xFEC0, 0xF6C0, 0xF6C1, 0xF6A1, 0xEE83, 0xEE64, 0xD627, 0xDED9, 0xDEFA, 0xDEFA, 0xFEA0, 0xFEC1, 
	0xE624, 0xE666, 0xE668, 0xEEAB, 0xE68E, 0xDEB2, 0xD697, 0xDED8, 0xF640, 0xF620, 0xEE00, 0xEDE0, 0xF640, 0xF640, 0xF640, 0xF640, 
	0xF640, 0xEE20, 0xF620, 0xF620, 0xF660, 0xF640, 0xF661, 0xF641, 0xF641, 0xFEA1, 0xF662, 0xF663, 0xEE64, 0xF685, 0xF686, 0xEE87, 
	0xEE89, 0xE64B, 0xF620, 0xEE00, 0xEE00, 0xF620, 0xF620, 0xF600, 0xEE00, 0xF620, 0xEE00, 0xF620, 0xEE00, 0xEE00, 0xE5E1, 0xEE01, 
	0xDEDA, 0xD698, 0xDEB9, 0xDEB9, 0xD699, 0xE5F6, 0xFA06, 0xFB4B, 0xF9A5, 0xFA47, 0xF840, 0xF860, 0xF881, 0xF8A1, 0xF8E2, 0xF944, 
	0xF820, 0xF840, 0xF840, 0xF861, 0xF861, 0xF882, 0xF082, 0xF8A2, 0xF0C2, 0xF8C3, 0xF0C3, 0xF904, 0xF924, 0xE1C7, 0xFACB, 0xEB8D, 
};

const u8 FishImg[2500] __attribute__ ((aligned(4))) = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x36, 0x46, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x36, 0x46, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x3A, 0x34, 0x33, 0x32, 0x32, 
	0x33, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x3A, 0x34, 0x33, 
	0x32, 0x32, 0x33, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x35, 0x32, 0x38, 
	0x38, 0x38, 0x38, 0x39, 0x3A, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x35, 
	0x32, 0x38, 0x38, 0x38, 0x38, 0x39, 0x3A, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x40, 0x46, 0x51, 
	0x3D, 0x42, 0x45, 0x45, 0x45, 0x41, 0x3B, 0x3C, 0x3A, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x40, 
	0x46, 0x51, 0x3D, 0x42, 0x45, 0x45, 0x45, 0x41, 0x3B, 0x3C, 0x3A, 0x40, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2F, 0x20, 0x11, 
	0x26, 0x51, 0x58, 0x59, 0x5A, 0x5A, 0x5A, 0x5A, 0x59, 0x58, 0x57, 0x56, 0x50, 0x41, 0x3B, 0x3E, 
	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x75, 0x4A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2F, 
	0x20, 0x11, 0x26, 0x51, 0x58, 0x59, 0x5A, 0x5A, 0x5A, 0x5A, 0x59, 0x58, 0x57, 0x56, 0x50, 0x41, 
	0x3B, 0x3E, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2F, 
	0x15, 0xF0, 0xF0, 0xF1, 0xF3, 0xFA, 0x80, 0x64, 0x65, 0x65, 0x65, 0x65, 0x65, 0x65, 0x64, 0x64, 
	0x60, 0x58, 0x57, 0x54, 0x50, 0x3C, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x4D, 0x9F, 0xD2, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x2F, 0x15, 0xF0, 0xF0, 0xF1, 0xF3, 0xFA, 0x80, 0x64, 0x65, 0x65, 0x65, 0x65, 0x65, 0x65, 
	0x64, 0x64, 0x60, 0x58, 0x57, 0x54, 0x50, 0x3C, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x21, 0xF1, 0xF2, 0xF1, 0xF0, 0xF1, 0xF3, 0xF6, 0xF9, 0x74, 0x66, 0x66, 0x67, 0x67, 
	0x67, 0x66, 0x66, 0x66, 0x6C, 0x6C, 0x7E, 0x88, 0x5E, 0x54, 0x41, 0x3E, 0x49, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8D, 0xC8, 0xB8, 0xB9, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x21, 0xF1, 0xF2, 0xF1, 0xF0, 0xF1, 0xF3, 0xF6, 0xF9, 0x74, 0x66, 0x66, 
	0x67, 0x67, 0x67, 0x66, 0x66, 0x66, 0x6C, 0x6C, 0x7E, 0x88, 0x5E, 0x54, 0x41, 0x3E, 0x49, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF2, 0x0E, 0xF5, 0xF5, 0xF4, 0xEA, 0xEC, 0xF8, 0xFB, 0x1C, 
	0x6E, 0x68, 0x68, 0x68, 0x68, 0x6E, 0x6D, 0x6D, 0x73, 0x73, 0x73, 0x8A, 0x8C, 0x57, 0x56, 0x50, 
	0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0xAA, 0xC0, 0xBF, 0xB8, 0xB9, 0x55, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF2, 0x0E, 0xF5, 0xF5, 0xF4, 0xEA, 0xEC, 0xF8, 
	0xFB, 0x1C, 0x6E, 0x68, 0x68, 0x68, 0x68, 0x6E, 0x6D, 0x6D, 0x73, 0x73, 0x73, 0x8A, 0x8C, 0x57, 
	0x56, 0x50, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x0E, 0x0E, 0x10, 0x01, 0x03, 0x05, 0xF5, 
	0xF2, 0xEE, 0xFC, 0x0D, 0x6F, 0x6F, 0x70, 0x70, 0x69, 0x69, 0x69, 0x69, 0x69, 0x70, 0x70, 0x7F, 
	0x9C, 0x60, 0x58, 0x5E, 0x4B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x93, 0xCD, 0xCA, 0xC5, 0xBD, 
	0xBE, 0xB9, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x0E, 0x0E, 0x10, 0x01, 0x03, 
	0x05, 0xF5, 0xF2, 0xEE, 0xFC, 0x0D, 0x6F, 0x6F, 0x70, 0x70, 0x69, 0x69, 0x69, 0x69, 0x69, 0x70, 
	0x70, 0x7F, 0x9C, 0x60, 0x58, 0x5E, 0x4B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x0E, 0x0E, 0x0F, 0x0F, 
	0x01, 0x03, 0x06, 0x07, 0xF4, 0xED, 0xFC, 0x0C, 0x6B, 0x6B, 0x6A, 0x6B, 0x6B, 0x6A, 0x6A, 0x61, 
	0x61, 0x61, 0x61, 0x89, 0x96, 0x73, 0x6C, 0x60, 0x5E, 0x52, 0x00, 0x00, 0x00, 0x4D, 0x9E, 0xB3, 
	0xCF, 0xCB, 0xC4, 0xBC, 0xB8, 0xB9, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x0E, 0x0E, 
	0x0F, 0x0F, 0x01, 0x03, 0x06, 0x07, 0xF4, 0xED, 0xFC, 0x0C, 0x6B, 0x6B, 0x6A, 0x6B, 0x6B, 0x6A, 
	0x6A, 0x61, 0x61, 0x61, 0x61, 0x89, 0x96, 0x73, 0x6C, 0x60, 0x5E, 0x52, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x4C, 0x53, 0x55, 0x75, 0x75, 0x75, 0x75, 0x75, 0x53, 0x00, 0x00, 0x44, 0x20, 0x0E, 
	0x10, 0x0F, 0x1A, 0x0D, 0x10, 0x04, 0x06, 0x08, 0xF7, 0xEC, 0xEF, 0xFE, 0x62, 0x29, 0x2C, 0x5C, 
	0x5C, 0x5C, 0x5B, 0x5B, 0x5B, 0x5B, 0x5B, 0x96, 0x89, 0x70, 0x6F, 0x6D, 0x76, 0x77, 0x63, 0x46, 
	0x74, 0x9E, 0xB5, 0xB3, 0xCD, 0xC6, 0xBF, 0xD6, 0xBA, 0xD4, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x44, 
	0x20, 0x0E, 0x10, 0x0F, 0x1A, 0x0D, 0x10, 0x04, 0x06, 0x08, 0xF7, 0xEC, 0xEF, 0xFE, 0x62, 0x29, 
	0x2C, 0x5C, 0x5C, 0x5C, 0x5B, 0x5B, 0x5B, 0x5B, 0x5B, 0x96, 0x89, 0x70, 0x6F, 0x6D, 0x76, 0x77, 
	0x63, 0x46, 0x52, 0x7B, 0x9E, 0xB3, 0xD0, 0xCE, 0xCB, 0xC5, 0xC0, 0xBC, 0xBD, 0xD2, 0x9F, 0x00, 
	0x00, 0x16, 0x0F, 0x03, 0x04, 0xFF, 0x2F, 0x2F, 0x1E, 0x03, 0x06, 0x08, 0xF7, 0xEB, 0xEF, 0xFF, 
	0x24, 0x2C, 0x2C, 0x5D, 0x5D, 0x5D, 0x5D, 0x5D, 0x5D, 0x5D, 0x5D, 0x9C, 0x78, 0x71, 0x71, 0x71, 
	0x7F, 0x83, 0x83, 0x83, 0x8E, 0x9A, 0xA0, 0xD0, 0xCB, 0xDB, 0xD5, 0xD6, 0xD3, 0xBA, 0x87, 0x00, 
	0x00, 0x00, 0x00, 0x1F, 0x0E, 0x03, 0x04, 0xFF, 0x2F, 0x2F, 0x1E, 0x03, 0x06, 0x08, 0xF7, 0xEB, 
	0xEF, 0xFF, 0x24, 0x2C, 0x2C, 0x5D, 0x5D, 0x5D, 0x5D, 0x5D, 0x5D, 0x5D, 0x5D, 0x9C, 0x78, 0x71, 
	0x71, 0x71, 0x7F, 0x83, 0x83, 0x83, 0x90, 0x9A, 0xA1, 0xB4, 0xB3, 0xCE, 0xCB, 0xC5, 0xBF, 0xBD, 
	0xB8, 0xB0, 0x4C, 0x00, 0x00, 0x25, 0x07, 0x09, 0x13, 0x23, 0x31, 0x31, 0x25, 0x07, 0x07, 0x06, 
	0x09, 0xFE, 0xFE, 0x1E, 0x24, 0x2C, 0x30, 0x72, 0x72, 0x72, 0x72, 0x72, 0x72, 0x72, 0x7D, 0x9C, 
	0x81, 0x62, 0x62, 0x62, 0x84, 0x8F, 0x8F, 0x92, 0x9A, 0x9A, 0xA0, 0xB1, 0xCB, 0xD5, 0xD7, 0xD7, 
	0xD3, 0xD4, 0x99, 0x00, 0x00, 0x00, 0x00, 0x25, 0x07, 0x09, 0x13, 0x23, 0x31, 0x31, 0x25, 0x07, 
	0x07, 0x06, 0x09, 0xFE, 0xFE, 0x1E, 0x24, 0x2C, 0x30, 0x72, 0x72, 0x72, 0x72, 0x72, 0x72, 0x72, 
	0x7D, 0x9C, 0x81, 0x62, 0x62, 0x62, 0x84, 0x8F, 0x8F, 0x92, 0x9A, 0xAB, 0xA0, 0xD0, 0xCD, 0xCA, 
	0xC4, 0xC0, 0xBC, 0xB8, 0xB9, 0x7A, 0x00, 0x00, 0x00, 0x47, 0x1D, 0x14, 0x17, 0x1E, 0x2F, 0x2F, 
	0x1D, 0x12, 0x12, 0x02, 0x09, 0xFE, 0xFE, 0xFF, 0x24, 0x2A, 0x30, 0x79, 0x79, 0x79, 0x79, 0x7D, 
	0x7C, 0x7C, 0x7C, 0xB3, 0xA0, 0x81, 0x82, 0x84, 0x92, 0x8F, 0x8F, 0x94, 0xAC, 0xAB, 0xB5, 0xB1, 
	0xC8, 0xDC, 0xD8, 0xD8, 0xD8, 0xBB, 0xAA, 0x00, 0x00, 0x00, 0x00, 0x47, 0x1D, 0x14, 0x17, 0x1E, 
	0x2F, 0x2F, 0x1D, 0x12, 0x12, 0x02, 0x09, 0xFE, 0xFE, 0xFF, 0x24, 0x2A, 0x30, 0x79, 0x79, 0x79, 
	0x79, 0x7D, 0x7C, 0x7C, 0x7C, 0xB3, 0xA0, 0x81, 0x82, 0x84, 0x92, 0x8F, 0x8F, 0x94, 0xAB, 0xA1, 
	0xB3, 0xCC, 0xC7, 0xD9, 0xD5, 0xD2, 0xB8, 0xB8, 0x9F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x1C, 
	0x18, 0x18, 0x18, 0x17, 0x14, 0x13, 0x12, 0xF5, 0x0B, 0x19, 0xE8, 0xFE, 0x22, 0x2A, 0x29, 0x85, 
	0x85, 0x85, 0x85, 0x86, 0x86, 0x91, 0x91, 0xA1, 0xB2, 0x92, 0x92, 0x95, 0x97, 0x97, 0x74, 0x7B, 
	0x98, 0xB7, 0xB5, 0xB2, 0xC7, 0xC3, 0xC3, 0xC3, 0xC2, 0xB9, 0xDD, 0x4A, 0x00, 0x00, 0x00, 0x00, 
	0x47, 0x1C, 0x18, 0x18, 0x18, 0x17, 0x14, 0x13, 0x12, 0xF5, 0x0B, 0x19, 0xE8, 0xFE, 0x22, 0x2A, 
	0x29, 0x85, 0x85, 0x85, 0x85, 0x86, 0x86, 0x91, 0x91, 0xA1, 0xB2, 0x92, 0x92, 0x95, 0x97, 0x97, 
	0x74, 0x7B, 0xA2, 0x9E, 0xB1, 0xC7, 0xD9, 0xD5, 0xD5, 0xD6, 0xBA, 0xD4, 0x5F, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x23, 0x18, 0x18, 0x18, 0x17, 0x14, 0x07, 0xEB, 0xED, 0xEF, 0xE8, 0xE6, 
	0xE7, 0x29, 0x2A, 0x91, 0x91, 0x91, 0x91, 0x9B, 0xAD, 0xE0, 0xE2, 0xE3, 0xB4, 0xB2, 0xA2, 0x9E, 
	0xA6, 0xA4, 0x87, 0x00, 0x47, 0x4F, 0x80, 0x9F, 0xDF, 0xDC, 0xDC, 0xDC, 0xC1, 0xC1, 0xBA, 0x7A, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x18, 0x18, 0x18, 0x17, 0x14, 0x07, 0xEB, 0xED, 0xEF, 
	0xE8, 0xE6, 0xE7, 0x29, 0x2A, 0x91, 0x91, 0x91, 0x91, 0x9B, 0xAD, 0xE0, 0xE2, 0xE3, 0xB4, 0xB2, 
	0xA2, 0x9E, 0xA6, 0xA4, 0x87, 0x00, 0x4F, 0xD1, 0xCC, 0xC2, 0xD7, 0xD7, 0xD7, 0xD3, 0xBA, 0x9F, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2D, 0x1B, 0x19, 0x0C, 0x0A, 0xEA, 0xEB, 
	0xEE, 0xEF, 0xE8, 0xE6, 0xFF, 0x9B, 0xAD, 0xAC, 0xE0, 0xE0, 0xE3, 0xE3, 0xE4, 0xE4, 0xE4, 0xE1, 
	0xB6, 0xB1, 0xCA, 0xA5, 0xA5, 0xB1, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53, 0x8B, 0x99, 0xB0, 
	0xBB, 0xBB, 0xBB, 0x99, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2D, 0x1B, 0x19, 0x0C, 0x0A, 
	0xEA, 0xEB, 0xEE, 0xEF, 0xE8, 0xE6, 0xFF, 0x9B, 0xAD, 0xAC, 0xE0, 0xE0, 0xE3, 0xE3, 0xE4, 0xE4, 
	0xE4, 0xE1, 0xB6, 0xB1, 0xCA, 0xA5, 0xA5, 0xB1, 0x47, 0x00, 0x00, 0x7A, 0xDF, 0xC3, 0xC3, 0xD6, 
	0xD8, 0xD3, 0xD4, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4D, 0x23, 
	0xFA, 0xEA, 0xEB, 0xEC, 0xEE, 0xEF, 0xE8, 0xE9, 0xE5, 0xE3, 0xE4, 0xE4, 0xE4, 0xE3, 0xE4, 0xE4, 
	0xE1, 0xE1, 0xB6, 0xB5, 0xCF, 0xAE, 0xA3, 0xA3, 0x9D, 0x4D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x4A, 0x53, 0x75, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x4D, 0x23, 0xFA, 0xEA, 0xEB, 0xEC, 0xEE, 0xEF, 0xE8, 0xE9, 0xE5, 0xE3, 0xE4, 0xE4, 0xE4, 0xE3, 
	0xE4, 0xE4, 0xE1, 0xE1, 0xB6, 0xB5, 0xCF, 0xAE, 0xA3, 0xA3, 0x9D, 0x4D, 0x00, 0x00, 0x00, 0x00, 
	0x8B, 0xDA, 0xDC, 0xC3, 0xC2, 0xD3, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x2F, 0x21, 0xFD, 0xEE, 0xEF, 0xE7, 0xE5, 0xE4, 0xE1, 0xE1, 0xE1, 
	0xE4, 0xE4, 0xB6, 0xA0, 0xB4, 0xCF, 0xC9, 0xAE, 0xAE, 0xAE, 0xA9, 0x87, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2F, 0x21, 0xFD, 0xEE, 0xEF, 0xE7, 0xE5, 0xE4, 0xE1, 
	0xE1, 0xE1, 0xE4, 0xE4, 0xB6, 0xA0, 0xB4, 0xCF, 0xC9, 0xAE, 0xAE, 0xAE, 0xA9, 0x87, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x8B, 0xD4, 0xC1, 0xC1, 0xB9, 0x99, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x27, 0x28, 0x2E, 
	0x4F, 0x4F, 0x4F, 0x4E, 0x4E, 0x9D, 0xA5, 0xA4, 0xA4, 0xAF, 0xA8, 0xAA, 0x99, 0x75, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x27, 
	0x28, 0x2E, 0x4F, 0x4F, 0x4F, 0x4E, 0x4E, 0x9D, 0xA5, 0xA4, 0xA4, 0xAF, 0xA8, 0xAA, 0x99, 0x75, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xDE, 0xBA, 0xBA, 0x87, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x28, 0x27, 0x28, 0x47, 0x00, 0x00, 0x00, 0x00, 0x4E, 0xA8, 0xA3, 0xA7, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x28, 0x27, 0x28, 0x47, 0x00, 0x00, 0x00, 0x00, 0x4E, 0xA8, 0xA3, 0xA7, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 
	0xAA, 0xBB, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2B, 0x28, 0x2E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xB0, 
	0xA3, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2B, 0x28, 0x2E, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x55, 0xB0, 0xA3, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 0x2E, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x4C, 0x99, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 0x2E, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4C, 0x99, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
};