#include "ctx.h"

extern s32 func_02087e24(int a, int b, int c);
extern s32 func_02087e90(int a, int b, int c);
extern s32 func_02071f78(int *a, int b, int c, int d, int e);
extern void func_02071750(void);
extern void func_02071744(void);
extern void func_02071738(void);

u32 func_02071acc(int param_1, int *param_2, int param_3)
{
    int iVar1;

    iVar1 = func_02087e24(param_1 + 0x34, 0, 0);
    if (iVar1 == 0) {
        return 0;
    }
    iVar1 = func_02087e90(param_1 + 0x34, param_1, 48);
    if (iVar1 != 48) {
        return 0;
    }
    if (param_2 == 0) {
        goto done;
    }
    if (0) {
        return 1;
    }
    *(s32 *)(param_1 + 0x88) = func_02071f78(param_2, *(s32 *)(param_1 + 0x1c), (int)func_02071750, param_1, 0);
    if (*(s32 *)(param_1 + 0x88) == 0) {
        return 0;
    }
    iVar1 = func_02087e24(param_1 + 0x34, *(s32 *)(param_1 + 0x18), 0);
    if (iVar1 == 0) {
        return 0;
    }
    iVar1 = func_02087e90(param_1 + 0x34, *(s32 *)(param_1 + 0x88), *(s32 *)(param_1 + 0x1c));
    if (iVar1 != *(s32 *)(param_1 + 0x1c)) {
        return 0;
    }
    *(s32 *)(param_1 + 0x80) = func_02071f78(param_2, *(s32 *)(param_1 + 0x24), (int)func_02071744, param_1, 0);
    if (*(s32 *)(param_1 + 0x80) == 0) {
        return 0;
    }
    iVar1 = func_02087e24(param_1 + 0x34, *(s32 *)(param_1 + 0x20), 0);
    if (iVar1 == 0) {
        return 0;
    }
    iVar1 = func_02087e90(param_1 + 0x34, *(s32 *)(param_1 + 0x80), *(s32 *)(param_1 + 0x24));
    if (iVar1 != *(s32 *)(param_1 + 0x24)) {
        return 0;
    }
    if (param_3 == 0) {
        goto done;
    }
    if (*(s32 *)(param_1 + 0x14) == 0) {
        goto done;
    }
    {
        *(s32 *)(param_1 + 0x84) = func_02071f78(param_2, *(s32 *)(param_1 + 0x14), (int)func_02071738, param_1, 0);
        if (*(s32 *)(param_1 + 0x84) == 0) {
            return 0;
        }
        iVar1 = func_02087e24(param_1 + 0x34, *(s32 *)(param_1 + 0x10), 0);
        if (iVar1 == 0) {
            return 0;
        }
        iVar1 = func_02087e90(param_1 + 0x34, *(s32 *)(param_1 + 0x84), *(s32 *)(param_1 + 0x14));
        if (iVar1 != *(s32 *)(param_1 + 0x14)) {
            return 0;
        }
    }
done:
    return 1;
}
