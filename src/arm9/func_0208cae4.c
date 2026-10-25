#include "ctx.h"

void func_0208be7c(u8 *buf, u32 size, s32 a, s32 b);
s32 func_02088014(u8 *p, u8 *buf);
void *func_02003860(void *p, u32 size, u32 align);
void func_02087ea0(u8 *p, u8 *q, s32 n);
void func_01ffe154(u8 *p, s32 a, s32 b);

u32 func_0208cae4(u8 *param_1, s32 param_2, s32 param_3)
{
    u8 acStack_58[64];
    s32 iVar1;
    s32 r7;
    s32 r8;

    r7 = 0;
    func_0208be7c(acStack_58, 64, param_2, param_3);
    iVar1 = func_02088014(param_1 + 4, acStack_58);
    if (iVar1 != 0) {
        r8 = *(s32 *)(param_1 + 0x28) - *(s32 *)(param_1 + 0x24);
        r7 = (s32)func_02003860(*(void **)(param_1 + 0x6c), ((r8 + 15) & ~15) + 96, 16);
        func_02087ea0(param_1 + 4, (u8 *)r7 + 96, r8);
        *(s32 *)(param_1 + 0x84) = r7;
        *(u16 *)(param_1 + 0x7a) = (u16)param_2;
        *(u16 *)(param_1 + 0x7c) = (u16)param_3;
        *(u16 *)param_1 = 1;
        func_01ffe154(param_1, 0, 0);
        r7 = 1;
    }
    return (u32)r7;
}
