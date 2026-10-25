#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026b08(u8 *);
extern u8 func_02025bb0(u8 *);

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

u8 func_ov004_0216d344(u8 *param_1)
{
    ((Obj *)param_1)->state = 336;
    SwapByte(10, param_1 + 147);
    SwapByte(1, param_1 + 152);
    func_02026b08(param_1);
    return func_02025bb0(param_1);
}
