#include "ctx.h"
extern u8 *data_02159034;
void func_02095a0c(void)
{
    u8 *p = data_02159034;
    *(u32 *)p = 1;
    p = data_02159034;
    *(u16 *)(p + 4) = 0;
    *(u16 *)(p + 6) = 0;
    *(u16 *)(p + 8) = 0;
}
