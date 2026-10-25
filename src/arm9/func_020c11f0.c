#include "ctx.h"

#define FX_Mul(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

typedef struct {
    u32 a60[12];
    u32 l30;
    u32 l2c;
    u32 l28;
    u32 b24[3];
} Frame;

extern u8 *data_027c0360;
extern void func_020d345c(u8 *a, u32 b, u32 *c);
extern s32 func_02067898(s32 a, s32 b);
extern s32 func_020678b4(u32 *a, u32 *b);
extern void func_02066c08(u32 *a, s32 b, s32 c, s32 d);
extern void func_0206c8d4(u8 *a, u32 *b);
extern void func_01ff810c(u32 *a, u32 *b, u32 *c);

void func_020c11f0(u32 param_1, u32 *param_2)
{
    Frame loc;
    u8 *iVar4;
    s32 iVar3;
    s32 uVar2;
    s32 uVar5;
    u32 t0;
    u32 t1;
    u32 t2;

    iVar4 = *(u8 **)((u8 *)data_027c0360 + 0x214);
    func_020d345c(iVar4, 0, &loc.l30);
    func_020d345c(iVar4, 1, loc.b24);
    uVar2 = func_02067898(0x1000, 0x1000);
    uVar5 = FX_Mul(uVar2, 0xb33);
    iVar3 = func_020678b4(loc.b24, &loc.l30);
    func_02066c08(loc.a60, uVar5, uVar5, FX_Mul(iVar3, uVar2));
    func_0206c8d4(iVar4 + 0x20, param_2);
    func_01ff810c(loc.a60, param_2, param_2);
    t2 = loc.l28;
    t1 = loc.l2c;
    t0 = loc.l30;
    param_2[9] = t0;
    param_2[10] = t1;
    param_2[11] = t2;
}
