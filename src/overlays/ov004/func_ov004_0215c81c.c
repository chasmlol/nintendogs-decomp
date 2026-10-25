#pragma avoid_byte strb
#include "ctx.h"
extern u8 *data_ov004_02170320;
void func_ov004_0215c81c(void)
{
    if (*(s8 *)data_ov004_02170320 == 2)
        data_ov004_02170320[0x36cc] = 2;
}
