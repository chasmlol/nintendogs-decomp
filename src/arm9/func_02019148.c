#include "ctx.h"

extern u32 data_0213b424;
extern int func_02026fe0(u32 a);
extern void func_0201d1f0(u32 a);
extern void func_02035c98(u32 a, int b);
extern int func_0203541c(u32 a);
extern void func_0203e8cc(u32 a, int b, int c);
extern int func_ov003_02198298(u32 a);
extern int func_0203567c(u32 a);
extern void func_0203e908(u32 a, int b);

void func_02019148(u32 param_1)
{
    int iVar1;

    iVar1 = func_02026fe0(param_1);
    if (iVar1 != 0) {
        ((void (*)(u32))(*(int *)((u8 *)&data_0213b424 + 4)))(param_1);
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    iVar1 = func_0203541c(param_1);
    if (iVar1 != 0) {
        func_0203e8cc(param_1, 2, 1);
        if (*(s16 *)(iVar1 + 0x90) == 4) {
            goto case4;
        }
        if (*(s16 *)(iVar1 + 0x90) != 7) {
            goto done;
        }
        goto case7;
    case4:
        if ((*(s8 *)(param_1 + 0x8b) != 5) && (*(s8 *)(param_1 + 0x8b) != 4)) {
            *(u32 *)(param_1 + 0x948) = 1;
        }
        goto done;
    case7:
        if ((*(s8 *)(param_1 + 0x8b) != 5) && (*(s8 *)(param_1 + 0x8b) != 4)) {
            *(u32 *)(param_1 + 0x948) = 8;
        }
    done:
        iVar1 = func_ov003_02198298(param_1);
    } else {
        iVar1 = 0;
    }
    if (iVar1 != 0) {
        return;
    }
    if (func_0203567c(param_1) == 0) {
        return;
    }
    func_0203e908(param_1, 3);
}
