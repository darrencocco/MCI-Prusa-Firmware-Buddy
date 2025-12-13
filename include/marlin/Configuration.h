//! @file
#pragma once

#include "config.h"

#if PRINTER_IS_PRUSA_MINI()
    #include "Configuration_MINI.h"
#elif PRINTER_IS_PRUSA_XL_DEV_KIT()
    #include "Configuration_XL_DEV_KIT.h"
#elif PRINTER_IS_PRUSA_XL() && BOARD_IS_XLBUDDY()
    #include "Configuration_XL.h"
#elif PRINTER_IS_PRUSA_XL() && BOARD_IS_DWARF()
    #include "Configuration_XL_Dwarf.h"
#elif PRINTER_IS_PRUSA_MK4()
    #include "Configuration_MK4.h"
#elif PRINTER_IS_PRUSA_MK3_5()
    #include "Configuration_MK3.5.h"
#elif PRINTER_IS_PRUSA_iX()
    #include "Configuration_iX.h"
#elif PRINTER_IS_PRUSA_COREONE()
    #include "Configuration_COREONE.h"
#else
    #error "Unknown PRINTER_TYPE!"
#endif

#ifndef MOTHERBOARD
    #error "Undefined MOTHERBOARD"
#endif

// Hot-end tuning for MCI MK3.5S with E3D hot-end.
#undef DEFAULT_Kp
#undef DEFAULT_Ki
#undef DEFAULT_Kd
#define DEFAULT_Kp 31.85
#define DEFAULT_Ki 6.03
#define DEFAULT_Kd 42.04