#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026aac(u8 *);
extern u8 func_02025650(u8 *);

typedef struct {
    u8 pad[0x93];
    u8 lock;
    u8 pad2[0xbe];
    u16 state;
} Obj;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_ov003_02167b10(u8 *param_1)
{
    ((Obj *)param_1)->state = 19;
    SwapByte(7, param_1 + 147);
    SwapByte(1, param_1 + 152);
    func_02026aac(param_1);
    return func_02025650(param_1);
}
