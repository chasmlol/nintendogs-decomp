#include "ctx.h"

extern u32 data_0215942c;
extern s32 func_01ffdb08(s32 idx);

u32 func_020c8c6c(void)
{
    s16 i = 0;
    s32 off = 0;
    u8 *tbl;
    while (1) {
        if (func_01ffdb08(i) != 0) {
            tbl = *(u8 **)&data_0215942c;
            if (*(u16 *)(tbl + off + 32) & 4) {
                return 1;
            }
        }
        i = i + 1;
        off = off + 20;
        if (i >= 3) {
            return 0;
        }
    }
}
