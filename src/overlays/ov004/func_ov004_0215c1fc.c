#pragma avoid_byte strb
#include "ctx.h"
extern u8 *data_ov004_02170320;
void func_ov004_0215c1fc(void)
{
    u8 *h;
    h = *(u8 **)(data_ov004_02170320 + 0x3000 + 0x6c4);
    (h + 0x2000)[0x318] = *(s8 *)(h + 0x2300 + 0x18) + 1;
    h = *(u8 **)(data_ov004_02170320 + 0x3000 + 0x6c4);
    (h + 0x2000)[0x319] = *(s8 *)(h + 0x2300 + 0x19) + 1;
}
