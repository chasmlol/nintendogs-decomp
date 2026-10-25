#include "ctx.h"

extern u8 data_02159324[];
extern u8 data_02159148[];
extern s32 func_02027060(u32 p);

u32 func_020a27e4(u32 param_1)
{
    u8 *g = data_02159324;
    if (*(u32 *)(g + 0x94) != 0) {
        if (*(u32 *)(g + 0x98) != 0) {
            if (func_02027060(param_1) != 0) {
                if (*(s16 *)(data_02159148 + 6) == 79) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
