#include "ctx.h"

extern u8 *data_02159444;

void func_020b9b18(u16 v)
{
    *(u16 *)(data_02159444 + 0x124) = v;
}
