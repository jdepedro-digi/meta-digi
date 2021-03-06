/*
 * libdigi/digi-platforms.h
 *
 * Copyright (C) 2011 by Digi International Inc.
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 *
 * Description: Digi platforms
 *
 */

#ifndef DIGI_PLATFORMS_H
#define DIGI_PLATFORMS_H

#define PLATFORM_NAME(x)		x ## _NAME

#define MACH_TYPE_CC7U			1017
#define MACH_TYPE_CC7U_NAME		"cc7u"
#define MACH_TYPE_CWIEM			1033
#define MACH_TYPE_CWIEM_NAME		"cwiem"
#define MACH_TYPE_CCW9C			1110
#define MACH_TYPE_CCW9C_NAME		"ccw9c"
#define MACH_TYPE_CC9P9360DEV		1114
#define MACH_TYPE_CC9P9360DEV_NAME	"cc9p9360dev"
#define MACH_TYPE_CC9P9750DEV		1115
#define MACH_TYPE_CC9P9750DEV_NAME	"cc9p9750dev"
#define MACH_TYPE_CC9P9360VAL		1116
#define MACH_TYPE_CC9P9360VAL_NAME	"cc9p9360val"
#define MACH_TYPE_CC9P9750VAL		1117
#define MACH_TYPE_CC9P9750VAL_NAME	"cc9p9750val"
#define MACH_TYPE_CC9P9360JS		1264
#define MACH_TYPE_CC9P9360JS_NAME	"cc9p9360js"
#define MACH_TYPE_CC9P9215		1445
#define MACH_TYPE_CC9P9215_NAME		"cc9p9215"
#define MACH_TYPE_CC9P9210		1446
#define MACH_TYPE_CC9P9210_NAME		"cc9p9210"
#define MACH_TYPE_CC9P9215JS		1447
#define MACH_TYPE_CC9P9215JS_NAME	"cc9p9215js"
#define MACH_TYPE_CC9P9210JS		1448
#define MACH_TYPE_CC9P9210JS_NAME	"cc9p9210js"
#define MACH_TYPE_CC7UCAMRY		1493
#define MACH_TYPE_CC7UCAMRY_NAME	"cc7ucamry"
#define MACH_TYPE_CC9M2443JS		1663
#define MACH_TYPE_CC9M2443JS_NAME	"cc9m2443js"
#define MACH_TYPE_CME9210		1712
#define MACH_TYPE_CME9210_NAME		"cme9210"
#define MACH_TYPE_CCW9P9215JS		1811
#define MACH_TYPE_CCW9P9215JS_NAME	"ccw9p9215js"
#define MACH_TYPE_CC9M2443		1815
#define MACH_TYPE_CC9M2443_NAME		"cc9m2443"
#define MACH_TYPE_CME9210JS		1854
#define MACH_TYPE_CME9210JS_NAME	"cme9210js"
#define MACH_TYPE_CC9P9360		1855
#define MACH_TYPE_CC9P9360_NAME		"cc9p9360"
#define MACH_TYPE_CCW9P9215		2137
#define MACH_TYPE_CCW9P9215_NAME	"ccw9p9215"
#define MACH_TYPE_CCW9M2443		2145
#define MACH_TYPE_CCW9M2443_NAME	"ccw9m2443"
#define MACH_TYPE_CCW9M2443JS		2146
#define MACH_TYPE_CCW9M2443JS_NAME	"ccw9m2443js"
#define MACH_TYPE_CC9P9215_3G		2397
#define MACH_TYPE_CC9P9215_3G_NAME	"cc9p9215_3g"
#define MACH_TYPE_CC9P9215_3GJS		2398
#define MACH_TYPE_CC9P9215_3GJS_NAME	"cc9p9215_3gjs"
#define MACH_TYPE_CCMX51		2516
#define MACH_TYPE_CCMX51_NAME		"ccmx51"
#define MACH_TYPE_CCMX51JS		2517
#define MACH_TYPE_CCMX51JS_NAME		"ccmx51js"
#define MACH_TYPE_CCWMX51		2518
#define MACH_TYPE_CCWMX51_NAME		"ccwmx51"
#define MACH_TYPE_CCWMX51JS		2519
#define MACH_TYPE_CCWMX51JS_NAME	"ccwmx51js"
#define MACH_TYPE_CWME9210		3320
#define MACH_TYPE_CWME9210_NAME		"cwme9210"
#define MACH_TYPE_CWME9210JS		3321
#define MACH_TYPE_CWME9210JS_NAME	"cwme9210js"
#define MACH_TYPE_CCMX53		3346
#define MACH_TYPE_CCMX53_NAME		"ccmx53"
#define MACH_TYPE_CCMX53JS		3347
#define MACH_TYPE_CCMX53JS_NAME		"ccmx53js"
#define MACH_TYPE_CCWMX53		3348
#define MACH_TYPE_CCWMX53_NAME		"ccwmx53"
#define MACH_TYPE_CCWMX53JS		3349
#define MACH_TYPE_CCWMX53JS_NAME	"ccwmx53js"
#define MACH_TYPE_CPX2			3419
#define MACH_TYPE_CPX2_NAME		"cpx2"
#define MACH_TYPE_WR21			3737
#define MACH_TYPE_WR21_NAME		"wr21"
#define MACH_TYPE_CCARDWMX28		3893
#define MACH_TYPE_CCARDWMX28_NAME	"ccardwmx28"
#define MACH_TYPE_CCARDMX28		3894
#define MACH_TYPE_CCARDMX28_NAME	"ccardmx28"
#define MACH_TYPE_CCARDWMX28JS		3917
#define MACH_TYPE_CCARDWMX28JS_NAME	"ccardwmx28js"
#define MACH_TYPE_CCARDMX28JS		3918
#define MACH_TYPE_CCARDMX28JS_NAME	"ccardmx28js"
#define MACH_TYPE_CCIMX53		9980
#define MACH_TYPE_CCIMX53_NAME		"ccimx53"
#define MACH_TYPE_CCIMX53JS		9981
#define MACH_TYPE_CCIMX53JS_NAME	"ccimx53js"
#define MACH_TYPE_CCIMX51		9982
#define MACH_TYPE_CCIMX51_NAME		"ccimx51"
#define MACH_TYPE_CCIMX51JS		9983
#define MACH_TYPE_CCIMX51JS_NAME	"ccimx51js"
#define MACH_TYPE_CCARDIMX28		9984
#define MACH_TYPE_CCARDIMX28_NAME	"ccardimx28"
#define MACH_TYPE_CCARDIMX28JS		9985
#define MACH_TYPE_CCARDIMX28JS_NAME	"ccardimx28js"

int get_platform_id(void);
char is_nand_oob_atomic(void);

#endif	/* DIGI_PLATFORMS_H */
