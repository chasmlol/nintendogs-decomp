#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0215942c[];
extern u32 data_0214f464;

static inline void SwapB(s32 v, vu8 *p)
{
    u32 old;
    *(u8 *)(p) = (u8)(v);
}

static inline void SwapH(s16 v, vu8 *p)
{
    u32 old;
    *(u8 *)(p) = (u8)(v);
}

u32 func_0202f0fc(u8 *param_1, u32 param_2)
{
    s32 s1;
    s32 i3;
    s32 f;
    s32 iVar4;
    u32 bit;

    if (*(u16 *)(*(u8 **)&data_0215942c) == 0x11 && *(u8 *)(*(u8 **)(param_1 + 0x9e8) + 0x72) == 4) {
        return 0;
    }
    switch (param_2) {
    case 0: goto C0;
    case 1: goto C1;
    case 2: goto C2;
    case 3: goto C3;
    case 4: goto C4;
    case 5: goto C5;
    case 6: goto C6;
    case 7: goto C7;
    case 8: goto C8;
    default: goto Cdef;
    }
C0:
    *(s16 *)(param_1 + 0xea) = 0x224;
    s1 = *(s16 *)(param_1 + 0xf0);
    if (s1 < 4) {
        goto L78;
    }
    if (s1 <= 8) {
        f = 1;
        goto Lb8;
    }
L78:
    if (s1 == 0x57) {
        f = 1;
        goto Lb8;
    }
    i3 = *(s16 *)(param_1 + 0xea);
    if (i3 < 15) {
        goto L9c;
    }
    if (i3 <= 75) {
        f = 1;
        goto Lb8;
    }
L9c:
    if (i3 < 281) {
        goto Lb4;
    }
    if (i3 <= 316) {
        f = 1;
        goto Lb8;
    }
Lb4:
    f = 0;
Lb8:
    if (f != 0) {
        f = 0;
        goto L118;
    }
    i3 = *(s16 *)(param_1 + 0xea);
    if (i3 < 1144) {
        goto Le4;
    }
    if (i3 <= 1150) {
        f = 0;
        goto L118;
    }
Le4:
    if (i3 < 1223) {
        goto L100;
    }
    if (i3 <= 1226) {
        f = 0;
        goto L118;
    }
L100:
    if (s1 == 83) {
        f = 0;
        goto L118;
    }
    if (s1 == 84) {
        f = 0;
    } else {
        f = 1;
    }
L118:
    if (f == 0) {
        goto ret1;
    }
    {
        s16 zz = 0;
        SwapH(zz, (vu8 *)(param_1 + 0xa8));
        *(s16 *)(param_1 + 0x112) = zz;
    }
    *(s16 *)(param_1 + 0xf0) = 11;
    SwapB(4, (vu8 *)(param_1 + 0xa5));
ret1:
    return 1;
C1:
    *(s16 *)(param_1 + 0xea) = 0x22f;
    return 1;
C2:
    *(s16 *)(param_1 + 0xea) = 0x233;
    return 1;
C3:
    *(s16 *)(param_1 + 0xea) = 0x236;
    return 1;
C4:
    iVar4 = *(s32 *)(*(u8 **)&data_0214f464) * 0x10dcd + 1;
    *(s32 *)(*(u8 **)&data_0214f464) = iVar4;
    bit = (u16)(((u32)iVar4 << 16) >> 31);
    if (bit == 0) {
        goto c4a;
    }
    if (bit != 1) {
        goto Cdef;
    }
    goto c4b;
c4a:
    *(s16 *)(param_1 + 0xea) = 0x23b;
    return 1;
c4b:
    *(s16 *)(param_1 + 0xea) = 0x23c;
    return 1;
C5:
    return 0;
C6:
    return 0;
C7:
    *(s16 *)(param_1 + 0xea) = 0x247;
    return 1;
C8:
    *(s16 *)(param_1 + 0xea) = 0x248;
    return 1;
Cdef:
    return 0;
}
