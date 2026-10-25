#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0215ae84;
extern u32 data_0215ae2c;
extern u32 data_0215ae4c;
extern u32 data_0215ae50;
extern u16 data_0215ae1c;
extern u8 data_0215ae10;
extern u32 data_0215ae44;
void func_020dfc94(void);

void func_020df4c0(void)
{
    u32 v;
    u32 one;
    u16 zz;
    u8 old;
    u8 *p;

    v = data_0215ae84;
    one = 1;
    zz = 0;
    data_0215ae2c = v;
    data_0215ae4c = one;
    data_0215ae50 = zz;
    data_0215ae1c = zz;
    p = &data_0215ae10;
    *(u8 *)(p) = (u8)(zz);
    func_020dfc94();
    data_0215ae44 = data_0215ae84;
}
