#include "../include.h"

// format: 4-bit paletted pixel graphics
// image width: 46 pixels
// image height: 16 lines
// image pitch: 23 bytes
const u16 BirdImg_Pal[6] __attribute__ ((aligned(4))) = {
	0x9111, 0x0015, 0x52BF, 0xFAAA, 0xFFFF, 0x0000, 
};

const u8 BirdImg[368] __attribute__ ((aligned(4))) = {
	0x00, 0x00, 0x22, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x22, 0x22, 0x22, 0x20, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x02, 0x22, 0x22, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 
	0x25, 0x54, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x22, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x33, 0x25, 0x54, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x02, 0x22, 0x55, 0x42, 0x22, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x33, 0x24, 0x44, 
	0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x33, 0x32, 0x55, 0x42, 0x22, 0x20, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x32, 0x22, 0x22, 0x22, 0x22, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x33, 
	0x32, 0x44, 0x42, 0x22, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x00, 0x00, 0x02, 0x22, 0x00, 0x03, 0x33, 0x22, 0x22, 0x22, 0x22, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x22, 0x22, 0x22, 0x22, 0x20, 0x02, 0x22, 0x21, 0x00, 0x00, 0x02, 0x22, 0x22, 
	0x22, 0x22, 0x20, 0x00, 0x00, 0x00, 0x22, 0x22, 0x00, 0x00, 0x22, 0x22, 0x22, 0x12, 0x22, 0x22, 
	0x22, 0x11, 0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x22, 0x22, 0x00, 0x02, 0x22, 0x22, 0x12, 0x00, 
	0x02, 0x22, 0x22, 0x21, 0x22, 0x22, 0x22, 0x22, 0x10, 0x00, 0x00, 0x00, 0x02, 0x22, 0x22, 0x21, 
	0x22, 0x22, 0x22, 0x22, 0x21, 0x20, 0x00, 0x02, 0x22, 0x22, 0x21, 0x22, 0x11, 0x11, 0x12, 0x20, 
	0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x12, 0x22, 0x22, 0x21, 0x21, 0x10, 0x00, 0x00, 0x01, 0x22, 
	0x22, 0x22, 0x11, 0x11, 0x11, 0x22, 0x00, 0x00, 0x00, 0x02, 0x12, 0x22, 0x22, 0x21, 0x22, 0x22, 
	0x22, 0x11, 0x00, 0x00, 0x00, 0x00, 0x12, 0x22, 0x22, 0x21, 0x11, 0x12, 0x22, 0x00, 0x00, 0x00, 
	0x01, 0x12, 0x22, 0x22, 0x22, 0x11, 0x22, 0x22, 0x22, 0x10, 0x00, 0x00, 0x00, 0x02, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x20, 0x00, 0x00, 0x00, 0x00, 0x11, 0x22, 0x22, 0x22, 0x22, 0x11, 0x11, 0x12, 
	0x21, 0x00, 0x00, 0x00, 0x00, 0x32, 0x22, 0x22, 0x22, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x33, 0x30, 0x03, 0x33, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x33, 0x22, 0x33, 0x32, 0x00, 0x00, 0x00, 0x00, 
};