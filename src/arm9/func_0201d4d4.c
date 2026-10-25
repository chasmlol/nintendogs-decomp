#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026aac(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_020aadac(u32 a, s32 b);
extern u32 data_0214f460;

typedef struct { u8 pad[0x152]; u16 s0; u8 pad2[2]; u16 s1; } Obj;

void func_0201d4d4(u8 *p)
{
    Obj *o = (Obj *)p;
    u32 t;
    o->s0 = 19;
    o->s1 = 1;
    *(u8 *)(p + 147) = 5;
    *(u8 *)(p + 152) = 1;
    func_02026aac(p);
    func_020255a4(p);
    t = *(u32 *)(p + 0x948);
    *(u32 *)(p + 0x948) = t | 1;
    func_020aadac(data_0214f460, *(s8 *)(p + 0x88));
}
