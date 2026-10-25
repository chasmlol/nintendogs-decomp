#pragma avoid_byte strb
#include "ctx.h"

extern u16 func_0203833c(void);
extern void func_02026bac(u8 *p);
extern u32 func_02025548(u8 *p);

u32 func_ov003_0216e444(u8 *p)
{
    u16 h;
    h = func_0203833c();
    *(u16 *)((u32)((u8 *)p + 256) + 82) = h;
    *(u8 *)(p + 147) = 5;
    func_02026bac(p);
    return func_02025548(p);
}
