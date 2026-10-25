#include "ctx.h"

extern u8 data_0213b424[];

#define FX(x, k) ((u32)((((s64)(s32)(x)) * ((s64)(s32)(k)) + 0x800) >> 12))

u32 func_02028124(u8 *p);
s32 func_02024d40(u8 *p, u32 a, u32 b, u32 c);
s32 func_02026fe0(u8 *p);
void func_0201d1f0(u8 *p);
void func_02035c98(u8 *p, u32 a);
u8 *func_0203541c(u8 *p);
void func_0203e8cc(u8 *p, u32 a, u32 b);
s32 func_ov003_02198298(u8 *p);
s32 func_0203567c(u8 *p);
void func_0203e908(u8 *p, u32 a);

void func_02019b50(u8 *param_1)
{
    s32 iVar2;
    u32 uVar1;
    u8 *q;

    uVar1 = func_02028124(param_1);
    iVar2 = func_02024d40(param_1, 0x17, 0x25, FX(uVar1, 0x62));
    if (iVar2 == 0) {
        uVar1 = func_02028124(param_1);
        func_02024d40(param_1, 0x25, 0x3c, FX(uVar1, 0x2f));
    }
    if (func_02026fe0(param_1) != 0) {
        ((void (*)(u8 *))(*(u32 *)(data_0213b424 + 8)))(param_1);
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    q = func_0203541c(param_1);
    if (q == 0) goto LAB_zero;
    func_0203e8cc(param_1, 2, 1);
    switch (*(s16 *)(q + 0x90)) {
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
    iVar2 = func_ov003_02198298(param_1);
    goto LAB_join;
LAB_zero:
    iVar2 = 0;
LAB_join:
    if (iVar2 != 0) {
        return;
    }
    if (func_0203567c(param_1) != 0) {
        func_0203e908(param_1, 7);
    }
}
