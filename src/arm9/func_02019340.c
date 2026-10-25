#include "ctx.h"

typedef void (*FP)(u32);

extern s32 data_0213b424;
extern s32 func_02026fe0(u32 p);
extern void func_0201d1f0(u32 p);
extern void func_02035c98(u32 p, s32 v);
extern s32 func_0203541c(u32 p);
extern void func_0203e8cc(u32 p, s32 a, s32 b);
extern s32 func_ov003_02198298(u32 p);
extern s32 func_0203567c(u32 p);
extern void func_0203e908(u32 p, s32 v);

void func_02019340(u32 param_1)
{
    s32 iVar1;
    s16 v;

    iVar1 = func_02026fe0(param_1);
    if (iVar1 != 0) {
        (*(FP *)((u8 *)&data_0213b424 + 4))(param_1);
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    iVar1 = func_0203541c(param_1);
    if (iVar1 == 0) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    v = *(s16 *)(iVar1 + 0x90);
    if (v == 4) {
        goto b4;
    }
    if (v != 7) {
        goto a8;
    }
    goto b7;
b4:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(u32 *)(param_1 + 0x948) = 1;
    }
    goto a8;
b7:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(u32 *)(param_1 + 0x948) = 8;
    }
a8:
    iVar1 = func_ov003_02198298(param_1);
    goto join;
zero:
    iVar1 = 0;
join:
    if (iVar1 != 0) {
        return;
    }
    iVar1 = func_0203567c(param_1);
    if (iVar1 == 0) {
        return;
    }
    func_0203e908(param_1, 1);
    return;
}
