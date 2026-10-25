#include "ctx.h"
extern u8 *data_0215be3c;
void func_020ec488(s32 param_1)
{
    s32 i = 0;
    do {
        u8 **p = (u8 **)data_0215be3c + i;
        u8 *o = p[2];
        if (o != NULL && param_1 == *(s16 *)(o + 0x8c)) {
            *(u16 *)(o + 0x20) = *(u16 *)(o + 0x20) | 1;
        }
        i = i + 1;
    } while (i < 3);
}
