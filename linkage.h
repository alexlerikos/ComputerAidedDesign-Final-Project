/* Copyright (c) 2001-2009 by SoftIntegration, Inc. All Rights Reserved */
/* Copyright (c) 2001-2009 by SoftIntegration, Inc. All Rights Reserved */
/* THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF SoftIntegration  */
/* The copyright notice above does not evidence any    */
/* actual or intended publication of such source code. */
/************************************************************
* File name: linkage.h
************************************************************/
#ifndef _LINKAGE_H_
#define _LINKAGE_H_

#include <math.h>
#include <qanimate.h>

#define M_DEG2RAD(a) (a*(M_PI/180))
#define M_RAD2DEG(a) (a*(180/M_PI))

#define M_FT2M        0.304800609    // ft --> m
#define M_LB2N        4.448221615    // lb --> N
#define M_SLUG2KG     14.59387377    // slug --> kg
#define M_LBFTSS2KGMM 1.355818991    // lb-ft-s^2 --> kg-m^2
#define M_LBFT2NM     1.355818991    // lb-ft --> N-m

enum {
    /* coupler link */
    DEFAULT = -1,
    COUPLER_LINK3 = 3,
    COUPLER_LINK4 = 4,
    COUPLER_LINK5 = 5,
    COUPLER_LINK6 = 6,
    COUPLER_LINK7 = 7,

    /* coupler curve trace */
    TRACE_OFF,
    TRACE_ON

    /* qanimate output type */
    //QANIMATE_OUTPUTTYPE_DISPLAY,
    //QANIMATE_OUTPUTTYPE_FILE,
    //QANIMATE_OUTPUTTYPE_STREAM
};

#endif  /* _LINKAGE_H_ */
         