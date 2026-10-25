#include "ctx.h"

extern int func_0203579c(u32 p, int a);
extern s32 func_02028124(int p);
extern int func_02035770(u32 p, int a);
extern int func_02035744(u32 p, int a);
extern int func_ov003_02175458(u32 p, int a, int b, int c, int d, int e, int f, int g, int h);
extern int func_0203567c(u32 p);
extern void func_0203e908(u32 p, s16 v);

void func_ov003_02175110(int param_1)
{
    int iVar1;
    s32 uVar2;
    s64 v;

    iVar1 = func_0203579c(param_1, 3);
    if (iVar1 != 0) {
        uVar2 = func_02028124(param_1);
        v = (s64)uVar2 * (s64)-32 + 0x800;
        *(u32 *)(param_1 + 0x25c) = (u32)(v >> 12);
        *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x25c) * -8;
    }
    iVar1 = func_02035770(param_1, 3);
    if (iVar1 == 0) {
        goto zero;
    }
    iVar1 = func_02035744(param_1, 0x14);
    if (iVar1 != 0) {
        iVar1 = 1;
        goto join;
    }
zero:
    iVar1 = 0;
join:
    iVar1 = func_ov003_02175458(param_1, 0x3b0, 1, 0x200, 0, 0, 0, iVar1, 0);
    if (iVar1 == 0) {
        iVar1 = func_0203567c(param_1);
        if (iVar1 != 0) {
            func_0203e908(param_1, 0x3b2);
            return;
        }
        return;
    }
}
