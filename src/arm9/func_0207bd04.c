#include "ctx.h"
extern u8 data_0213e750[];
extern void func_020776d4(u32 a, u32 *b, s32 c);

static inline u32 FXM(u32 p, u32 v)
{
    s64 r = (s64)(s32)p * (s64)(s32)v;
    return (u32)(r >> 12);
}

void func_0207bd04(u32 *param_1)
{
    u32 a[20];

    if ((param_1[0] & 8) != 0) {
        a[0] = 0x00101610;
    } else {
        a[0] = 0x00101810;
    }
    a[1] = 3;
    a[18] = 2;
    a[17] = 0x1000;
    a[16] = 0;
    a[13] = 0;
    a[12] = 0;
    a[11] = 0;
    a[10] = 0;
    a[9] = 0;
    a[8] = 0;
    a[5] = 0;
    a[4] = 0;
    if ((param_1[0] & 1) != 0) {
        param_1[7] = 0x1000;
        param_1[6] = param_1[7];
    }
    if ((param_1[0] & 2) != 0) {
        *(u16 *)((u8 *)param_1 + 0x22) = 0x1000;
        *(u16 *)(param_1 + 8) = 0;
    }
    if ((param_1[0] & 4) != 0) {
        param_1[10] = 0;
        param_1[9] = param_1[10];
    }
    ((void (**)(u32 *, u32 *))data_0213e750)[param_1[0] & 7](&a[2], param_1);
    if (param_1[12] != 0x1000) {
        a[2] = FXM(param_1[12], a[2]);
        a[3] = FXM(param_1[12], a[3]);
        a[14] = FXM(param_1[12], a[14]);
    }
    if (param_1[13] != 0x1000) {
        a[6] = FXM(param_1[13], a[6]);
        a[7] = FXM(param_1[13], a[7]);
        a[15] = FXM(param_1[13], a[15]);
    }
    func_020776d4(a[0], (u32 *)((u32)a + 4), 18);
}
