#include "ctx.h"

extern u8 *data_0215be48;

void func_021120d4(s32 param_1, s32 param_2, s16 *param_3, s16 *param_4)
{
    u8 *ent;
    u8 *g;
    u8 *obj;
    u8 *it;
    s16 A;
    s16 B;
    s16 rx;
    s16 ry;

    g = data_0215be48;
    ent = g + 0x283c + (param_1 << 11);
    ent += param_2 << 4;
    it = g + 0x1dec;
    it = it + param_1 * 660;
    obj = *(u8 **)(it + 8);
    it = obj + 8;
    A = (*(s16 *)(it + (param_2 << 3)) << 20) >> 20;
    it = obj + 8 + (param_2 << 3);
    B = (*(s16 *)(it + 2) << 20) >> 20;
    ry = *(s16 *)(ent + 12) + (*(s16 *)(ent + 8) + B);
    rx = *(s16 *)(ent + 10) + (*(s16 *)(ent + 6) + A);
    *param_3 = rx;
    *param_4 = ry;
}
