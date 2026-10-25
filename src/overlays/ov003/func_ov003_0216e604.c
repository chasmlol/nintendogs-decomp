#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026aac(u8 *p);
extern void func_02025bb0(u8 *p);
extern void func_02034198(u8 *p);

typedef struct { u8 pad[0x152]; u16 s0; } Obj;

void func_ov003_0216e604(u8 *p)
{
    ((Obj *)p)->s0 = 19;
    *(u8 *)(p + 147) = 5;
    *(u8 *)(p + 152) = 5;
    func_02026aac(p);
    func_02025bb0(p);
    func_02034198(p);
}
