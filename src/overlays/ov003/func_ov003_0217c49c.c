#include "ctx.h"

extern u32 data_02159444;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

typedef struct { u32 w[3]; } T12;

s32 func_02028124(u8 *p);
void func_0202508c(u8 *p, s32 a, s32 b, s32 c);
void func_02039448(u8 *p);
void func_02037450(u8 *p, s32 v);
s32 func_0203567c(u8 *p);
void func_0202fcc0(u8 *p);

void func_ov003_0217c49c(u8 *param_1)
{
    s32 uVar1;
    s32 iVar2;

    uVar1 = func_02028124(param_1);
    func_0202508c(param_1, 16, 38, FX_Mul(uVar1, 279));
    func_02039448(param_1);
    iVar2 = *(s32 *)(*(u8 **)&data_02159444 + 0x1c);
    *(T12 *)(param_1 + 0x278) = *(T12 *)((u8 *)iVar2 + 0x30);
    *(T12 *)(param_1 + 0x3b4) = *(T12 *)(param_1 + 0x278);
    func_02037450(param_1, 0x300);
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_0202fcc0(param_1);
        return;
    }
}
