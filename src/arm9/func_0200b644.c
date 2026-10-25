#include "ctx.h"

extern s32 func_02067898(s32 a, s32 b);

typedef struct Three {
    s32 w[3];
} Three;

#define FXM(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_0200b644(s32 *param_1, s32 *param_2, s32 *param_3, s32 *param_4, s32 *param_5)
{
    s32 uVar11;
    s32 uVar12;
    s32 uVar5;
    s32 iVar4;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 uVar9;
    s32 uVar8;
    s32 uVar7;
    s32 q0;

    uVar11 = param_5[0];
    uVar12 = param_5[1];
    uVar5 = param_5[2];
    t1 = FXM(uVar11, param_3[0] - param_2[0]);
    t2 = FXM(uVar12, param_3[1] - param_2[1]);
    t3 = FXM(uVar5, param_3[2] - param_2[2]);
    iVar4 = t3 + (t1 + t2);
    if (iVar4 == 0) {
        *(Three *)param_1 = *(Three *)param_4;
        return;
    }
    uVar9 = FXM(uVar5, param_4[2] - param_2[2]);
    uVar8 = FXM(uVar11, param_4[0] - param_2[0]);
    uVar7 = FXM(uVar12, param_4[1] - param_2[1]);
    if (iVar4 == 0) {
        iVar4 = uVar9 + (uVar8 + uVar7);
    } else {
        iVar4 = func_02067898(uVar9 + (uVar8 + uVar7), iVar4);
    }
    q0 = param_2[0];
    {
        s32 d = param_3[0] - q0;
        param_1[0] = q0 + FXM(d, iVar4);
    }
    q0 = param_2[1];
    {
        s32 d = param_3[1] - q0;
        param_1[1] = q0 + FXM(d, iVar4);
    }
    q0 = param_2[2];
    {
        s32 d = param_3[2] - q0;
        param_1[2] = q0 + FXM(d, iVar4);
    }
}
