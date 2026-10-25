#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);
extern void func_0202db24(u8 *p, u32 v);

typedef struct { u8 pad[0x152]; u16 s0; } Obj;

void func_ov003_0216cad0(u8 *p)
{
    ((Obj *)p)->s0 = 112;
    *(u8 *)(p + 147) = 9;
    *(u8 *)(p + 152) = 9;
    func_020264f4(p);
    func_020255a4(p);
    func_02023654(p, 5, 1);
    func_0202db24(p, 5);
}
