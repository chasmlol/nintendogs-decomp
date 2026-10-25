#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_ov004_02170320;
extern void func_020a0e04(s32 a);

void func_ov004_0215c130(void)
{
    u8 *A;
    u8 *a;
    s32 s;

    A = *(u8 **)(data_ov004_02170320 + 0x36c4);
    s = *(s8 *)(A + 0x2295);
    if (s >= 0) {
        a = A + s + 0x2000;
        *(a + 0x28d) = 2;
    }
    A = *(u8 **)(data_ov004_02170320 + 0x36c4);
    *(A + 0x2000 + 0x314) = *(s8 *)(A + 0x2314) - 3;
    func_020a0e04(10);
}
