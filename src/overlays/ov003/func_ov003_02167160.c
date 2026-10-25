#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_02025548(u8 *p);
extern void func_02020768(u8 *p);

typedef struct { u8 pad[0x152]; u16 s0; u16 s1; } Obj;

void func_ov003_02167160(u8 *param_1)
{
    Obj *o = (Obj *)param_1;
    o->s0 = 76;
    o->s1 = 24;
    *(u8 *)(param_1 + 147) = 10;
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02020768(param_1);
}
