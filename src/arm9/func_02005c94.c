#include "ctx.h"

extern s32 func_0205e270(s32 a, s32 b);

void func_02005c94(u8 *param_1)
{
    switch (*(u16 *)(param_1 + 4)) {
    case 0:
        break;
    case 1:
        *(s16 *)(param_1 + 8) = *(s16 *)(param_1 + 8) + 1;
        if (*(s16 *)(param_1 + 8) < *(s16 *)(param_1 + 10)) {
            *(s16 *)(param_1 + 0x18) = 16 - func_0205e270(*(s16 *)(param_1 + 8) << 4, *(s16 *)(param_1 + 10));
        } else {
            *(u16 *)(param_1 + 4) = 2;
            *(u16 *)(param_1 + 0x18) = 0;
        }
        if (*(u16 *)(param_1 + 6) == 0) {
            *(s16 *)(param_1 + 0x18) = -*(s16 *)(param_1 + 0x18);
        }
        break;
    case 2:
        *(u16 *)(param_1 + 0x18) = 0;
        break;
    case 3:
        *(s16 *)(param_1 + 8) = *(s16 *)(param_1 + 8) + 1;
        if (*(s16 *)(param_1 + 8) < *(s16 *)(param_1 + 10)) {
            *(s16 *)(param_1 + 0x18) = func_0205e270(*(s16 *)(param_1 + 8) << 4, *(s16 *)(param_1 + 10));
        } else {
            *(u16 *)(param_1 + 4) = 0;
            *(u16 *)(param_1 + 0x18) = 16;
        }
        if (*(u16 *)(param_1 + 6) == 0) {
            *(s16 *)(param_1 + 0x18) = -*(s16 *)(param_1 + 0x18);
        }
        break;
    }
}
