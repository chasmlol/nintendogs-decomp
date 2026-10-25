#pragma avoid_byte strb
#include "ctx.h"

void func_020741a4(u32 a, u32 b);
void func_020744b8(u32 a, u32 b, u32 c, u32 d);
void func_02074280(u32 a, u32 b);

static inline void SwapR0(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_0208e468(u8 *param_1, u8 *param_2)
{
    u16 uVar1;
    u32 z;
    u8 *p1;
    u32 k;
    u32 sh;

    if (param_2 != 0) {
        func_020741a4(*(u32 *)(param_1 + 0x14), *(u32 *)(param_1 + 0x18));
        func_020744b8(*(u32 *)(param_1 + 0x18), (u32)param_2,
                      *(u32 *)(*(u32 *)(param_1 + 0x14) + 4), *(u32 *)(param_1 + 0x1c));
        func_02074280(*(u32 *)(param_1 + 0x14), *(u32 *)(param_1 + 0x18));
        uVar1 = *(u16 *)(*(u32 *)(*(u32 *)(param_1 + 0x18) + 8) + 4);
        sh = (u32)uVar1 << 12;
        z = 0;
        k = 0x1000;
        p1 = param_1 + 1;
        SwapR0(z, param_1);
        SwapR0(z, p1);
        *(u16 *)(param_1 + 2) = 0;
        *(s16 *)(param_1 + 4) = (s16)((s32)sh >> 12);
        *(u16 *)(param_1 + 6) = 0;
        *(u32 *)(param_1 + 8) = k;
        *(u32 *)(param_1 + 0xc) = 0;
        return;
    }
    z = 0;
    SwapR0(z, param_1);
    SwapR0(z, param_1 + 1);
    *(u16 *)(param_1 + 2) = 0;
    *(u16 *)(param_1 + 4) = z;
    *(u16 *)(param_1 + 6) = 0;
    *(u32 *)(param_1 + 8) = 0x1000;
    *(u32 *)(param_1 + 0xc) = 0;
}
