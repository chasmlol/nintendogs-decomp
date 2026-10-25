#include "ctx.h"
extern u8 data_0214e77c[];
extern void func_02005c94(void);
void func_02003d90(u16 v)
{
    u8 *g = data_0214e77c;
    *(u16 *)(g + 0) = 0;
    *(u16 *)(g + 4) = 1;
    *(u16 *)(g + 8) = 0;
    *(u16 *)(g + 10) = v;
    *(u32 *)(g + 0x10) = (u32)func_02005c94;
    *(u16 *)(g + 14) = 0;
}
