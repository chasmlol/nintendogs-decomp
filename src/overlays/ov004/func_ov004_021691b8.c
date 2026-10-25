#include "ctx.h"

extern void func_020399ac(void);
extern int func_ov004_0216e568(void);
extern void func_ov004_0216c504(int);
extern void func_ov004_021692e4(int, int);
extern s32 func_02028124(int);

void func_ov004_021691b8(int param_1)
{
    int iVar1;
    s32 uVar2;

    func_020399ac();
    iVar1 = func_ov004_0216e568();
    if (iVar1 == 0) {
        *(u32 *)(param_1 + 0x464) = 1;
    }
    if (*(s32 *)(param_1 + 0x464) == 0) {
        func_ov004_0216c504(param_1);
    } else {
        uVar2 = func_02028124(param_1);
        *(u32 *)(param_1 + 0x484) = (u32)(((s64)uVar2 * 448 + 0x800) >> 12);
    }
    func_ov004_021692e4(param_1, 1);
}
