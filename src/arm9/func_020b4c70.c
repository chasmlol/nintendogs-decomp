#include "ctx.h"

extern s32 func_020ad77c(u8 *p);
extern void func_020ab630(u8 *p);
extern u8 *data_02159424;
extern u32 *data_02159444;
extern u8 *data_02159060;
extern void func_020ad7c8(u8 *p, s32 a);
extern void func_020ad6fc(u8 *p, s32 a);
extern void func_020b4de4(u8 *p);
extern s32 func_020ad690(u8 *p);
extern void func_020ad8f0(u8 *p);

void func_020b4c70(u8 *param_1)
{
    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        if (func_020ad77c(param_1) == 0) {
            return;
        }
        func_020ab630(param_1);
        if (*(s16 *)data_02159424 == 0) {
            *(s16 *)(param_1 + 0x2a) = 1;
        } else {
            *(s16 *)(param_1 + 0x2a) = 0;
        }
        return;
    case 1:
        if (*(s16 *)(param_1 + 0x2a) == 0) {
            goto zero;
        }
        if (*(s16 *)(param_1 + 0x2a) == 1) {
            goto one;
        }
        return;
    zero:
        if (*(s32 *)(param_1 + 0x134) == -3) {
            func_020ad7c8(param_1, 10);
            func_020ad6fc(param_1, 0);
            data_02159444[8] = data_02159444[8] & ~1u;
            data_02159444[8] = data_02159444[8] & ~2u;
            return;
        }
        func_020b4de4(param_1);
        return;
    one:
        if (*(u32 *)(data_02159060 + 0xa4) == 0) {
            return;
        }
        *(s16 *)(param_1 + 0x2a) = 0;
        if (*(s32 *)(param_1 + 0x134) == -2) {
            *(s32 *)(param_1 + 0x134) = 0x8ca0;
        }
        data_02159444[8] = data_02159444[8] | 1;
        data_02159444[8] = data_02159444[8] | 2;
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
