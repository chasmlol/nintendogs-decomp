#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026aac(u8 *p);
extern u8 func_02025a84(u8 *p);

typedef struct { u8 pad[0x152]; u16 s0; } Obj;

u8 func_ov003_0216f51c(u8 *p)
{
    ((Obj *)p)->s0 = 334;
    *(u8 *)(p + 147) = 8;
    *(u8 *)(p + 152) = 1;
    *(u8 *)(p + 171) = 1;
    func_02026aac(p);
    return func_02025a84(p);
}
