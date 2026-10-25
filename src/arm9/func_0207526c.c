#include "ctx.h"

extern u8 data_0213e598[];
extern u8 data_0213e59c[];
extern u8 data_02152cd8[];
extern u8 data_02152d24[];
extern u8 data_02152d94[];
extern void func_020776d4(u32 a, void *b, int c);
extern void func_02077d20(void *a, void *b);

typedef struct { u32 l58; u32 l54[13]; s32 l20; s32 l1c; s32 l18; } Frame;
#define local_58 F.l58
#define local_54 F.l54
#define local_20 F.l20
#define local_1c F.l1c
#define local_18 F.l18

void func_0207526c(s32 *param_1)
{
    Frame F;
    u32 uVar3;
    u16 uVar1;
    u8 *pSp;
    s32 iVar5;
    u32 uVar6;
    u8 cVar7;
    u8 *ob;

    if ((param_1[2] & 0x200) == 0 && (param_1[2] & 1) != 0) {
        ob = (u8 *)param_1[0x2c];
        if ((*(u32 *)(ob + 0x10) & 0xc0000000) != 0x80000000) {
            u32 a0;
            *(u32 *)(ob + 0x10) &= ~0xc0000000;
            *(u32 *)((u8 *)param_1[0x2c] + 0x10) = *(u32 *)((u8 *)param_1[0x2c] + 0x10) | 0x80000000;
            a0 = *(u32 *)data_0213e598;
            ((u32 *)data_0213e598)[1] = *(u32 *)((u8 *)param_1[0x2c] + 0x10);
            func_020776d4(a0, data_0213e59c, 1);
        }
        local_58 = 3;
        func_020776d4(0x10, &local_58, 1);
        if (param_1[0xf] != 0) cVar7 = *((u8 *)param_1 + 0x98);
        else cVar7 = 0;
        if (cVar7 == 1) {
            param_1[2] &= ~0x40;
            ((void (*)(s32 *))param_1[0xf])(param_1);
            if (param_1[0xf] != 0) cVar7 = *((u8 *)param_1 + 0x98);
            else cVar7 = 0;
            uVar3 = param_1[2] & 0x40;
        } else {
            uVar3 = 0;
        }
        if (uVar3 == 0) {
            s32 lo;
            s32 hi;
            ob = (u8 *)param_1[0x2c];
            uVar3 = *(u16 *)(ob + 0x2e);
            uVar6 = *(u16 *)(ob + 0x2c);
            local_20 = (s32)uVar6 << 15;
            local_1c = (-(s32)uVar3) << 15;
            local_18 = 0x10000;
            func_020776d4(0x1b, &local_20, 3);
            lo = (s16)(uVar6 << 3);
            hi = (s16)(uVar3 << 3);
            local_54[0] = (u16)lo | ((u32)(u16)hi << 16);
            func_020776d4(0x22, local_54, 1);
        }
        if (cVar7 == 2) {
            param_1[2] &= ~0x40;
            ((void (*)(s32 *))param_1[0xf])(param_1);
            if (param_1[0xf] != 0) cVar7 = *((u8 *)param_1 + 0x98);
            else cVar7 = 0;
            uVar3 = param_1[2] & 0x40;
        } else {
            uVar3 = 0;
        }
        if (uVar3 == 0) {
            iVar5 = param_1[0x36];
            {
                s32 base = iVar5 + 4;
                u32 off = *(u16 *)(iVar5 + 10);
                u32 bv = *(u8 *)(*param_1 + 1);
                u32 vv = *(u16 *)(base + off);
                u8 *q = (u8 *)(base + off);
                iVar5 = iVar5 + *(s32 *)(q + vv * bv + 4);
            }
            uVar1 = *(u16 *)(iVar5 + 0x1e);
            if ((uVar1 & 0x2000) != 0) {
                pSp = (u8 *)(iVar5 + 0x2c);
                if ((uVar1 & 2) == 0) pSp += 8;
                if ((uVar1 & 4) == 0) pSp += 4;
                if ((uVar1 & 8) == 0) pSp += 8;
                func_020776d4(0x18, pSp, 0x10);
            }
        }
        if (cVar7 == 3) {
            param_1[2] &= ~0x40;
            ((void (*)(s32 *))param_1[0xf])(param_1);
            uVar3 = param_1[2] & 0x40;
        } else {
            uVar3 = 0;
        }
        if (uVar3 == 0) {
            local_54[1] = 2;
            func_020776d4(0x10, &local_54[1], 1);
            func_02077d20((void *)0, &local_54[4]);
            local_54[2] = 3;
            func_020776d4(0x10, &local_54[2], 1);
            if ((*(u32 *)(data_02152cd8 + 0xfc) & 1) != 0) {
                func_020776d4(0x1a, data_02152d24, 9);
                func_020776d4(0x1a, data_02152d94, 9);
                func_020776d4(0x1a, &local_54[4], 9);
            } else if ((*(u32 *)(data_02152cd8 + 0xfc) & 2) != 0) {
                func_020776d4(0x1a, data_02152d24, 9);
                func_020776d4(0x1a, &local_54[4], 9);
            } else {
                func_020776d4(0x1a, &local_54[4], 9);
            }
        }
        local_54[3] = 2;
        func_020776d4(0x10, &local_54[3], 1);
    }
    *param_1 = *param_1 + 3;
}
