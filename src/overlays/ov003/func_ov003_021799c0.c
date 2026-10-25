#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (s64)(b) + 0x800) >> 12))

typedef struct { u32 w[3]; } T3;

extern u8 *data_0214f460;
extern u8 data_02152cd8[];
extern u8 *data_02159444;
extern s32 func_02039448(u8 *p);
extern s32 func_020ab064(u8 *obj, u32 *out);
extern void func_020ab02c(u8 *obj, u8 *dst, s32 *src);
extern s32 func_02028130(u8 *p);
extern void func_01ff832c(s32 a, s32 *b, u8 *c, s32 *d);
extern void func_02037450(u8 *p, s32 v);

s32 func_ov003_021799c0(u8 *param_1)
{
    s32 iVar2;
    u32 a0[3];
    s32 a1[3];
    s32 uVar3;

    func_02039448(param_1);
    iVar2 = func_020ab064(data_0214f460, a0);
    if (iVar2 == 0) {
        goto A;
    }
    *(T3 *)(param_1 + 0x278) = *(T3 *)a0;
    a1[0] = *(s32 *)(data_02152cd8 + 0x54);
    a1[1] = *(s32 *)(data_02152cd8 + 0x60);
    a1[2] = *(s32 *)(data_02152cd8 + 0x6c);
    uVar3 = func_02028130(param_1);
    func_01ff832c(FX_Mul(uVar3, 410), a1, param_1 + 0x2e8, a1);
    func_020ab02c(data_0214f460, param_1 + 0x3b4, a1);
    uVar3 = func_02028130(param_1);
    *(s32 *)(param_1 + 0x3b8) = *(s32 *)(param_1 + 0x3b8) + FX_Mul(uVar3, 0x802);
    if ((*(u16 *)(data_02159444 + 0x84) & 2) != 0) {
        *(s32 *)(param_1 + 0x450) = 0;
        *(s32 *)(param_1 + 0x454) = 0;
    }
    goto common;
A:
    *(T3 *)(param_1 + 0x3b4) = *(T3 *)a0;
common:
    func_02037450(param_1, 0x300);
    return iVar2;
}
