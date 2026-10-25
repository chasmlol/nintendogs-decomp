#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_0205e270(u32 a, u32 b);
extern void func_0208010c(void *p, u32 size);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

static inline void SwapR0(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_020e0114(u8 *param_1, s32 param_2, u8 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 uVar2;
    u32 r;
    u32 kk;

    switch (param_2) {
    case 0:
        uVar2 = (param_5 << 14) >> 16;
        param_6 = param_6 >> 2;
        break;
    case 1:
        uVar2 = (param_5 << 15) >> 16;
        param_6 = param_6 >> 1;
        break;
    case 2:
        uVar2 = (param_5 << 13) >> 16;
        param_6 = param_6 >> 3;
        break;
    default:
        uVar2 = param_5;
        break;
    }
    SwapByte((u32)param_2, (vu8 *)param_1);
    SwapR0(param_3, (vu8 *)(param_1 + 1));
    kk = (__typeof__(kk))(0x00ffb0ff);
    *(u16 *)(param_1 + 2) = (u16)param_4;
    r = func_0205e270(kk, param_4);
    *(u16 *)(param_1 + 4) = (u16)r;
    *(u16 *)(param_1 + 6) = (u16)uVar2;
    *(u32 *)(param_1 + 8) = param_6;
    func_0208010c(param_1, param_6 * 4 + 0xc);
}
