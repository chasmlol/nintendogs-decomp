#pragma avoid_byte strb
#include "ctx.h"
extern u32 func_0208e264(u32 a);
extern void func_0208f834(u8 *p, u32 c);
static inline void SwapByte(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}
void func_020bdca4(u8 *param_1, u32 param_2)
{
    u32 uVar1;
    u8 *iVar2;
    u16 zero;
    *(u32 *)(param_1 + 0x18c) = param_2;
    if (*(u32 *)(param_1 + 0x18c) != 0) {
        uVar1 = func_0208e264(1);
        func_0208f834(*(u8 **)(param_1 + 0x18c), uVar1);
        zero = 0;
        *(u16 *)(*(u8 **)(param_1 + 0x18c) + 0x20) = *(u16 *)(*(u8 **)(param_1 + 0x18c) + 0x20) | 1;
        SwapByte(*(u8 *)(*(u8 **)(param_1 + 0x18c) + 1) | 1, *(u8 **)(param_1 + 0x18c) + 1);
        iVar2 = *(u8 **)(param_1 + 0x18c);
        *(u16 *)(iVar2 + 0x20) = *(u16 *)(iVar2 + 0x20) | 8;
        *(u16 *)(iVar2 + 0x84) = zero;
        *(u16 *)(iVar2 + 0x86) = zero;
        return;
    }
    return;
}
