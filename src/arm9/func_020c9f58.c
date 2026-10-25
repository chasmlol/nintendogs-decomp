#include "ctx.h"

extern s16 data_02126868[];
extern u8 *func_0200c498(s32 a, s32 b);
extern void func_01ff8000(u32 *out, s32 a, s32 b);
extern void func_01ff8020(u32 *out, s32 a, s32 b);
extern void func_01ff803c(u32 *out, s32 a, s32 b);
extern void func_01ff810c(u32 *dst, u32 *a, u32 *b);

typedef struct { u32 a; u32 b; u32 c; } Tri3;

static inline s32 mulr(s32 k, s32 x)
{
    s64 v = (s64)k * (s64)x + 0x800;
    return (s32)(u32)(v >> 12);
}

void func_020c9f58(u32 *param_1, s32 param_2, s32 param_3)
{
    u32 auStack_78[12];
    u32 auStack_48[12];
    u8 *iVar5;
    u16 uVar2;
    u16 uVar3;
    s32 iVar1;

    iVar5 = func_0200c498(0xf, param_2);
    *(Tri3 *)param_1 = *(Tri3 *)(iVar5 + 8);
    uVar2 = *(u16 *)(iVar5 + 4);
    iVar1 = (s32)(u32)*(u16 *)(iVar5 + 2) >> 4;
    uVar3 = *(u16 *)(iVar5 + 6);
    func_01ff8000(auStack_78, data_02126868[iVar1 * 2], data_02126868[iVar1 * 2 + 1]);
    iVar1 = (s32)(u32)uVar2 >> 4;
    func_01ff8020(auStack_48, data_02126868[iVar1 * 2], data_02126868[iVar1 * 2 + 1]);
    func_01ff810c(auStack_78, auStack_48, auStack_78);
    iVar1 = (s32)(u32)uVar3 >> 4;
    func_01ff803c(auStack_48, data_02126868[iVar1 * 2], data_02126868[iVar1 * 2 + 1]);
    func_01ff810c(auStack_78, auStack_48, auStack_78);
    param_1[3] = *(u32 *)(iVar5 + 8) + mulr(param_3, auStack_78[6]);
    param_1[4] = *(u32 *)(iVar5 + 0xc) + mulr(param_3, auStack_78[7]);
    param_1[5] = *(u32 *)(iVar5 + 0x10) + mulr(param_3, auStack_78[8]);
    {
        u32 t2 = auStack_78[5];
        u32 t1 = auStack_78[4];
        u32 t0 = auStack_78[3];
        param_1[6] = t0;
        param_1[7] = t1;
        param_1[8] = t2;
    }
    param_1[9] = (s32)(*(s32 *)(iVar5 + 0x28) * 0x1000) / 2;
}
