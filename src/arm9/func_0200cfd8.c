#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f45c;

typedef struct { u32 w[3]; } T3;


u8 *func_0200c498(u32 a, u32 b);
void func_0203942c(u8 *p);
s32 func_02037450(u8 *p, u32 a);
u32 func_02028124(u8 *p);
s32 func_02022e14(u8 *p, u32 a);
u8 func_02029504(u8 *p);
s32 func_01ffdb08(s32 a);
void func_02041168(s32 a);
u8 *func_0203541c(u8 *p);
void func_0203e908(u8 *p, u32 a);
u8 *func_020bc3c4(void);
void func_020bbe14(u32 a, u32 b);
void func_020429d8(u32 a);
void func_0202fcc0(u8 *p);

void func_0200cfd8(u8 *param_1)
{
    s32 bVar1;
    s32 bVar3;
    u8 bVar4;
    s32 iVar5;
    s32 iVar6;
    s32 iLoop;
    u32 uVar7;
    s16 *psVar11;
    u32 *puVar10;
    u8 *q;

    bVar1 = 0;
    q = func_0200c498(0xc, 0);
    if (q != 0) {
        psVar11 = (s16 *)(*(u8 **)(data_0214f45c + 0x18) + (s16)*(u32 *)(q + 0x20) * 0x24);
        if (psVar11 != 0) {
            puVar10 = (u32 *)(*(u8 **)(data_0214f45c + 0x1c) + (s16)(*psVar11 + *(s32 *)(param_1 + 0x464)) * 0x44);
            if (puVar10 != 0) {
                *(s32 *)(param_1 + 0x468) = *(s32 *)(param_1 + 0x468) + 32;
                {
                    s32 fa = *(s32 *)(param_1 + 0x918);
                    s32 fd = (s32)puVar10[1] - fa;
                    *(s32 *)(param_1 + 0x918) = fa + (s32)(((s64)fd * (s64)*(s32 *)(param_1 + 0x468) + 0x800) >> 12);
                }
                *(T3 *)(param_1 + 0x26c) = *(T3 *)puVar10;
                func_0203942c(param_1);
                {
                    u32 k102 = 0x102;
                    iVar5 = func_02037450(param_1, k102);
                }
                iVar6 = (s32)func_02028124(param_1);
                if (iVar5 < iVar6 * 0x24) {
                    *(s32 *)(param_1 + 0x464) = *(s32 *)(param_1 + 0x464) + 1;
                    *(s32 *)(param_1 + 0x468) = 0;
                    if (puVar10[9] == 1) {
                        u8 *pq = func_020bc3c4() + 136;
                        *(u32 *)(pq + 0x6c) = 1;
                        func_020bbe14(0xf, (u32)(s16)*(s8 *)(param_1 + 0x88));
                    }
                    if (*(s32 *)(param_1 + 0x464) >= (s32)psVar11[1]) {
                        bVar1 = 1;
                    }
                }
            }
        }
    }
    *(u8 *)(param_1 + 0xb0) &= ~16;
    uVar7 = (u32)*(s16 *)(param_1 + 0xf0);
    if (uVar7 != 0x6f) {
        bVar3 = func_02022e14(param_1, 0x4d);
        uVar7 = (u32)bVar3;
        if (uVar7 == 0) {
            bVar4 = func_02029504(param_1);
            uVar7 = (u32)bVar4;
        }
    }
    if (bVar1 != 0) {
        *(s32 *)(param_1 + 0x918) = 0;
        *(u8 *)(param_1 + 181) &= ~1;
        *(u8 *)(param_1 + 176) |= 16;
        func_02029504(param_1);
        iLoop = 0;
        do {
            iVar6 = func_01ffdb08(iLoop);
            if (iVar6 != 0) {
                func_02041168(iVar6);
            }
            iLoop = (s8)(iLoop + 1);
        } while (iLoop < 3);
        if (func_0203541c(param_1) != 0) {
            func_0203e908(param_1, 0x47b);
            return;
        }
        {
            u32 t1 = *(u8 *)(param_1 + 0xb5) & ~2u;
            vu8 *pb = (vu8 *)(param_1 + 0xb5);
            *pb = (u8)t1;
            *(u8 *)(param_1 + 0xb5) &= ~4;
        }
        func_020429d8((u32)(s16)*(s8 *)(param_1 + 0x88));
        func_020bbe14(1, (u32)-1);
        {
            u8 *pq = func_020bc3c4() + 136;
            *(u32 *)(pq + 0x6c) = 0;
        }
        func_0202fcc0(param_1);
        return;
    }
}
