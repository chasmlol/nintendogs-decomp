#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_020207cc(u8 *p);
extern void func_020264f4(u8 *p);
extern u8 func_020255a4(u8 *p);

typedef struct { u8 pad[0x152]; u16 s0; } Obj;

u8 func_ov005_02164f64(u8 *p)
{
    u32 r;
    ((Obj *)p)->s0 = 1;
    r = func_020207cc(p);
    *(u8 *)(p + 143) = r;
    *(u8 *)(p + 151) = 1;
    func_020264f4(p);
    return func_020255a4(p);
}
