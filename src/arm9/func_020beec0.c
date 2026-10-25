#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_02027640(void *p, s32 *a);
void func_02027178(void *p, s32 *a, s32 b);
s32 func_02028130(void *p);
s32 func_02027448(void *p);
void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);


void func_020beec0(u8 *param_1, void *param_2, s32 *param_3)
{
    s32 buf[12];
    s32 aiStack_40[3];
    s32 loc[6];
    s32 iVar2;
    s32 iVar3;
    s32 x;
    s32 v;

    func_02027640(param_2, aiStack_40);
    func_02027178(param_2, buf, 12);
    loc[0] = buf[0];
    loc[1] = buf[1];
    loc[2] = buf[2];
    loc[3] = buf[3];
    loc[4] = buf[4];
    loc[5] = buf[5];
    iVar2 = func_02028130(param_2);
    iVar3 = func_02027448(param_2);
    x = FX_Mul(iVar3, iVar2);
    x = FX_Mul(x, 0x800);

    switch (*(s32 *)(param_1 + 0x12c)) {
    case 0:
        v = *(s32 *)(param_1 + 0x124);
        func_01ff832c((s32)((((s64)1 - v) * 0x800) >> 12), &loc[3], aiStack_40, param_3);
        func_01ff832c(FX_Mul(x, -1024), loc, param_3, param_3);
        return;
    case 1:
        v = *(s32 *)(param_1 + 0x124);
        func_01ff832c(-(FX_Mul(v, 0x800) + FX_Mul(*(s32 *)(param_1 + 0x128), 0x333)),
                      &loc[3], aiStack_40, param_3);
        func_01ff832c(FX_Mul(*(s32 *)(param_1 + 0x128), 0xccd), loc, param_3, param_3);
        return;
    case 2:
        v = *(s32 *)(param_1 + 0x124);
        func_01ff832c(-FX_Mul(v, 0x800), &loc[3], aiStack_40, param_3);
        func_01ff832c(*(s32 *)(param_1 + 0x128) - x, loc, param_3, param_3);
        return;
    case 3:
        func_01ff832c(-FX_Mul(*(s32 *)(param_1 + 0x124), 0xb33), &loc[3], aiStack_40, param_3);
        func_01ff832c(*(s32 *)(param_1 + 0x128), loc, param_3, param_3);
        return;
    case 4:
        v = *(s32 *)(param_1 + 0x128);
        func_01ff832c(FX_Mul(v, -0x333), &loc[3], aiStack_40, param_3);
        func_01ff832c(*(s32 *)(param_1 + 0x128) - x, loc, param_3, param_3);
        return;
    }
}
