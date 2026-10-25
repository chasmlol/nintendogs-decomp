#include "ctx.h"

extern u8 data_0213b424[];

s32 func_02026fe0(u8 *p);
void func_0201d1f0(u8 *p);
void func_02035c98(u8 *p, s32 a);
s32 func_0203541c(u8 *p);
void func_0203e8cc(u8 *p, s32 a, s32 b);
s32 func_ov003_02198298(u8 *p);
s32 func_020356dc(u8 *p, s32 a);
void func_0203e908(u8 *p, s32 v);

void func_020166f0(u8 *param_1)
{
    s32 iVar1;

    iVar1 = func_02026fe0(param_1);
    if (iVar1 != 0) {
        ((void (*)(u8 *))(*(u32 *)(data_0213b424 + 4)))(param_1);
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    iVar1 = func_0203541c(param_1);
    if (iVar1 == 0) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    switch (*(s16 *)((u8 *)iVar1 + 0x90)) {
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
    goto done;
zero:
    iVar1 = 0;
done:
    if (iVar1 != 0) {
        return;
    }
    if (func_020356dc(param_1, 4) == 0) {
        return;
    }
    func_0203e908(param_1, 3);
}
