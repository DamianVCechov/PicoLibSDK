#include "../include.h"

// format: 4-bit paletted pixel graphics
// image width: 64 pixels
// image height: 64 lines
// image pitch: 32 bytes
const u16 Logo2Img_Pal[16] __attribute__ ((aligned(4))) = {
	0x0000, 0x049B, 0x0439, 0x03D7, 0x0354, 0x02D1, 0x022D, 0x01AA, 0x0148, 0x0106, 0x00A4, 0x0063, 0x0021, 0x051F, 0x0041, 0x0000, 
};

const u8 Logo2Img[2048] __attribute__ ((aligned(4))) = {
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFB, 0x98, 0x87, 0x77, 0x78, 0x89, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE8, 
	0x65, 0x43, 0x22, 0x11, 0x11, 0x11, 0x22, 0x34, 0x56, 0x8C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0x75, 0x32, 
	0x11, 0x22, 0x33, 0x33, 0x33, 0x33, 0x33, 0x22, 0x11, 0x1A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC8, 0x52, 0x11, 0x23, 
	0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x32, 0x3E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x31, 0x12, 0x33, 0x33, 
	0x22, 0x11, 0x12, 0x22, 0x22, 0x21, 0x11, 0x23, 0x32, 0x4F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE6, 0x31, 0x23, 0x33, 0x21, 0x12, 
	0x35, 0x66, 0x78, 0x9A, 0xAA, 0x98, 0x75, 0x42, 0x11, 0x5F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF6, 0x31, 0x23, 0x32, 0x11, 0x35, 0x79, 
	0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x5D, 0x5F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0x41, 0x23, 0x32, 0x13, 0x58, 0xEF, 0xFF, 
	0xFA, 0x68, 0xFF, 0xFF, 0xFB, 0x67, 0x9F, 0xFF, 0xF8, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x61, 0x13, 0x31, 0x14, 0x7E, 0xFF, 0xFF, 0xFF, 
	0xF6, 0xD2, 0xCF, 0xFF, 0xF8, 0xD5, 0x54, 0x6A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE4, 0x12, 0x32, 0x14, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xF7, 0xD3, 0xCF, 0xFF, 0xF7, 0x6C, 0xC5, 0xD2, 0x5A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0x31, 0x33, 0x13, 0x7F, 0xFF, 0xFB, 0x67, 0xFF, 0xFF, 
	0xF7, 0x14, 0xCF, 0xFF, 0xF7, 0x8E, 0xF8, 0x12, 0x12, 0x6F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x92, 0x13, 0x21, 0x6C, 0xFF, 0xFF, 0xF8, 0xD2, 0xE9, 0xFF, 
	0xF8, 0x14, 0x0F, 0xFF, 0xF8, 0x27, 0x72, 0x23, 0x32, 0x14, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0x12, 0x31, 0x38, 0xFF, 0xFF, 0xFF, 0xF8, 0x23, 0x24, 0x97, 
	0xEA, 0x14, 0x0F, 0xFF, 0xF0, 0x86, 0x54, 0x21, 0x23, 0x31, 0x2A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA2, 0x23, 0x14, 0xEF, 0xFF, 0xFF, 0xB6, 0x52, 0x22, 0x69, 0x2D, 
	0x49, 0x24, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x95, 0x21, 0x33, 0x12, 0xAF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x31, 0x31, 0x5F, 0xFF, 0xFF, 0xFF, 0xA1, 0xD4, 0x24, 0xF5, 0x17, 
	0x37, 0x34, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA5, 0x12, 0x31, 0x3C, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xF5, 0x13, 0x15, 0xFF, 0xFF, 0xFB, 0x8E, 0xFE, 0xAA, 0x15, 0xA1, 0x67, 
	0x3B, 0x24, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x82, 0x13, 0x15, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x81, 0x31, 0x5F, 0xFF, 0x81, 0x86, 0xD7, 0x75, 0xFE, 0x15, 0x71, 0x33, 
	0xEF, 0x24, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0x31, 0x31, 0x9F, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFC, 0x32, 0x14, 0xFF, 0xFF, 0x92, 0x77, 0x14, 0x1D, 0x8F, 0x15, 0x71, 0x6C, 
	0xBA, 0x34, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE3, 0x21, 0x4F, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xF6, 0x12, 0x2B, 0xFF, 0xFF, 0x0A, 0xF6, 0x14, 0x61, 0x60, 0x15, 0x8D, 0x9B, 
	0xD6, 0x54, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFF, 0xFF, 0xFF, 0xFB, 0x22, 0x19, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xC3, 0x21, 0x8F, 0xFF, 0xFF, 0x7D, 0x87, 0xD8, 0xFD, 0x5E, 0x25, 0xC3, 0xDD, 
	0x2B, 0x33, 0xFF, 0xFF, 0xFF, 0xF9, 0x37, 0xFF, 0xFF, 0xFF, 0xFF, 0x71, 0x16, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x71, 0x14, 0xFF, 0xFF, 0xFF, 0x7D, 0x78, 0xDB, 0xF2, 0x5B, 0x24, 0xFB, 0x55, 
	0xBF, 0x89, 0xFF, 0xFF, 0xFF, 0x91, 0xD7, 0xFF, 0xFF, 0xFF, 0xFF, 0xF4, 0x14, 0x0F, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x51, 0x1A, 0xFF, 0xFF, 0xFF, 0x7D, 0x78, 0xDA, 0xF3, 0x4B, 0x14, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x96, 0x6C, 0xFA, 0x12, 0x18, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x12, 0xAF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFE, 0x31, 0x5F, 0xFF, 0xFF, 0xFF, 0x8D, 0x88, 0xD8, 0xF3, 0x2E, 0x35, 0xFF, 0xFF, 
	0xFE, 0x63, 0xDD, 0x1C, 0x01, 0x68, 0x14, 0xAF, 0xFF, 0xFF, 0xFF, 0xFC, 0x31, 0x8F, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xF9, 0x21, 0x8F, 0xFF, 0xFF, 0xFF, 0x8D, 0x7A, 0x39, 0xF6, 0x4F, 0xCF, 0xFE, 0x87, 
	0xC5, 0xD3, 0x54, 0x28, 0x52, 0x85, 0x2D, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x5D, 0x6F, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xF7, 0xD3, 0x0F, 0xFF, 0xFF, 0xFF, 0x8D, 0x6F, 0xFF, 0xFF, 0xFF, 0xF9, 0x52, 0xD1, 
	0x74, 0x2B, 0xF5, 0x25, 0x11, 0x12, 0x14, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6D, 0x6F, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xF6, 0xD5, 0xFF, 0xFF, 0xFF, 0xFF, 0x9D, 0x6F, 0xFF, 0xFE, 0x70, 0x7D, 0xD4, 0x41, 
	0x65, 0x2C, 0xF5, 0x15, 0x46, 0xA7, 0xD6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7D, 0x5F, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xF6, 0xD6, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0xEF, 0xFF, 0xA1, 0x1E, 0x5D, 0x7F, 0x7D, 
	0x75, 0x1A, 0xA4, 0xD7, 0xFF, 0xFE, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7D, 0x5F, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xF6, 0xD7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0x1D, 0x30, 0x6D, 0x9F, 0x7D, 
	0x65, 0x23, 0x1D, 0x40, 0xFF, 0xFF, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7D, 0x6F, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xF6, 0xD7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC1, 0x45, 0x2A, 0x6D, 0x90, 0x6D, 
	0x76, 0xD3, 0x57, 0xFF, 0xFF, 0xF9, 0x13, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6D, 0x6F, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xF6, 0xD7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x33, 0xE5, 0x14, 0x52, 0x43, 0xD2, 
	0xAC, 0x8C, 0xFF, 0xFF, 0xFF, 0xF9, 0x12, 0xBF, 0x84, 0x6E, 0xFF, 0xFF, 0x5D, 0x7F, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xF7, 0xD6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF6, 0xD4, 0x22, 0x26, 0x6D, 0x13, 0x6A, 
	0xFF, 0xFF, 0xF0, 0x66, 0xEF, 0xFE, 0x12, 0xF9, 0xD2, 0x15, 0xFF, 0xFE, 0x21, 0xAF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xF9, 0xD5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF4, 0xD4, 0x64, 0xDA, 0xF6, 0x9F, 0xFF, 
	0xFF, 0xFF, 0xFE, 0x2D, 0xAF, 0xF7, 0x24, 0xB3, 0x2E, 0x26, 0xFF, 0xF7, 0xD4, 0x0F, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFB, 0x23, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x8F, 0xF7, 0x6B, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xF7, 0x7E, 0x67, 0xFA, 0x3D, 0x25, 0x72, 0x55, 0x4F, 0xFF, 0xF4, 0xD6, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x4D, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0x5D, 0x39, 0x25, 0xB4, 0x16, 0x35, 0x71, 0x46, 0xFF, 0xFF, 0x81, 0x19, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x6D, 0x5F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0x35, 0xBB, 0xAF, 0xFF, 
	0xF5, 0xD1, 0x9B, 0x14, 0x7D, 0x60, 0x25, 0x7D, 0x7F, 0x44, 0xFF, 0x3D, 0x4F, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xA1, 0x19, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0x45, 0xA2, 0x39, 0x56, 
	0xE1, 0x1A, 0xFA, 0x24, 0x5D, 0x8F, 0x14, 0xB3, 0x12, 0xD6, 0xF6, 0x11, 0x9F, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xF5, 0xD4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0x69, 0xB2, 0x33, 0xD1, 
	0x88, 0xD6, 0xFE, 0x24, 0x5D, 0x76, 0xD4, 0xFB, 0x54, 0x7F, 0x81, 0x15, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xF9, 0x11, 0x6F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF6, 0xD4, 0xA4, 0x16, 0x6D, 
	0x6F, 0x7D, 0x5B, 0x25, 0x71, 0x13, 0x34, 0xFF, 0xFF, 0xF9, 0x11, 0x2B, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x17, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x15, 0xB3, 0x2F, 0x9D, 
	0x5F, 0xF4, 0xD7, 0x23, 0xE4, 0x2A, 0x42, 0xFF, 0xFF, 0x82, 0x11, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xA1, 0x21, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x15, 0xE2, 0x4F, 0x9D, 
	0x5F, 0x7D, 0x3A, 0x55, 0xFF, 0x0F, 0x98, 0xFF, 0xF7, 0x12, 0x16, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0x12, 0x17, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x15, 0xC2, 0x4F, 0xB1, 
	0x58, 0xD1, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x51, 0x21, 0x6F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x51, 0x21, 0x50, 0xFF, 0xFF, 0xFF, 0xF9, 0xD5, 0xF2, 0x2F, 0xF1, 
	0x48, 0x38, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x73, 0x12, 0x16, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF5, 0x13, 0x13, 0x8F, 0xFF, 0xFF, 0xF9, 0xD4, 0xF9, 0x9F, 0xF9, 
	0x9F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x12, 0x12, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x51, 0x32, 0x15, 0x9F, 0xFF, 0xFC, 0x68, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0x74, 0x12, 0x21, 0x4A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF6, 0x11, 0x31, 0x25, 0x7B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xA7, 0x53, 0x12, 0x21, 0x26, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x94, 0x12, 0x31, 0x13, 0x57, 0x8A, 0xCF, 0xFF, 0x0C, 
	0xB9, 0x86, 0x54, 0x21, 0x12, 0x21, 0x25, 0xAF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x73, 0x11, 0x32, 0x11, 0x23, 0x44, 0x44, 0x43, 
	0x32, 0x11, 0x12, 0x32, 0x11, 0x36, 0xAF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x75, 0x21, 0x12, 0x22, 0x22, 0x22, 0x22, 
	0x23, 0x22, 0x11, 0x13, 0x57, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA7, 0x54, 0x32, 0x21, 0x11, 0x11, 
	0x12, 0x34, 0x56, 0x8B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEA, 0x88, 0x77, 0x77, 
	0x89, 0xAC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
};