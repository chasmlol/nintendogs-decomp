#pragma avoid_byte strb
#include "ctx.h"

extern int data_0214f464;
extern void func_02093a04(int a);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02027bdc(int param_1, int param_2)
{
    int iVar1;
    u16 *pw;
    u32 uVar2;
    u32 lim;

    SwapByte(1, (vu8 *)(param_1 + 0xd2));
    lim = 0x2710;
    pw = (u16 *)((int *)param_1)[634];
    pw += 768;
    uVar2 = param_2 + pw[39];
    if ((u16)uVar2 < lim) {
        pw[39] = (u16)uVar2;
    } else {
        pw[39] = lim;
    }
    if (*(s8 *)(data_0214f464 + *(s8 *)(param_1 + 0x88) + 0x1c) == 0) {
        func_02093a04(param_2);
    }
}
