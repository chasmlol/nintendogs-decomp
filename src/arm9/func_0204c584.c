#include "ctx.h"

typedef struct { u32 w[3]; } T3;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_02036510(u8 *p);
void func_02027668(s32 a, s32 *b);
void func_02027654(s32 a, u32 *b);
void func_0203942c(u8 *p);
void func_02037450(u8 *p, s32 a);
void func_02035be8(u8 *p);
s32 func_020289d0(u8 *p, s32 a, s32 b);
s32 func_0203592c(u8 *p, s32 a);
s32 func_020357c8(u8 *p, s32 a);
void func_020397fc(u8 *p);

void func_0204c584(u8 *param_1)
{
    s32 st[3];
    s32 iVar4;
    s32 iVar5;
    s32 sum;
    s32 d0;
    s32 d2;

    iVar4 = func_02036510(param_1);
    if (iVar4 != 0) {
        func_02027668(iVar4, st);
        func_02027654(iVar4, (u32 *)(param_1 + 948));
        iVar5 = *(s32 *)(param_1 + 0x2a0);
        d0 = st[0] - iVar5;
        d2 = st[2] - *(s32 *)(param_1 + 0x2a8);
        sum = FX_Mul(d0, *(s32 *)(param_1 + 0x18c)) + FX_Mul(d2, *(s32 *)(param_1 + 0x194));
        if (sum > 0) {
            *(s32 *)(param_1 + 0x26c) = (iVar5 + (d0 >> 2)) - d2;
            *(s32 *)(param_1 + 0x270) = *(s32 *)(param_1 + 0x2a4);
            *(s32 *)(param_1 + 0x274) = *(s32 *)(param_1 + 0x2a8) + (d2 >> 2) + d0;
        } else {
            *(s32 *)(param_1 + 0x26c) = (iVar5 + (d0 >> 2)) + d2;
            *(s32 *)(param_1 + 0x270) = *(s32 *)(param_1 + 0x2a4);
            *(s32 *)(param_1 + 0x274) = (*(s32 *)(param_1 + 0x2a8) + (d2 >> 2)) - d0;
        }
        func_0203942c(param_1);
        func_02037450(param_1, 0x302);
    }
    func_02035be8(param_1);
    iVar5 = func_020289d0(param_1, 0, 1);
    if (iVar5 != 0) {
        return;
    }
    if (func_0203592c(param_1, 0) != 0) {
        return;
    }
    iVar5 = func_020357c8(param_1, 0);
    if (iVar5 != 0) {
        return;
    }
    if (iVar4 != 0 && *(u16 *)(param_1 + 0xfc) <= 60) {
        return;
    }
    func_020397fc(param_1);
}
