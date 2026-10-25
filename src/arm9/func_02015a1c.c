#include "ctx.h"

extern u8 data_0213b424[];
extern s32 func_02026fe0(u8 *p);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, s32 v);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 v);

void func_02015a1c(u8 *param_1)
{
    s32 iVar1;
    u8 *q;

    iVar1 = func_02026fe0(param_1);
    if (iVar1 != 0) {
        ((void (*)(u8 *))(*(s32 *)(data_0213b424 + 4)))(param_1);
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    q = func_0203541c(param_1);
    if (q != NULL) {
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
        iVar1 = func_ov003_02198298(param_1);
    } else {
        iVar1 = 0;
    }
    if (iVar1 != 0) {
        return;
    }
    {
    }
    iVar1 = func_0203567c(param_1);
    if (iVar1 == 0) {
        return;
    }
    func_0203e908(param_1, 2);
}
