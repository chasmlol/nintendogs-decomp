#include "ctx.h"

void func_0206e58c(u32 *param_1, u32 param_2, u32 param_3)
{
    u8 *e;
    u16 b16;
    u32 bit;
    u8 cv;
    e = (u8 *)param_1 + 468 + param_3 * 104;
    bit = 1u << param_3;
    b16 = (u16)bit;
    *(u16 *)((u8 *)param_1 + 10) = b16;
    cv = *(u8 *)(e + 2);
    if (*(u8 *)((u8 *)param_1 + 12) != cv) {
        return;
    }
    *(u8 *)((u8 *)param_1 + 13) = cv;
    if ((*(u16 *)((u8 *)param_1 + 8) & b16) != 0) {
        *(u16 *)((u8 *)param_1 + 8) = *(u16 *)((u8 *)param_1 + 8) & ~b16;
        switch (param_2) {
        case 0: break;
        case 1: break;
        case 2: break;
        case 3:
            *(u16 *)((u8 *)param_1 + 20) = *(s16 *)(e + 10);
            *(u16 *)((u8 *)param_1 + 22) = *(s16 *)(e + 6);
            *(u16 *)((u8 *)param_1 + 24) = *(s16 *)(e + 4);
            break;
        case 4: break;
        case 5: break;
        case 6: break;
        case 7: break;
        case 8: break;
        case 9: break;
        case 10: break;
        case 11: break;
        default: break;
        }
        param_1[1] = param_2;
        if (param_1[4] != 0) {
            ((void (*)(u32 *))param_1[4])(param_1);
        }
    }
    if (*(u16 *)((u8 *)param_1 + 8) == 0) {
        *(u8 **)param_1 = 0;
    }
}
