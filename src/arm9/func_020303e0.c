#include "ctx.h"

extern u32 *data_0214f464;

static inline u32 Roll(void)
{
    u32 nw = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nw;
    return nw;
}

#define ST(v) *(u16 *)(param_1 + 0xea) = (v); return 1;

s32 func_020303e0(u8 *param_1, s32 param_2)
{
    switch (param_2) {
    case 0: goto K0;
    case 1: goto K1;
    case 2: goto K2;
    case 3: goto K3;
    case 4: goto K4;
    case 5: goto K5;
    case 6: goto K6;
    case 7: goto K7;
    case 8: goto K8;
    case 9: goto K9;
    case 10: goto K10;
    case 11: goto K11;
    case 12: goto K12;
    case 13: goto K13;
    case 14: goto K14;
    default: goto DEF;
    }

K0:
    switch ((u16)(((u32)(u16)Roll() * 7) >> 16)) {
    case 0: ST(163)
    case 1: ST(164)
    case 2: ST(165)
    case 3: ST(166)
    case 4: ST(167)
    case 5: ST(168)
    case 6: ST(169)
    default: goto DEF;
    }

K1:
    switch ((u16)((Roll() << 16) >> 31)) {
    case 0: ST(176)
    case 1: ST(177)
    default: goto DEF;
    }
K2:
    ST(182)
K3:
    ST(183)
K4:
    switch ((u16)((Roll() << 16) >> 30)) {
    case 0: ST(190)
    case 1: ST(191)
    case 2: ST(100)
    default: goto DEF;
    }
K5:
    switch ((u16)(((u32)(u16)Roll() * 3) >> 16)) {
    case 0: ST(198)
    case 1: ST(200)
    case 2: ST(101)
    default: goto DEF;
    }
K6:
    switch ((u16)(((u32)(u16)Roll() * 3) >> 16)) {
    case 0: ST(199)
    case 1: ST(201)
    case 2: ST(102)
    default: goto DEF;
    }
K7:
    switch ((u16)(((u32)(u16)Roll() * 40) >> 16)) {
    case 0: ST(210)
    case 1: ST(212)
    case 2: ST(214)
    case 3: ST(216)
    default: return 0;
    }
K8:
    switch ((u16)(((u32)(u16)Roll() * 40) >> 16)) {
    case 0: ST(211)
    case 1: ST(213)
    case 2: ST(215)
    case 3: ST(217)
    default: return 0;
    }
K9:
    switch ((u16)(((u32)(u16)Roll() * 20) >> 16)) {
    case 0: ST(220)
    case 1: ST(222)
    default: return 0;
    }
K10:
    switch ((u16)(((u32)(u16)Roll() * 20) >> 16)) {
    case 0: ST(221)
    case 1: ST(223)
    default: return 0;
    }
K11:
    switch ((u16)(((u32)(u16)Roll() * 20) >> 16)) {
    case 0: ST(224)
    case 1: ST(226)
    default: return 0;
    }
K12:
    switch ((u16)(((u32)(u16)Roll() * 20) >> 16)) {
    case 0: ST(225)
    case 1: ST(227)
    default: return 0;
    }
K13:
    ST(230)
K14:
    ST(231)
DEF:
    return 0;
}
