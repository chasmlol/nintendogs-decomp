#include "ctx.h"

extern void func_02117d8c(u8 *p);
extern void func_02112798(u32 a, u32 b, u32 c);
extern void func_020fbeb0(u32 a);

void func_02119610(u8 *param_1)
{
    s32 iVar1;

    switch (*(s32 *)(param_1 + 4)) {
    case 0:
        if (*(s32 *)(param_1 + 0x28) == 0) {
            func_02117d8c(param_1 + 8);
        }
        if (*(s32 *)(param_1 + 0x28) >= 35) {
            *(s32 *)(param_1 + 4) = 1;
            *(s32 *)(param_1 + 0x28) = 0;
            func_02112798(2, 1, 0);
        }
        break;
    case 1:
        iVar1 = *(s32 *)(param_1 + 0x28);
        if (iVar1 > 32) {
            *(s32 *)(param_1 + 4) = 2;
            *(s32 *)(param_1 + 0x28) = 0;
            func_02112798(2, 0, 0);
        } else {
            if (iVar1 <= 32) {
                func_020fbeb0((u32)((iVar1 + ((u32)iVar1 >> 31)) * 0x8000) >> 16);
            }
        }
        break;
    case 2:
        if (*(s32 *)(param_1 + 0x28) > 60) {
            *(s32 *)(param_1 + 0x28) = 0;
            *(s32 *)(param_1 + 4) = 3;
        }
        break;
    case 3:
        break;
    }
    *(s32 *)(param_1 + 0x28) = *(s32 *)(param_1 + 0x28) + 1;
}
