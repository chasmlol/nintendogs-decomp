#include "ctx.h"
extern u8 data_0213b424[];
extern int func_02026fe0(u8 *p);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, int a);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, int a, int b);
extern int func_ov003_02198298(u8 *p);
extern int func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, int a);
extern s32 func_02028124(u8 *p);
extern s32 func_02024d40(u8 *p, s32 a, s32 b, u32 c);

#define FX(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_02018fb4(u8 *param_1)
{
    int iVar1;
    u8 *p;
    s16 st;
    s32 uVar1;

    uVar1 = func_02028124(param_1);
    iVar1 = func_02024d40(param_1, 23, 39, (u32)-FX(uVar1, 115));
    if (iVar1 == 0) {
        uVar1 = func_02028124(param_1);
        func_02024d40(param_1, 45, 69, (u32)-FX(uVar1, 122));
    }
    iVar1 = func_02026fe0(param_1);
    if (iVar1 != 0) {
        ((void (*)(u8 *))(*(u32 *)(data_0213b424 + 4)))(param_1);
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    p = func_0203541c(param_1);
    if (p == NULL) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    st = *(s16 *)(p + 0x90);
    if (st == 4) {
        goto c4;
    }
    if (st != 7) {
        goto call;
    }
    goto c7;
c4:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(u32 *)(param_1 + 0x948) = 1;
    }
    goto call;
c7:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(u32 *)(param_1 + 0x948) = 8;
    }
call:
    iVar1 = func_ov003_02198298(param_1);
    goto test;
zero:
    iVar1 = 0;
test:
    if (iVar1 != 0) {
        return;
    }
    iVar1 = func_0203567c(param_1);
    if (iVar1 == 0) {
        return;
    }
    func_0203e908(param_1, 4);
}
