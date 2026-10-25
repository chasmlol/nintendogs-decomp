#include "ctx.h"

extern s32 func_ov019_0215cca8(int a);
extern void func_ov019_0215ca88(int a, int b);
extern s32 func_ov019_0215caa0(int a);
extern void func_ov019_0215cad4(int a, s32 *b);
extern void func_ov019_0215cab0(int a, s32 *b);
extern void func_ov019_0215cb10(int a, s32 *b);
extern s32 func_ov019_0215cb28(int a);
extern s32 func_ov019_0215cb74(int a);
extern void func_02067e34(int a, s32 *b, s32 *c);
extern void func_01ff89d0(s32 *a);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);

void func_ov019_02160638(int param_1)
{
    s32 st[18];
    int iVar1;
    s32 uVar3;
    s32 uVar4;

    iVar1 = func_ov019_0215cca8(*(s16 *)(param_1 + 0x2c));
    if (iVar1 == 0) {
        return;
    }
    func_ov019_0215ca88(iVar1, param_1 + 0x3c);
    if (func_ov019_0215caa0(iVar1) != 0) {
        goto pathB;
    }
    func_ov019_0215cad4(iVar1, &st[0]);
    st[3] = 0;
    st[4] = 0x1000;
    st[5] = 0;
    func_ov019_0215cb10(iVar1, &st[6]);
    func_02067e34(param_1 + 0x3c, &st[6], &st[6]);
    func_01ff89d0(&st[6]);
    *(s32 *)(param_1 + 0x30) = 0;
    *(s32 *)(param_1 + 0x34) = 0;
    *(s32 *)(param_1 + 0x38) = 0;
    uVar3 = func_ov019_0215cb28(iVar1);
    uVar4 = func_ov019_0215cb74(iVar1);
    func_01ff832c(uVar4 * 46, &st[0], (s32 *)(param_1 + 48), (s32 *)(param_1 + 48));
    func_01ff832c(uVar3 * 224, &st[3], (s32 *)(param_1 + 48), (s32 *)(param_1 + 48));
    if (uVar3 < 0) {
        uVar3 = -uVar3;
    }
    func_01ff832c(uVar3 * 46, &st[6], (s32 *)(param_1 + 48), (s32 *)(param_1 + 48));
    {
        s32 cl = *(s32 *)(param_1 + 0x34);
        if (cl > 3200) {
            *(s32 *)((u32)param_1 + 0x34) = 3200;
        } else if (cl < -3200) {
            *(s32 *)((u32)param_1 + 0x34) = -3200;
        }
    }
    *(s16 *)(param_1 + 0x1e) = 1;
    return;
pathB:
    uVar3 = func_ov019_0215cb28(iVar1);
    if (uVar3 >= -10) {
        return;
    }
    func_ov019_0215cad4(iVar1, &st[9]);
    func_ov019_0215cab0(iVar1, &st[12]);
    func_ov019_0215cb10(iVar1, &st[15]);
    func_02067e34(param_1 + 0x3c, &st[15], &st[15]);
    func_01ff89d0(&st[15]);
    *(s32 *)(param_1 + 0x30) = 0;
    *(s32 *)(param_1 + 0x34) = 0;
    *(s32 *)(param_1 + 0x38) = 0;
    uVar3 = func_ov019_0215cb74(iVar1);
    func_01ff832c(uVar3 * 48, &st[9], (s32 *)(param_1 + 48), (s32 *)(param_1 + 48));
    func_01ff832c(-3456, &st[12], (s32 *)(param_1 + 48), (s32 *)(param_1 + 48));
    func_01ff832c(-16, &st[15], (s32 *)(param_1 + 48), (s32 *)(param_1 + 48));
    *(s16 *)(param_1 + 0x1e) = 6;
}
