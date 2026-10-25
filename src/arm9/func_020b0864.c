#include "ctx.h"

extern u32 data_02142474[];

u32 func_020b0864(u32 a, u32 b, s32 c)
{
    u32 r = 0;
    if (c >= 1 && c <= 3) {
        s16 idx = (s16)(c - 1);
        u32 *pp = (u32 *)data_02142474[a];
        switch (b) {
        case 0:
            break;
        case 1:
            r = ((u32 *)pp[0])[idx];
            break;
        case 2:
            r = ((u32 *)pp[1])[idx];
            break;
        case 3:
            r = ((u32 *)pp[2])[idx];
            break;
        case 4:
            r = ((u32 *)pp[3])[idx];
            break;
        case 5:
            r = ((u32 *)pp[4])[idx];
        }
    }
    return r;
}
