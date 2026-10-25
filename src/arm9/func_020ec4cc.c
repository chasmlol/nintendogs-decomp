#include "ctx.h"

extern u8 *data_0215be3c;

void func_020ec4cc(s32 param_1)
{
    s32 i;
    u32 *ent;
    u8 *e;

    for (i = 0; i < 3; i++) {
        ent = (u32 *)data_0215be3c + i;
        e = (u8 *)ent[2];
        if (e != 0) {
            if (param_1 == *(s16 *)(e + 140)) {
                *(u16 *)(e + 32) = *(u16 *)(e + 32) & ~1;
            }
        }
    }
}
