#include "ctx.h"

extern u8 *func_01ffdb08(s32 which);
extern u32 func_02028130(u8 *p);

void func_02008e10(u8 *param)
{
    u8 *w;
    u32 *src;
    w = func_01ffdb08(1);
    if (w == NULL) {
        return;
    }
    src = (u32 *)(w + 0x324);
    if (param != NULL) {
        *(s32 *)(param + 0x20) = src[0] + (*(u32 **)(*(u32 **)(param + 0x18)))[1];
        *(s32 *)(param + 0x24) = src[1] + (*(u32 **)(*(u32 **)(param + 0x18)))[2];
        *(s32 *)(param + 0x28) = src[2] + (*(u32 **)(*(u32 **)(param + 0x18)))[3];
        *(s32 *)(param + 0x54) = (s32)(s16)func_02028130(w);
    }
}
