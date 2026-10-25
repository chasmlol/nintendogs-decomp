#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *);
extern u8 func_02025548(u8 *);
extern void func_02020768(u8 *);

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

void func_ov003_02166808(u8 *param_1)
{
    ((Obj *)param_1)->state = 0x18a;
    SwapByte(14, param_1 + 147);
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02020768(param_1);
}
