#include "ctx.h"

extern s32 data_0215600c;
extern u8 data_02156010[];

void func_02080e30(void)
{
    s32 i = 0;
    data_0215600c = 0;
    do {
        s32 idx = i;
        i = i + 1;
        *(u16 *)(data_02156010 + idx * 2) = 0;
    } while (i < 9);
}
