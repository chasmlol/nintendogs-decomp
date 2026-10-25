#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_020207cc(u8 *p);
extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, u32 v);

typedef struct { u8 pad[0x152]; u16 s0; } Obj;

void func_ov003_0216b260(u8 *p)
{
    ((Obj *)p)->s0 = 26;
    *(u8 *)(p + 147) = 14;
    *(u8 *)(p + 144) = func_020207cc(p);
    *(u8 *)(p + 151) = 1;
    func_020264f4(p);
    func_020255a4(p);
    func_0202db24(p, 1);
}
