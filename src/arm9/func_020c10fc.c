#include "ctx.h"

extern u8 *data_027c0360;
extern void func_020d345c(u8 *obj, s32 idx, s32 *vec);
extern s32 func_02067898(s32 a, s32 b);
extern s32 func_020678b4(s32 *a, s32 *b);
extern void func_02066c08(s32 *m, s32 a, s32 b, s32 c);
extern void func_0206c8d4(u8 *a, u32 *b);
extern void func_01ff810c(s32 *a, u32 *b, u32 *c);

typedef struct { u8 pad[0x30]; u8 rest[4]; } Sub30;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_020c10fc(u32 param_1, u32 *param_2)
{
    u8 *iVar4;
    Sub30 *sp30;
    s32 uVar2;
    s32 uVar5;
    s64 lVar1;
    s32 iVar3;
    s32 aiStack_60[12];
    s32 local_30[3];
    s32 aiStack_24[3];
    s32 t0, t1, t2;

    iVar4 = *(u8 **)(data_027c0360 + 0x214);
    func_020d345c(iVar4, 1, local_30);
    func_020d345c(iVar4, 2, aiStack_24);
    uVar2 = func_02067898(0x1000, 0x1000);
    lVar1 = (s64)0xb33 * uVar2 + 0x800;
    uVar5 = (s32)(lVar1 >> 12);
    iVar3 = func_020678b4(aiStack_24, local_30);
    func_02066c08(aiStack_60, uVar5, uVar5, FX_Mul(iVar3, uVar2));
    sp30 = (Sub30 *)(iVar4 + 0x20);
    func_0206c8d4((u8 *)sp30 + 0x30, param_2);
    func_01ff810c(aiStack_60, param_2, param_2);
    t2 = local_30[2];
    t1 = local_30[1];
    t0 = local_30[0];
    param_2[9] = t0;
    param_2[10] = t1;
    param_2[11] = t2;
}
