#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

typedef struct { u32 w[3]; } T3;

extern u32 data_0214f460;
extern s32 func_0203579c(u8 *p, u32 a);
extern s32 func_02028124(u8 *p);
extern s32 func_02035770(u8 *p, u32 a);
extern void func_02044acc(u32 *a);
extern void func_020aafac(u32 a, u8 *b, u8 *c, u32 *d);
extern void func_02037450(u8 *p, u32 a);
extern void func_02022b7c(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_ov003_02179bb8(u8 *p, u32 a, u32 b, u32 c, u32 d, s32 e, u32 f, s32 g, u32 h, u32 i, u32 j, u32 k);

void func_ov003_02178c48(u8 *param_1)
{
    s32 iVar1;
    s32 iVar3;
    s32 uVar2;
    u32 auStack_18[3];

    iVar1 = func_0203579c(param_1, 38);
    if (iVar1 != 0) {
        uVar2 = func_02028124(param_1);
        *(s32 *)(param_1 + 0x25c) = FX_Mul(uVar2, -64);
        *(s32 *)(param_1 + 0x264) = *(s32 *)(param_1 + 0x25c) * -16;
    }
    iVar1 = func_02035770(param_1, 70);
    func_02044acc(auStack_18);
    func_020aafac(data_0214f460, param_1 + 0x26c, param_1 + 0x2dc, auStack_18);
    *(T3 *)(param_1 + 0x278) = *(T3 *)(param_1 + 0x26c);
    *(T3 *)(param_1 + 0x3b4) = *(T3 *)(param_1 + 0x26c);
    func_02037450(param_1, 0x300);
    func_02022b7c(param_1);
    iVar3 = func_0203567c(param_1);
    func_ov003_02179bb8(param_1, 0, 0, 1, 1, iVar1, 0, iVar3, 0x30, 0, 3, 0);
}
