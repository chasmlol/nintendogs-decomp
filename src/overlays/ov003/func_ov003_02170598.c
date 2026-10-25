#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u8 pad[0x93]; u8 lock; u8 pad2[0x4]; u8 b98; u8 pad3[0xb9]; u16 state; u8 pad4[2]; u16 state2; u8 pad5[0x7f0]; u32 flags; } Obj;

extern u16 *data_0215942c;
extern void func_02026aac(Obj *p);
extern void func_020255a4(Obj *p);
extern void func_02034198(Obj *p);
extern void func_02107ea0(void);

void func_ov003_02170598(Obj *o)
{
    u32 one;
    o->state = 19;
    one = 1;
    o->state2 = (u16)one;
    o->lock = 5;
    o->b98 = (u8)one;
    func_02026aac(o);
    func_020255a4(o);
    o->flags |= 1;
    func_02034198(o);
    if (*data_0215942c == 1) {
        func_02107ea0();
    }
}
