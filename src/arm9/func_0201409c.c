#include "ctx.h"

#define FX_MUL(a, b) ((s32)((((s64)(s32)(a)) * (b) + 0x800) >> 12))

extern int func_0203579c(int a, int b);
extern int func_02027f78(int a, int b);
extern int func_02009408(int a, int b, int c, int *d, int e);
extern u32 func_02028130(int a);
extern void func_0200926c(int a, int b, int c);

void func_0201409c(int param_1, int param_2)
{
    int iVar1;

    if ((*(s16 *)(param_1 + 0x152) == 0x113) &&
        (iVar1 = func_0203579c(param_1, 0x13), iVar1 != 0) &&
        (iVar1 = func_02027f78(param_1, 7), (iVar1 >> 9) < 5) &&
        (iVar1 = func_02009408(param_1, 0x3e, 2, (int *)0, 0), iVar1 != -1)) {
        u32 uVar2;
        uVar2 = func_02028130(param_1);
        *(s32 *)(*(int *)(param_1 + iVar1 * 4 + 0x8fc) + 0x44) = FX_MUL(uVar2, 0xe66);
    }
    if ((param_2 == 0) && (iVar1 = func_0203579c(param_1, 0x45), iVar1 == 0)) {
        return;
    }
    func_0200926c(param_1, 0x3e, 2);
}
