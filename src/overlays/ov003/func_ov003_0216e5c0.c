#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026aac(u8 *p);
extern u8 func_02025bb0(u8 *p);
extern void func_02034198(u8 *p);

void func_ov003_0216e5c0(u8 *p)
{
    *(u16 *)(p + 256 + 82) = 19;
    p[147] = 5;
    p[152] = 5;
    func_02026aac(p);
    func_02025bb0(p);
    func_02034198(p);
}
