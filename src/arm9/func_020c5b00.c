#include "ctx.h"

#define FX_Mul(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} T3;

extern u8 *data_027c0360;
extern s16 data_02126868[];

extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern s32 func_02067c30(s32 *a);
extern s32 func_0206782c(s32 a);
extern s32 func_02067e9c(s32 a, s32 b);
extern void func_01ff8000(s32 *a, s32 b, s32 c);
extern void func_01ff8020(u32 *a, s32 b, s32 c);
extern void func_01ff803c(s32 *a, s32 b, s32 c);
extern void func_01ff810c(s32 *a, u32 *b, u32 *c);
extern s32 func_02067898(s32 a, s32 b);
extern void func_02066c08(s32 *a, s32 b, s32 c, s32 d);
extern void func_0206c8d4(u32 *a, u32 *b);

void func_020c5b00(u32 param_1, u32 *param_2, s32 param_3)
{
    s32 u8;
    s32 iVar5;
    s32 b;
    s32 a;
    s32 iVar10;
    s32 off;
    u16 u6;
    s32 gp;
    s32 gv;
    s32 k12;
    u16 u5;
    s32 l2;
    s32 l0;
    s32 *a0;
    s32 local_120[3];
    u32 local_114[3];
    u32 auStack_108[12];
    s32 aiStack_d8[12];
    s32 aiStack_a8[12];
    u32 auStack_78[12];
    s32 aiStack_48[12];
    u32 *pOut;

    asm { ldr gp, =data_027c0360 }
    asm { mov k12, #12 }
    asm { ldr gv, [gp] }
    iVar10 = *(s32 *)(gv + 0x214);
    off = param_3 * k12;
    a0 = (s32 *)((param_3 + 1) * k12 + iVar10);
    asm { mov pOut, param_2 }
    func_02067e34(a0, (s32 *)(iVar10 + off), local_120);
    iVar5 = func_02067c30(local_120);
    *(T3 *)local_114 = *(T3 *)(iVar10 + off);
    l2 = local_120[2];
    l0 = local_120[0];
    iVar10 = func_0206782c(FX_Mul(l2, l2) + FX_Mul(l0, l0));
    a = func_02067e9c(local_120[1], iVar10);
    u6 = (u16)(-(u16)((((s64)a * 0x28be60db9391LL) + ((s64)0x800 << 32)) >> 44));
    b = func_02067e9c(local_120[0], local_120[2]);
    u5 = (u16)((((s64)b * 0x28be60db9391LL) + ((s64)0x800 << 32)) >> 44);
    if (local_120[1] > 0) {
        u8 = -u5;
    } else {
        u8 = u5;
    }
    func_01ff8000(aiStack_a8, data_02126868[(u6 >> 4) * 2], data_02126868[(u6 >> 4) * 2 + 1]);
    func_01ff8020(auStack_78, data_02126868[(u5 >> 4) * 2], data_02126868[(u5 >> 4) * 2 + 1]);
    func_01ff803c(aiStack_48, data_02126868[((u16)u8 >> 4) * 2], data_02126868[((u16)u8 >> 4) * 2 + 1]);
    func_01ff810c(aiStack_a8, auStack_78, auStack_108);
    func_01ff810c(aiStack_48, auStack_108, auStack_108);
    iVar10 = func_02067898(iVar5, 0x2000);
    func_02066c08(aiStack_d8, 0x1000, 0x1000, iVar10);
    func_0206c8d4(auStack_108, pOut);
    func_01ff810c(aiStack_d8, pOut, pOut);
    pOut[9] = local_114[0];
    pOut[10] = local_114[1];
    pOut[11] = local_114[2];
}
