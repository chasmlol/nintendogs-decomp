#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_02144a80;
extern void func_020e0114(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e);
extern u8 *func_02071978(u32 a);
extern u32 func_02071778(u32 a);
extern void func_0208aba0(u32 a, u32 b, u32 c, u8 *d);
extern void func_0208a990(u32 a, u32 b, u32 c, u8 *d);

static inline void SwapB(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_020e1294(u8 *param_1, u32 param_2, u32 param_3)
{
    u8 buf[8];
    u8 *puVar1;
    u32 uVar2;
    func_020e0114(param_1, 2, 0, 8000, 0, data_02144a80);
    puVar1 = func_02071978(param_2);
    if (puVar1 == 0) {
        return;
    }
    uVar2 = func_02071778(*(u32 *)puVar1);
    if (uVar2 == 0) {
        return;
    }
    func_0208aba0(uVar2, param_3, 60, buf);
    SwapB(4, buf);
    SwapB(60, buf + 6);
    *(u16 *)(buf + 2) = (u16)(u32)param_1;
    *(u16 *)(buf + 4) = (u16)((u32)param_1 >> 16);
    func_0208a990(uVar2, param_3, 60, buf);
}
