#include "ctx.h"
extern s16 data_0213b578[];
u32 func_02035584(u8 *param_1, s32 param_2)
{
    u8 *q = param_1 + param_2 * 2 + 256;
    u8 *e;
    s32 c;
    s32 val;
    s32 h;
    if (*(s16 *)(q + 98) != *(s16 *)(q + 82)) {
        goto zero;
    }
    e = *(u8 **)(param_1 + 0x74) + *(s16 *)((u8 *)data_0213b578 + param_2 * 4) * 36;
    if (e == NULL) {
        goto zero;
    }
    c = *(s8 *)(param_1 + param_2 + 0xbe);
    if (c <= 0) {
        goto nonpos;
    }
    h = *(s16 *)(e + 0x18);
    val = *(s32 *)(e + 0x20) >> 12;
    h = h - 1;
    if (val < h) {
        goto zero;
    }
    return 1;
nonpos:
    val = *(s32 *)(e + 0x20) >> 12;
    if (val <= 1) {
        return 1;
    }
zero:
    return 0;
}
