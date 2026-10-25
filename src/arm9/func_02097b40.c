#include "ctx.h"

extern u32 data_02159060;

void func_02097b40(void)
{
    *(u16 *)(*(u32 *)&data_02159060 + 0x6c) = 0;
    *(u16 *)(*(u32 *)&data_02159060 + 0x7a) = 0xffff;
}
