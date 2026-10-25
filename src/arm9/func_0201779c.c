#include "ctx.h"

#define FXM(a, b) ((u32)((((s64)(s32)(a) * (s64)(s32)(b)) + 0x800) >> 12))

typedef void (*FP)(u8 *);

extern s32 data_0213b424;
extern u32 func_02028124(u8 *p);
extern s32 func_02024d40(u8 *p, s32 a, s32 b, u32 c);
extern s32 func_02026fe0(u8 *p);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, s32 v);
extern s32 func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 v);

void func_0201779c(u8 *param_1)
{
    s32 iVar2;
    u32 uVar1;
    s16 sv;

    uVar1 = func_02028124(param_1);
    iVar2 = func_02024d40(param_1, 11, 36, FXM(uVar1, 163));
    if (iVar2 == 0) {
        uVar1 = func_02028124(param_1);
        func_02024d40(param_1, 46, 80, FXM(uVar1, 94));
    }
    iVar2 = func_02026fe0(param_1);
    if (iVar2 != 0) {
        (*(FP *)((u8 *)&data_0213b424 + 4))(param_1);
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    iVar2 = func_0203541c(param_1);
    if (iVar2 == 0) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    sv = *(s16 *)(iVar2 + 0x90);
    if (sv == 4) {
        goto b4;
    }
    if (sv != 7) {
        goto a8;
    }
    goto b7;
b4:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(s32 *)(param_1 + 0x948) = 1;
    }
    goto a8;
b7:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(s32 *)(param_1 + 0x948) = 8;
    }
a8:
    iVar2 = func_ov003_02198298(param_1);
    goto join;
zero:
    iVar2 = 0;
join:
    if (iVar2 != 0) {
        return;
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 == 0) {
        return;
    }
    func_0203e908(param_1, 0);
}
