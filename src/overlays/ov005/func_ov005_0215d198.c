#pragma avoid_byte strb
#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 *data_02159444;
extern void *data_0214f460;
extern u32 *data_0214f464;
extern u8 *data_02159468;

extern int func_020aaf38(void *a, int *b, int c);
extern void func_02027ee0(u8 *p, int a, int b);
extern void func_02027b38(u8 *p, int a);
extern int func_02028130(u8 *p);
extern int func_0203560c(u8 *p, int a, int b);
extern void func_0203e8cc(u8 *p, int a, int b);
extern void func_0203e908(u8 *p, int a);
extern int func_ov005_0215dbec(u8 *p, int a);
extern int func_02027f78(u8 *p, int a);
extern u16 func_02041f04(u8 *p);


static inline s32 FXM(s32 a, s32 b)
{
    return (s32)(((s64)a * b + 0x800) >> 12);
}

void func_ov005_0215d198(u8 *param_1, int *param_2, int param_3)
{
    s32 iVar6, iVar5;
    BOOL bVar3;
    u8 *e, *g;

    if (((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15) == 0 && (*(u16 *)(data_02159444 + 0x84) & 1)) {
        iVar5 = *(s32 *)(data_02159444 + 0x98);
        iVar6 = *(s32 *)(data_02159444 + 0x94);
        if (iVar5 <= 0) iVar5 = -iVar5;
        if (iVar6 <= 0) iVar6 = -iVar6;
        if (iVar6 + iVar5 > 10) {
            func_02027ee0(param_1, 1, 30);
            func_02027ee0(param_1, 2, -3);
        } else {
            *(u16 *)(param_1 + 0x128) = *(u16 *)(param_1 + 0x128) + 1;
            if (*(u16 *)(param_1 + 0x128) >= 60) {
                *(u16 *)(param_1 + 0x128) = 0;
                func_02027b38(param_1, -20);
            }
            func_02027ee0(param_1, 1, -10);
            func_02027ee0(param_1, 5, -10);
            func_02027ee0(param_1, 2, 1);
        }
    }
    if ((*(u16 *)(data_02159444 + 0x84) & 1) == 0) {
        *(u16 *)(param_1 + 0x11a) = *(u16 *)(param_1 + 0x11a) + 1;
    } else {
        *(u16 *)(param_1 + 0x11a) = 0;
    }

    {
        s32 f1 = func_02028130(param_1);
        s32 f2 = func_02028130(param_1);
        if (func_020aaf38(data_0214f460, param_2, FXM(FX_Mul(f2, f1), param_3)) == 0) {
            *(u16 *)(param_1 + 0x11c) = *(u16 *)(param_1 + 0x11c) + 1;
        } else {
            *(u16 *)(param_1 + 0x11c) = 0;
        }
    }

    iVar6 = *(s32 *)(data_02159444 + 0x98);
    iVar5 = *(s32 *)(data_02159444 + 0x94);
    if (iVar6 <= 0) iVar6 = -iVar6;
    if (iVar5 <= 0) iVar5 = -iVar5;
    if (iVar5 + iVar6 > 2) {
        *(u16 *)(param_1 + 0x11e) = *(u16 *)(param_1 + 0x11e) + 1;
    } else if (*(u16 *)(param_1 + 0x11e) != 0) {
        *(u16 *)(param_1 + 0x11e) = *(u16 *)(param_1 + 0x11e) - 1;
    }

    if (*(u16 *)(param_1 + 0x11e) > 60) {
        s16 st = *(s16 *)(param_1 + 0x156);
        if (st != 0 && st != 3) {
            if (st == 4) {
                u32 *p = data_0214f464;
                u32 v = *p * 0x10dcd + 1;
                u32 q;
                *p = v;
                q = (u32)(u16)v * 60u;
                if ((u16)(q >> 16) == 0) {
                    func_0203e8cc(param_1, 2, 3);
                }
            }
        } else {
            if (func_0203560c(param_1, 2, 10) != 0) {
                func_0203e8cc(param_1, 2, 4);
            }
        }
    } else {
        if (*(u16 *)(param_1 + 0x11e) > 20) {
            func_0203e8cc(param_1, 2, 4);
            *(u8 *)(param_1 + 151) = 4;
            *(u8 *)(param_1 + 152) = 9;
        }
    }

    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;

    if (*(u16 *)(param_1 + 0x11c) > 20) {
        if ((*(u16 *)(data_02159444 + 0x84) & 1) != 0) {
            func_0203e908(param_1, 0x43d);
        } else {
            func_0203e908(param_1, 0x440);
        }
        return;
    }

    if (((*(u16 *)(data_02159444 + 0x84) & 2) != 0) || *(u16 *)(param_1 + 0x11c) > 1) {
        if (func_ov005_0215dbec(param_1, 1) != 0) {
            return;
        }
    }

    {
    s32 idx = *(s16 *)(data_02159444 + 0x7a);
    if (idx < 0 || *(s16 *)(data_02159468 + 0x20) <= idx) {
        e = 0;
    } else {
        e = *(u8 **)(data_02159468 + idx * 4 + 4);
    }
    if (e != 0 && *(s16 *)(e + 0x96) == 9 && *(s16 *)(e + 0x90) == 3) {
        bVar3 = TRUE;
    } else {
        bVar3 = FALSE;
    }
    if (!bVar3) {
        if (idx < 0 || *(s16 *)(data_02159468 + 0x20) <= idx) {
            g = 0;
        } else {
            g = *(u8 **)(data_02159468 + idx * 4 + 4);
        }
        if (g != 0 && *(s16 *)(g + 0x96) == 10) {
            bVar3 = TRUE;
        } else {
            bVar3 = FALSE;
        }
        if (!bVar3) {
            return;
        }
    }
    if (*(s8 *)(param_1 + 0x8b) != 2) {
        return;
    }
    }
    {
        s32 n = func_02027f78(param_1, 5);
        u16 m = func_02041f04(param_1);
        if (n <= (s32)m) {
            return;
        }
        func_0203e908(param_1, 0x440);
        return;
    }
}
