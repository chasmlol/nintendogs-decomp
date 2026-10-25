#pragma avoid_byte strb
#include "ctx.h"

extern vu32 data_0215ae84;
extern u8 data_0215ae10;
extern u16 data_0215ae28;
extern u32 data_0215ae2c;
extern u32 data_0215ae4c;
extern u32 data_0215ae74;
extern u32 data_0215ae5c;
extern void func_020dfc94(void);

void func_020df440(void)
{
    u32 v;
    u32 one;
    v = data_0215ae84;
    one = 1;
    data_0215ae2c = v;
    data_0215ae4c = one;
    data_0215ae10 = 2;
    data_0215ae28 = 0;
    func_020dfc94();
    data_0215ae74 = 0;
    data_0215ae5c = one;
}
