#pragma avoid_byte strb
#include "ctx.h"

extern u32 *func_02071978(u32 a);
extern u32 func_02071778(u32 a);
extern void func_0208aba0(u32 a, u32 b, u32 c, u16 *d);
extern void func_0208a990(u32 a, u32 b, u32 c, u8 *d);

u32 func_020e01a8(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 *puVar1;
    u32 uVar2;
    u8 abStack_28[16];
    u32 four;

    four = 4;
    puVar1 = func_02071978(param_1);
    if (puVar1 == 0) {
        return 0;
    }
    uVar2 = func_02071778(*puVar1);
    if (uVar2 == 0) {
        return 0;
    }
    func_0208aba0(uVar2, param_2, param_3, (u16 *)abStack_28);
    abStack_28[0] = (u8)four;
    *(u16 *)(abStack_28 + 4) = (u16)(param_4 >> 16);
    abStack_28[6] = (u8)param_3;
    *(u16 *)(abStack_28 + 2) = (u16)param_4;
    func_0208a990(uVar2, param_2, param_3, abStack_28);
    return 1;
}
