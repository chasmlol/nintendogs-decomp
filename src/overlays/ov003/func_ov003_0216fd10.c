#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026c24(u8 *);
extern u8 func_02025548(u8 *);

typedef struct {
    u8 pad[0x93];
    u8 lock;
    u8 pad2[0xbe];
    u16 state;
    u16 field2;
    u16 field3;
} Obj;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_0216fd10(u8 *param_1)
{
    ((Obj *)param_1)->state = 0x185;
    ((Obj *)param_1)->field3 = 1;
    SwapByte(5, param_1 + 147);
    func_02026c24(param_1);
    func_02025548(param_1);
    *(u32 *)(param_1 + 0x464) = 0x1000;
}
