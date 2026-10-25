#pragma avoid_byte strb
#include "ctx.h"
extern u8 *data_ov004_02170320;
extern void func_020f3b54(void);
void func_ov004_0215c2b4(void)
{
    (*(u8 **)(data_ov004_02170320 + 0x36c4))[0x2315] = 0;
    func_020f3b54();
}
