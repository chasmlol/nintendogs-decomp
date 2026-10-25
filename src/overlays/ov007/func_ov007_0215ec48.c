#include "ctx.h"
extern u32 data_ov007_02160da8[];
extern s32 func_ov007_0215dab4(void);
extern void func_0206f224(u16 *p, u32 a, u32 b);
extern void func_0206f19c(u16 *p, u32 a);
void func_ov007_0215ec48(u32 param_1, u16 *param_2, u32 param_3)
{
    s32 iVar1;
    iVar1 = func_ov007_0215dab4();
    if (iVar1 == 2) {
        if (param_2 != NULL) {
            data_ov007_02160da8[param_1] = 1;
            func_0206f224(param_2, param_3, param_1);
            return;
        }
        data_ov007_02160da8[param_1] = 0;
        return;
    }
    if (iVar1 == 3) {
        if (param_2 != NULL) {
            data_ov007_02160da8[0] = 1;
            func_0206f19c(param_2, param_3);
            return;
        }
        data_ov007_02160da8[0] = 0;
        return;
    }
}
