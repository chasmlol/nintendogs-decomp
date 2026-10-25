#include "ctx.h"

extern u8 *data_02159428;
extern u32 data_0213b9fc[];
extern u8 data_02136a14[];

void func_02037fa0(u8 *param_1, s32 param_2)
{
    u8 *S;
    s32 idx;
    s32 v;
    s16 sel;
    s32 i;
    s16 e;
    u8 *elem;

    S = *(u8 **)(param_1 + 0x9e8);
    idx = data_0213b9fc[*(u16 *)(data_02159428 + 6)];
    v = *(s32 *)(S + 0xc);
    if (v < 0xccd) {
        sel = 0;
    } else if (v <= 0x119a) {
        sel = 1;
    } else {
        sel = 2;
    }
    elem = data_02136a14 + idx * 36 + sel * 12;
    i = 5;
    do {
        e = *(s16 *)(elem + i * 2);
        if (e >= 0 && e <= param_2) {
            break;
        }
        i = (s16)(i - 1);
    } while (i > 0);
    *(u16 *)(param_1 + 0x148) = (u16)(i + 17);
}
