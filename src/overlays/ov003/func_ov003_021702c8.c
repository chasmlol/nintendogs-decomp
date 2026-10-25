#pragma avoid_byte strb
#include "ctx.h"

extern void func_020268dc(u8 *);
extern void func_02025b30(u8 *);
extern void func_020340f4(u8 *);

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

void func_ov003_021702c8(u8 *param_1)
{
    ((Obj *)param_1)->state = 21;
    SwapByte(5, param_1 + 147);
    SwapByte(1, param_1 + 152);
    func_020268dc(param_1);
    func_02025b30(param_1);
    func_020340f4(param_1);
}
