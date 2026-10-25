#pragma avoid_byte strb
#include "ctx.h"

extern u8 *func_020038b8(s32 *p, s32 n);
extern void func_020056a0(u8 *p, u16 *q);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 *func_0200563c(s32 *param_1, u16 *param_2)
{
    u8 *puVar1;
    u8 *puVar2;
    u32 one;

    puVar1 = func_020038b8(param_1, 0xe0);
    func_020056a0(puVar1, param_2);
    if (*(u16 *)(puVar1 + 10) == 1) {
        puVar2 = func_020038b8(param_1, 8);
        *(u16 *)puVar2 = 0x5000;
        one = 1;
        SwapByte(one, (vu8 *)(puVar2 + 2));
        SwapByte(one, (vu8 *)(puVar2 + 3));
        *(u8 **)(puVar1 + 0x74) = puVar2;
    }
    return puVar1;
}
