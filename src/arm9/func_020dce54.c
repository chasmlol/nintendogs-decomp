#include "ctx.h"

extern int func_020dc7b4(int a, u32 *b, int c, int d);
extern int func_020dc2d8(u16 *a, int b, u32 c);
extern void func_020dbe68(u32 a, int b, u32 c, int d);

int func_020dce54(int *param_1, u32 param_2, int param_3, u32 param_4, ...)
{
    int iVar1;
    int iVar2;
    u32 *puVar3;
    u8 *base;

    if ((param_1 == NULL) || ((u32 *)*param_1 == NULL)) {
        return 0;
    }
    if (param_2 >= *(u32 *)*param_1) {
        return 0;
    }
    iVar1 = func_020dc7b4(param_3, &param_4, 0, (int)*(s16 *)((u8 *)&param_4 + 4));
    if (iVar1 >= 0) {
        base = (u8 *)(*param_1 + 0x94);
        puVar3 = (u32 *)(base + param_2 * 0x18);
        iVar2 = func_020dc2d8((u16 *)puVar3[5], param_3, param_4);
        if (iVar2 == 1) {
            func_020dbe68(puVar3[5], param_3, param_4, (int)*(s16 *)((u8 *)&param_4 + 4));
            puVar3[1] = 1;
            *puVar3 = 1;
        } else {
            iVar1 = -4;
        }
    }
    return iVar1;
}
