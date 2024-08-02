// Copyright 2024 a (@GoXLd on Github)
// SPDX-License-Identifier: GPL-2.0-or-later
#define USB_POLLING_INTERVAL_MS 1
#ifdef RGB_MATRIX_ENABLE
	#define RGB_MATRIX_TIMEOUT 600000 // 10 minutes (10 * 60 * 1000ms)
	#define RGB_DISABLE_WHEN_USB_SUSPENDED
#endif