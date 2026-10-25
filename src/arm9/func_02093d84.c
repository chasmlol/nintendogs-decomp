#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_02159034;

void func_02093d84(void)
{
    u8 *b = *(u8 **)(data_02159034 + 0x1000 + 0x41c);
    *(u8 *)(b + 0x88) = 0;
    *(u16 *)(b + 0x6ae) = *(u16 *)(b + 0x6ae) | 1;
}
