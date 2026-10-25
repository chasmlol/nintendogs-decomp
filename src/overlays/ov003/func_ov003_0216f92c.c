#pragma avoid_byte strb
#include "ctx.h"

extern void func_020266f8(u8 *);
extern void func_02025974(u8 *);

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

void func_ov003_0216f92c(u8 *param_1)
{
    ((Obj *)param_1)->state = 0x141;
    SwapByte(7, param_1 + 147);
    SwapByte(5, param_1 + 152);
    SwapByte(1, param_1 + 171);
    func_020266f8(param_1);
    func_02025974(param_1);
    SwapByte(2, param_1 + 178); return;
}
