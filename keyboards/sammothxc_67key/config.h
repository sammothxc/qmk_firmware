// Copyright 2024 sammothxc (@sammothxc)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
#define ENCODERS_PAD_A { D4, D3 }
#define ENCODERS_PAD_B { C6, D2 }
// L_ENCODER SW=D7
// R_ENCODER SW=D1
