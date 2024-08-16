// Copyright 2024 a (@GoXLd on Github)
// SPDX-License-Identifier: GPL-2.0-or-later
#define USB_POLLING_INTERVAL_MS 2
#ifdef RGB_MATRIX_ENABLE
	#define RGB_MATRIX_TIMEOUT 300000 // 5 minutes (10 * 30 * 1000ms)
	#define RGB_DISABLE_WHEN_USB_SUSPENDED
#endif