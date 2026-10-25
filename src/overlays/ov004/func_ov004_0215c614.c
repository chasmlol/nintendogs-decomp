#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_ov004_02170320;
extern void func_020f3b54(void);

void func_ov004_0215c614(void)
{
    s32 i3;
    u8 *q;
    u8 *a;

    q = *(u8 **)(data_ov004_02170320 + 0x36c4);
    i3 = *(s8 *)(q + 0x2295);
    if (i3 >= 0) {
        a = q + i3 + 0x2000;
        *(a + 0x285) = 0;
        q = *(u8 **)(data_ov004_02170320 + 0x36c4);
        a = q + 0x2000;
        *(s8 *)(a + 0x295) = -1;
        *(s32 *)(data_ov004_02170320 + 0x33ac) = -1;
    }
    q = *(u8 **)(data_ov004_02170320 + 0x36c4);
    a = q + 0x2000;
    *(a + 0x315) = 0;
    func_020f3b54();
}
