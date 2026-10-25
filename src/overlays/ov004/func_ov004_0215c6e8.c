#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_ov004_02170320;
extern void func_020f3b54(void);

void func_ov004_0215c6e8(void)
{
    u8 *y;
    s32 s;
    s32 k;
    y = *(u8 **)((u8 *)data_ov004_02170320 + 0x36c4);
    s = *(s8 *)(y + 0x2274);
    if (s >= 0) {
        *(y + s + 0x2270) = 0;
        y = *(u8 **)((u8 *)data_ov004_02170320 + 0x36c4);
        *(s8 *)(y + 0x2274) = -1;
    } else {
        k = *(s8 *)(y + 0x2295);
        if (k >= 0) {
            *(y + k + 0x2285) = 0;
            {
                u8 *z = *(u8 **)((u8 *)data_ov004_02170320 + 0x36c4);
                s32 k2 = *(s8 *)(z + 0x2295);
                *(z + k2 + 0x228d) = 1;
            }
            y = *(u8 **)((u8 *)data_ov004_02170320 + 0x36c4);
            *(s8 *)(y + 0x2295) = -1;
            *(s32 *)((u8 *)data_ov004_02170320 + 0x33ac) = -1;
        }
    }
    y = *(u8 **)((u8 *)data_ov004_02170320 + 0x36c4);
    *(y + 0x2315) = 0;
    func_020f3b54();
}
