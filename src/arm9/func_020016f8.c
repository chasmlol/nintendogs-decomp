#include "ctx.h"

extern u8 data_0214e684[];
extern u32 func_02080b08(s16 *p);
extern void func_02080b1c(u32 x);

void func_020016f8(s16 *param_1)
{
    u32 irq;
    if (param_1 == 0) {
        *(u16 *)(data_0214e684 + 0x30) = 0;
        return;
    }
    irq = func_02080b08(param_1);
    if (param_1[2] != 0) {
        s32 *gb;
        vu32 *pd;
        s32 d = param_1[2];
        *(vu16 *)0x04000280 = 0;
        *(vu32 *)0x04000290 = 0x10000000;
        pd = (vu32 *)0x04000298;
        pd[0] = d;
        pd[1] = 0;
        *(s32 *)(data_0214e684 + 0x18) = param_1[0];
        *(s32 *)(data_0214e684 + 0x1c) = param_1[2];
        while ((*(vu16 *)0x04000280 & 0x8000) != 0) {
        }
        gb = (s32 *)data_0214e684;
        gb[8] = *(vu32 *)0x040002a0;
    } else {
        *(s32 *)(data_0214e684 + 0x18) = 0;
        *(s32 *)(data_0214e684 + 0x1c) = 0;
        *(s32 *)(data_0214e684 + 0x20) = 0;
    }
    if (param_1[3] != 0) {
        s32 *gb;
        vu32 *pd;
        s32 d = param_1[3];
        *(vu16 *)0x04000280 = 0;
        *(vu32 *)0x04000290 = 0x10000000;
        pd = (vu32 *)0x04000298;
        pd[0] = d;
        pd[1] = 0;
        *(s32 *)(data_0214e684 + 0x24) = param_1[1];
        *(s32 *)(data_0214e684 + 0x28) = param_1[3];
        while ((*(vu16 *)0x04000280 & 0x8000) != 0) {
        }
        gb = (s32 *)data_0214e684;
        gb[11] = *(vu32 *)0x040002a0;
    } else {
        *(s32 *)(data_0214e684 + 0x24) = 0;
        *(s32 *)(data_0214e684 + 0x28) = 0;
        *(s32 *)(data_0214e684 + 0x2c) = 0;
    }
    func_02080b1c(irq);
    *(u16 *)(data_0214e684 + 0x30) = 1;
}
