#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off
#pragma opt_common_subs off

static inline u32 InRange(u8 *p)
{
    u32 r = 0;
    s32 v = *(s16 *)(p + 0xf0);
    if (v > 12 && v < 111)
        r = 1;
    return r;
}


extern u8 *data_0214f464;
extern s32 func_020bc14c(void);
extern void func_020bbe14(u32 a, u32 b);
extern u8 *func_020bc3c4(void);

typedef struct { u32 lo; u32 hi; } LoHi;
typedef union { u64 v; LoHi p; } R64;

s32 func_0202c110(u8 *param_1, u32 param_2, s32 param_3)
{
    s32 n;
    s32 r5;
    s32 cls;
    u32 uVar5;
    u32 bVar2;

    if (*(u16 *)(param_1 + 0x112) != 0) {
        return 0;
    }
    n = *(s16 *)(param_1 + 0xf0);
    switch (n) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 9:
        goto L1f4;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 10:
    case 11:
        goto L84;
    case 111:
        return 0;
    default:
        goto L1f4;
    }

L84:
    cls = *(s8 *)(param_1 + 0x88);
    r5 = 1;
    if (cls == func_020bc14c()) goto K84;
    if (cls != *(s8 *)(data_0214f464 + 7)) {
        r5 = 0;
    }
K84:
    if (r5 == 0) goto L178;
    switch (param_2) {
    case 0:
    case 3:
    default:
        goto C5;
    case 1:
        goto C1;
    case 2:
        goto C9;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        goto C13;
    }
C5:
    func_020bbe14(5, cls);
    goto L13c;
C1:
    if (*(u16 *)(param_1 + 0xf2) != 0x1c) goto C7;
    func_020bbe14(11, cls);
    goto L13c;
C7:
    func_020bbe14(7, cls);
    goto L13c;
C9:
    func_020bbe14(9, cls);
    goto L13c;
C13:
    func_020bbe14(13, cls);
L13c:
    if (*(s8 *)(param_1 + 0x88) != *(s8 *)(data_0214f464 + 7)) goto L168;
    uVar5 = (u32)func_020bc3c4() + 0x88;
    *(s32 *)(uVar5 + 0x6c) = 1;
    goto L178;
L168:
    uVar5 = (u32)func_020bc3c4() + 0x88;
    *(s32 *)(uVar5 + 0x6c) = 0;

L178:
    if (param_3 == 0) goto L1e8;
    switch (param_2) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        goto L1dc;
    case 5:
        goto S5;
    case 6:
        goto S6;
    case 7:
        goto S7;
    case 8:
        goto S8;
    default:
        goto L1dc;
    }
S6:
    *(u16 *)(param_1 + 0xea) = 0x243;
    goto L1dc;
S5:
    *(u16 *)(param_1 + 0xea) = 0x244;
    goto L1dc;
S8:
    *(u16 *)(param_1 + 0xea) = 0x247;
    goto L1dc;
S7:
    *(u16 *)(param_1 + 0xea) = 0x248;
L1dc:
    return 1;
L1e8:
    return 0;

L1f4:
    if (InRange(param_1) == 0) goto L290;
    if (param_3 == 0) goto L284;
    switch (param_2) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        goto L278;
    case 5:
        goto T5;
    case 6:
        goto T6;
    case 7:
        goto T7;
    case 8:
        goto T8;
    default:
        goto L278;
    }
T6:
    *(u16 *)(param_1 + 0xea) = 0x243;
    goto L278;
T5:
    *(u16 *)(param_1 + 0xea) = 0x244;
    goto L278;
T8:
    *(u16 *)(param_1 + 0xea) = 0x247;
    goto L278;
T7:
    *(u16 *)(param_1 + 0xea) = 0x248;
L278:
    return 1;
L284:
    return 0;

L290:
    param_1[0xa8] = 0;
    *(u16 *)(param_1 + 0x112) = 0;
    *(s16 *)(param_1 + 0xf0) = 0x6f;
    param_1[0xa5] = 0;
    param_1[0xa3] = 0;
    return 0;
}
