#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 data_0213b424[];
extern s32 func_02028124(u8 *p);
extern void func_02024d40(u8 *p, u32 a, u32 b, s32 c);
extern s32 func_02026fe0(u8 *p);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, u32 a);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 a);

void func_0201c17c(u8 *param_1)
{
    s32 uVar1;
    s32 iVar1;
    u8 *r6;

    uVar1 = func_02028124(param_1);
    func_02024d40(param_1, 30, 49, -FX_Mul(uVar1, 258));
    iVar1 = func_02026fe0(param_1);
    if (iVar1 != 0) {
        ((void (*)(u8 *))(*(u32 *)(data_0213b424 + 0xc)))(param_1);
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    r6 = func_0203541c(param_1);
    if (r6 == NULL) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    switch (*(s16 *)(r6 + 0x90)) {
    case 4:
        if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
            *(u32 *)(param_1 + 0x948) = 1;
        }
        break;
    case 7:
        if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
            *(u32 *)(param_1 + 0x948) = 8;
        }
        break;
    }
    iVar1 = func_ov003_02198298(param_1);
    goto test;
zero:
    iVar1 = 0;
test:
    if (iVar1 != 0) {
        return;
    }
    if (func_0203567c(param_1) != 0) {
        func_0203e908(param_1, 8);
    }
}
