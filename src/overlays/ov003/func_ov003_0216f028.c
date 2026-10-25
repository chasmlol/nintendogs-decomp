#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_02035164(u8 *p);
extern void func_02025dd4(u8 *p);
extern u8 func_02025548(u8 *p);

u8 func_ov003_0216f028(u8 *p)
{
    u32 uVar2;

    *(u16 *)(p + 256 + 82) = 0x162;
    uVar2 = func_02035164(p);
    *(u16 *)(p + 256 + 88) = uVar2;
    p[147] = 5;
    p[151] = 2;
    func_02025dd4(p);
    return func_02025548(p);
}
