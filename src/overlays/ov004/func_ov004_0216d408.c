#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026b88(u8 *);
extern u8 func_02025bb0(u8 *);

typedef struct {
    u8 pad[0x93];
    u8 lock;
    u8 pad2[0xbe];
    u16 state;
    u16 field2;
} Obj;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov004_0216d408(u8 *param_1)
{
    ((Obj *)param_1)->state = 0x182;
    ((Obj *)param_1)->field2 = 48;
    SwapByte(5, param_1 + 147);
    SwapByte(1, param_1 + 152);
    func_02026b88(param_1);
    func_02025bb0(param_1);
    *(u32 *)(param_1 + 0x484) = 0;
}
