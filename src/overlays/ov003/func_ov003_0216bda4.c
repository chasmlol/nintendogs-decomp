#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, s32 n);

typedef struct { u8 pad[0x152]; u16 s0; } Obj;

void func_ov003_0216bda4(u8 *p)
{
    ((Obj *)p)->s0 = 42;
    *(u8 *)(p + 147) = 9;
    *(u8 *)(p + 152) = 9;
    func_020264f4(p);
    func_020255a4(p);
    func_0202db24(p, 3);
}
