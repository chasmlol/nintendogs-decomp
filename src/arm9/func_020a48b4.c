#include "ctx.h"

extern u8 *data_02159424;

short *func_020a48b4(s32 param_1, s32 param_2)
{
    short *ret = 0;
    s32 cnt;
    s32 last;
    s32 run;
    short *ent;
    s32 id;
    run = 0;
    ent = (short *)(*(s32 *)(data_02159424 + 0x34) + 0x18);
    cnt = 0;
    last = -1;
    for (;;) {
        id = ent[0];
        if (id != 0) {
            if (last != id) {
                run = 0;
                last = id;
            } else {
                run = (s16)(run + 1);
            }
            if (id == param_1 && param_2 == run) {
                ret = ent;
                break;
            }
        }
        cnt = (s16)(cnt + 1);
        ent += 5;
        if (cnt >= 4) {
            break;
        }
    }
    return ret;
}
