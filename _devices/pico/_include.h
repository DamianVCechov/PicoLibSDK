// PicoLibSDK - Alternative SDK library for Raspberry Pico and RP2040
// Copyright (c) 2023 Miroslav Nemecek, Panda38@seznam.cz, hardyplotter2@gmail.com
// 	https://github.com/Panda381/PicoLibSDK
//	https://www.breatharian.eu/hw/picolibsdk/index_en.html
//	https://github.com/pajenicko/picopad
//	https://picopad.eu/en/
// License:
//	This source code is freely available for any purpose, including commercial.
//	It is possible to take and modify the code or parts of it, without restriction.

#include "pico_init.h"	// initialize
#include "pico_bat.h"	// battery
#include "../../_display/minivga/minivga.h" // VGA display
#include "../../_display/dvi/dvi.h" // DVI display
#include "../../_display/dvivga/dvivga.h" // DVI+VGA display
#include "../../_display/st7789/st7789.h" // ST7789 display
#include "../../_lib/inc/lib_draw.h" // drawing to TFT and VGA display buffer
