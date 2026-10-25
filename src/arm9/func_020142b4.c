#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;
extern u8 *func_02024114(int p, s16 a);
extern void func_02022134(int p, s8 a, int b, s16 c, int d);
extern void func_02028184(int p);
extern void func_0202802c(int p, int a, int b);

void func_020142b4(int param_1, int param_2)
{
    u8 *iVar1;
    u32 uVar2;
    u16 k;
    u32 *pc;
    u16 t;

    iVar1 = func_02024114(param_1, *(s16 *)(param_1 + 248));
    if (iVar1 == 0) {
        return;
    }
    pc = data_0214f464;
    uVar2 = *pc * 0x10dcd + 1;
    *pc = uVar2;
    k = (u16)(((u32)(u16)uVar2 * 10) >> 16);
    func_02022134(param_1, *(s8 *)(param_1 + 136), param_2, *(s16 *)(param_1 + 248), k == 0);
    func_02028184(param_1);
    if (*(s16 *)(param_1 + 248) == 0) {
        func_0202802c(param_1, 1, -10);
        func_0202802c(param_1, 2, 10);
    }
    t = *(u16 *)(iVar1 + 2);
    *(u16 *)(iVar1 + 2) = t + 50;
    *(u8 *)(param_1 + 163) = 0;
    *(s16 *)(param_1 + 248) = -1;
    *(u16 *)(param_1 + 256 + 24) = 0;
}
