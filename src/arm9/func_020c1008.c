#include "ctx.h"
extern u8 data_027c0360[];
extern void func_020d345c(u8 *p, u32 a, u32 *b);
extern u32 func_02067898(u32 a, u32 b);
extern s32 func_020678b4(u32 *a, u32 *b);
extern void func_02066c08(u32 *a, u32 b, u32 c, u32 d);
extern void func_0206c8d4(u8 *a, u32 *b);
extern void func_01ff810c(u32 *a, u32 *b, u32 *c);

typedef struct {
    u32 aiStack_60[12];
    u32 local_30;
    u32 local_2c;
    u32 local_28;
    u32 aiStack_24[3];
} Frame72;

void func_020c1008(u32 param_1, u32 *param_2)
{
    Frame72 f;
    s64 lVar1;
    u32 uVar2;
    u32 uVar5;
    s32 iVar3;
    u8 *iVar4;
    iVar4 = *(u8 **)(*(u8 **)data_027c0360 + 0x214);
    func_020d345c(iVar4, 2, &f.local_30);
    func_020d345c(iVar4, 3, f.aiStack_24);
    uVar2 = func_02067898(0x1000, 0x1000);
    lVar1 = (s64)(s32)uVar2 * 0xb33 + 0x800;
    uVar5 = (u32)(lVar1 >> 12);
    iVar3 = func_020678b4(f.aiStack_24, &f.local_30);
    lVar1 = (s64)iVar3 * (s64)(s32)uVar2 + 0x800;
    func_02066c08(f.aiStack_60, uVar5, uVar5, (u32)(lVar1 >> 12));
    {
        u8 *q = iVar4 + 0x20;
        q = q + 0x60;
        func_0206c8d4(q, param_2);
    }
    func_01ff810c(f.aiStack_60, param_2, param_2);
    {
        u32 t2 = f.local_28;
        u32 t1 = f.local_2c;
        u32 t0 = f.local_30;
        param_2[9] = t0;
        param_2[10] = t1;
        param_2[11] = t2;
    }
}
