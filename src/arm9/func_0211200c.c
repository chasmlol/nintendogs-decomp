#include "ctx.h"

extern u8 *data_0215be48;

void func_0211200c(void)
{
    u8 *p;
    s32 i;
    u32 k;
    k = 0x283c;
    p = data_0215be48;
    p = p + k;
    p = (u8 *)((u32)p + 0x800);
    i = 0;
    do {
        i = i + 1;
        *(u16 *)(p + 4) = 1;
        p = p + 16;
    } while (i < 128);
    p = data_0215be48;
    p = p + k;
    i = 0;
    do {
        i = i + 1;
        *(u16 *)(p + 4) = 1;
        p = p + 16;
    } while (i < 128);
    p = data_0215be48;
    p = p + k;
    p = (u8 *)((u32)p + 0x1800);
    i = 0;
    do {
        i = i + 1;
        *(u16 *)(p + 4) = 1;
        p = p + 16;
    } while (i < 128);
    p = data_0215be48;
    p = p + k;
    p = (u8 *)((u32)p + 0x1000);
    i = 0;
    do {
        i = i + 1;
        *(u16 *)(p + 4) = 2;
        p = p + 16;
    } while (i < 128);
}
