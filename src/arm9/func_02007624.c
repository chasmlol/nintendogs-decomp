#pragma avoid_byte strb
#include "ctx.h"

extern void func_020078f4(void);
extern void func_02007c88(void);
extern void func_02007d24(void);
extern void func_02069f94(u16 *p, u32 a, u32 b);

void func_02007624(u16 *param_1, u16 param_2, u16 param_3, u16 param_4)
{
    int iVar8;
    s32 r;
    s32 t;
    vu8 *p1;
    vu8 loc[2];
    u32 v;
    u16 k2;
    vu8 *p0;
    u16 z;
    s32 k;

    param_1[0] = 1;
    param_1[2] = 1;
    param_1[3] = 0;
    iVar8 = 0;
    param_1[4] = param_4;
    *(u32 *)(6 + param_1) = (u32)func_020078f4;
    if (param_1[5] == 0) {
        *(u32 *)(8 + param_1) = 0;
        *(u32 *)(10 + param_1) = 0;
    } else {
        z = 0;
        do {
            ((u16 *)((u8 *)(s32)param_1 + 36))[iVar8] = z;
        k = 255;
            ((u16 *)((u8 *)param_1 + 420))[iVar8] = (s16)k;
        k2 = 192;
            iVar8 = 1 + iVar8;
        } while (iVar8 < 0xc0);
        param_1[0x10] = z;
        param_1[0x11] = k2;
        *(vu32 *)0x04001000 = (*(vu32 *)0x04001000 & ~0xe000) | 0x2000;
        v = (*(vu16 *)0x04001048 & ~0x3f) | 8;
        *(vu16 *)0x04001048 = v | 0x20;
        v = (*(vu16 *)0x04001048 & ~0x3f00) | 0x800;
        p1 = &loc[1];
        p0 = &loc[0];
        *(vu16 *)0x04001048 = 0x2000 | v;
        *(vu16 *)0x0400104a = (*(vu16 *)0x0400104a & ~0x3f) | 0x17;
        *(vu16 *)0x04001040 = k;
        *(vu16 *)0x04001044 = k2;
        t = *(vu8 *)0x04001048;
        *p1 = t;
        r = loc[1];
        *p0 = r;
        func_02069f94((u16 *)0x04001050, ((u32)loc[0] << 27) >> 27, z);
        *(u32 *)(param_1 + 8) = (u32)func_02007c88;
        *(u32 *)(10 + param_1) = (u32)func_02007d24;
    }
    *(u32 *)(0xc + param_1) = 0xff000;
    param_1[0xe] = param_2;
    param_1[0xf] = param_3;
}
