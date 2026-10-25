#include "ctx.h"
extern u32 data_0215be48;
void func_021121a4(void)
{
    s32 j;
    s32 i;
    s32 off;
    u32 zero;
    u8 *p;
    i = 0;
    off = 0;
    zero = 0;
    do {
        p = *(u8 **)&data_0215be48 + 0x283c + off;
        j = 0;
        do {
            *(u16 *)(p + 6) = zero;
            *(u16 *)(p + 8) = zero;
            *(u16 *)(p + 10) = zero;
            *(u16 *)(p + 12) = zero;
            p = p + 16;
            j = j + 1;
        } while (j < 128);
        off = off + 0x800;
        i = i + 1;
    } while (i < 4);
}
