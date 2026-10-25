#include "ctx.h"

extern s32 func_020ad77c(u8 *p);
extern void func_ov004_0215c0a0(void);
extern s32 func_020b8cd4(u8 *p);
extern s32 func_020b496c(u8 *p);
extern s32 func_ov004_0215c6d0(void);
extern void func_020ae374(u8 *p);
extern s32 func_020ad690(u8 *p);
extern void func_020ad8f0(u8 *p);
extern u32 *data_02159444;

void func_020b4848(u8 *param_1)
{
    s32 v;
    s32 s;

    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        if (func_020ad77c(param_1) == 0) {
            return;
        }
        func_ov004_0215c0a0();
        data_02159444[8] = data_02159444[8] | 1;
        data_02159444[8] = data_02159444[8] | 2;
        return;
    case 1:
        if (func_020b8cd4(param_1) != 0) {
            return;
        }
        if (func_020b496c(param_1) != 0) {
            return;
        }
        s = *(s16 *)(param_1 + 0x2a);
        if (s == 0) {
            goto zero;
        }
        if (s == 1) {
            goto one;
        }
        return;
    zero:
        v = (s16)func_ov004_0215c6d0();
        if (v == -1) {
            return;
        }
        *(s16 *)(param_1 + 0x2a) = 1;
        *(s16 *)(param_1 + 0x7c) = (s16)v;
        func_020ae374(param_1);
        return;
    one:
        if (*(s16 *)(param_1 + 0x7c) == -1) {
            *(s16 *)(param_1 + 0x2a) = 0;
        }
        return;
    case 2:
    case 3:
        break;
    case 4:
        if (func_020ad690(param_1) == 0) {
            return;
        }
        func_020ad8f0(param_1);
        return;
    }
}
