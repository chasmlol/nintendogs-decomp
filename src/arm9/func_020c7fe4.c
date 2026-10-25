#include "ctx.h"

extern s32 func_0206782c(s32 a);
extern s32 func_02067898(s32 a, s32 b);

#define FXM(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

u32 func_020c7fe4(s32 *param_1, u32 param_2, s32 param_3, s32 *param_4, s32 *param_5)
{
    s32 iVar4;
    s32 iVar5;

    iVar4 = FXM(param_1[0], param_1[0]) + FXM(param_1[2], param_1[2]);
    if (iVar4 > FXM(param_3, param_3)) {
        iVar4 = func_0206782c(iVar4);
        iVar4 = func_02067898(param_3 - iVar4, iVar4);
        iVar5 = param_1[0];
        if (iVar5 >= 0) {
            if (param_5[0] <= 0) {
                param_4[0] += FXM(iVar5, iVar4);
            }
        } else if (param_5[0] >= 0) {
            param_4[0] += FXM(iVar5, iVar4);
        }
        iVar5 = param_1[2];
        if (iVar5 >= 0) {
            if (param_5[2] <= 0) {
                param_4[2] += FXM(iVar5, iVar4);
            }
        } else if (param_5[2] >= 0) {
            param_4[2] += FXM(iVar5, iVar4);
        }
        return 1;
    }
    return 0;
}
