#include "ctx.h"

extern u32 data_0214e684;
extern u32 data_0214e69c;

void func_0200117c(u16 *param_1, u16 *param_2)
{
    u32 *puVar3;
    u32 x;
    s64 a1;
    s64 p1;
    s64 a2;
    s64 p2;

    if (*(u16 *)((u8 *)&data_0214e684 + 0x30) == 0) {
        u16 t0;
        u16 t1;
        u16 t2;
        u16 t3;
        t0 = ((vu16 *)param_2)[0];
        t1 = ((vu16 *)param_2)[1];
        param_1[0] = t0;
        param_1[1] = t1;
        t2 = ((vu16 *)param_2)[2];
        t3 = ((vu16 *)param_2)[3];
        param_1[2] = t2;
        param_1[3] = t3;
        return;
    }
    puVar3 = (u32 *)&data_0214e69c;
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    if (param_2[2] == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return;
    }
    x = param_2[0];
    a1 = (s64)(s32)(x * 4) - (s64)(s32)puVar3[0];
    p1 = (s64)(s32)puVar3[2] * a1;
    param_1[0] = (u16)(p1 >> 22);
    if ((s16)param_1[0] < 0) {
        param_1[0] = 0;
    } else if ((s16)param_1[0] > 0xff) {
        param_1[0] = 0xff;
    }
    x = param_2[1];
    a2 = (s64)(s32)(x * 4) - (s64)(s32)puVar3[3];
    p2 = (s64)(s32)puVar3[5] * a2;
    param_1[1] = (u16)(p2 >> 22);
    if ((s16)param_1[1] < 0) {
        param_1[1] = 0;
        return;
    }
    if ((s16)param_1[1] > 0xbf) {
        param_1[1] = 0xbf;
    }
}
