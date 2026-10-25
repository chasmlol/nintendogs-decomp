#include "ctx.h"

#define FX_MUL(a, b) ((s32)((((s64)(s32)(a)) * (b) + 0x800) >> 12))

extern s32 func_02028124(u32 a);
extern void func_02024f18(int a, int b, s32 c);
extern int func_0203567c(int a);
extern int func_02036510(int a);
extern void func_02027654(int a, u32 *b);
extern int func_0203541c(int a);
extern void func_0203e8cc(int a, int b, int c);
extern int func_ov003_02198298(int a);
extern void func_020397fc(int a);

void func_0200f5b8(int param_1)
{
    s32 uVar1;
    int iVar2;
    int iVar3;
    s16 t;

    uVar1 = func_02028124(param_1);
    func_02024f18(param_1, 1, FX_MUL(uVar1, 0x1eb));
    iVar2 = func_0203567c(param_1);
    iVar3 = func_02036510(param_1);
    if (iVar3 != 0) {
        func_02027654(iVar3, (u32 *)(param_1 + 0x3b4));
    }
    iVar3 = func_0203541c(param_1);
    if (iVar3 == 0) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    t = *(s16 *)(iVar3 + 0x90);
    if (t == 4) {
        goto c4;
    }
    if (t != 7) {
        goto dflt;
    }
    goto c7;
c4:
    if ((*(s8 *)(param_1 + 0x8b) != 5) && (*(s8 *)(param_1 + 0x8b) != 4)) {
        *(u32 *)(param_1 + 0x948) = 1;
    }
    goto dflt;
c7:
    if ((*(s8 *)(param_1 + 0x8b) != 5) && (*(s8 *)(param_1 + 0x8b) != 4)) {
        *(u32 *)(param_1 + 0x948) = 8;
    }
dflt:
    iVar3 = func_ov003_02198298(param_1);
    goto join;
zero:
    iVar3 = 0;
join:
    if (iVar3 != 0) {
        return;
    }
    if (iVar2 == 0) {
        return;
    }
    func_020397fc(param_1);
}
