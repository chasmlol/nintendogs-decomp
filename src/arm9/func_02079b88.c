#include "ctx.h"

extern u32 data_02152f3c;

void func_02079b88(u32 *param_1)
{
    u8 *a = (u8 *)data_02152f3c;
    u8 *b = *(u8 **)(a + 0xd4);
    u32 off6 = *(u16 *)(b + 6);
    u32 w = *(u16 *)(b + off6);
    u32 c = *(u8 *)(*(u8 **)a + 1);
    u8 *q = (u8 *)(w * c + (u32)(b + off6));
    u32 iz = *(u32 *)(q + 4);
    u8 *e = b + iz;
    u8 *f;
    if ((*(u16 *)e & 1) == 0) {
        param_1[0x13] = *(u32 *)(e + 4);
        f = e + 4;
        param_1[0x14] = *(u32 *)(f + 4);
        param_1[0x15] = *(u32 *)(f + 8);
        return;
    }
    *param_1 = *param_1 | 4;
}
