#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, s32 n);
extern u16 func_02020894(u8 *p);

typedef struct { u8 pad[0x152]; u16 s0; u16 s1; } Obj;

void func_ov003_0216baac(u8 *p)
{
    Obj *o = (Obj *)p;
    u16 r;
    o->s0 = 79;
    r = func_02020894(p);
    o->s1 = r;
    *(u8 *)(p + 151) = 4;
    func_020264f4(p);
    func_020255a4(p);
    func_0202db24(p, 4);
}
