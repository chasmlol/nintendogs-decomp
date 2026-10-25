#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *);
extern u8 func_020255a4(u8 *);

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

u8 func_ov005_02164ed4(u8 *param_1)
{
    u8 uVar1;
    ((Obj *)param_1)->state = 348;
    SwapByte(5, param_1 + 147);
    SwapByte(1, param_1 + 153);
    SwapByte(2, param_1 + 151);
    func_020264f4(param_1);
    uVar1 = func_020255a4(param_1);
    return uVar1;
}
