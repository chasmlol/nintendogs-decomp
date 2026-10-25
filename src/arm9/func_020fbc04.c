#include "ctx.h"

extern u32 data_0213331c[];
extern int data_02159458;
extern void func_020bd868(u32 p);
extern void func_020bd858(u32 p);
extern u32 func_020f3af8(void);
extern s32 func_01ffdb08(int a);
extern s32 func_02028124(s32 p);
extern u8 func_020c5fbc(u32 p);

u32 func_020fbc04(u32 param_1)
{
    u32 uVar3;
    int iVar4;
    u32 uVar5;
    s64 v;
    u8 bVar2;
    u8 *q;

    if (*(s16 *)(param_1 + 0x90) == 1) {
        goto LAB_one;
    }
    if (*(s16 *)(param_1 + 0x90) != 2) {
        return param_1;
    }
    func_020bd858(param_1);
    q = *(u8 **)(param_1 + 0x18c);
    *(u16 *)(q + 0x20) = *(u16 *)(q + 0x20) | 1;
    bVar2 = func_020c5fbc(param_1);
    return (u32)bVar2;
LAB_one:
    uVar5 = 0x1000;
    func_020bd868(param_1);
    q = *(u8 **)(param_1 + 0x18c);
    *(u16 *)(q + 0x20) = *(u16 *)(q + 0x20) & ~1;
    uVar3 = func_020f3af8();
    *(u32 *)(param_1 + 0xbc) = uVar3;
    *(u32 *)(param_1 + 0xc0) = data_0213331c[*(s16 *)(param_1 + 0x94) - 0x72] + 0xfffffe66;
    iVar4 = func_01ffdb08(*(s16 *)(data_02159458 + 2));
    if (iVar4 != 0) {
        uVar5 = func_02028124(iVar4);
    }
    v = (s64)(s32)uVar5 * (s64)0x6800 + 0x800;
    *(u32 *)(param_1 + 0xc4) = -(s32)(u32)(v >> 12);
    return -(s32)(u32)(v >> 12);
}
