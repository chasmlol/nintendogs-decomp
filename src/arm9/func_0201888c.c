#include "ctx.h"

extern u8 data_0213b424[];
extern u32 func_02028124(int a);
extern void func_02024e40(int a, int b, u32 c);
extern s32 func_02026fe0(int a);
extern void func_0201d1f0(int a);
extern void func_02035c98(int a, int b);
extern int func_0203541c(int a);
extern void func_0203e8cc(int a, int b, int c);
extern int func_ov003_02198298(int a);
extern s32 func_0203567c(int a);
extern void func_0203e908(int a, int b);

void func_0201888c(int param_1)
{
    u32 uVar1;
    int iVar2;

    uVar1 = func_02028124(param_1);
    func_02024e40(param_1, 106, -(u32)((((s64)(s32)uVar1) * 34 + 0x800) >> 12));
    iVar2 = func_02026fe0(param_1);
    if (iVar2 != 0) {
        (*(void (**)(int))(data_0213b424 + 0x8))(param_1);
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    iVar2 = func_0203541c(param_1);
    if (iVar2 != 0) {
        func_0203e8cc(param_1, 2, 1);
        switch (*(s16 *)(iVar2 + 0x90)) {
        case 4:
            if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
                *(s32 *)(param_1 + 0x948) = 1;
            }
            break;
        case 7:
            if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
                *(s32 *)(param_1 + 0x948) = 8;
            }
            break;
        }
        iVar2 = func_ov003_02198298(param_1);
    } else {
        iVar2 = 0;
    }
    if (iVar2 != 0) {
        return;
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 == 0) {
        return;
    }
    func_0203e908(param_1, 7);
}
