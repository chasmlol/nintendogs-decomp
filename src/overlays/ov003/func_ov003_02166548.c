#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026478(int a);
extern void func_02025548(int a);
extern void func_01ff832c(int a, int *b, int *c, int *d);
extern u32 *data_0214f464;
extern u32 data_02152cd8;

void func_ov003_02166548(int param_1)
{
    u32 uVar4;
    int iVar2;
    int iVar3;
    u32 buf[6];
    u32 v0, v1, v2, v3, v4, v5;

    *(u16 *)((u8 *)param_1 + 256 + 82) = 0;
    *(u16 *)((u8 *)param_1 + 256 + 86) = 16;
    *(u8 *)(param_1 + 0x93) = 7;
    *(u8 *)(param_1 + 0x98) = 5;
    *(u8 *)(param_1 + 0x97) = 1;
    func_02026478(param_1);
    func_02025548(param_1);
    uVar4 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar4;
    iVar2 = (s32)(u16)((((u32)(u16)uVar4) * 20u) >> 16) + 50;
    iVar3 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = iVar3;
    if ((u16)(((u32)iVar3 << 16) >> 31) != 0) {
        iVar2 = -iVar2;
    }
    v0 = *(vu32 *)((int)&data_02152cd8 + 0x4c);
    v1 = *(vu32 *)((int)&data_02152cd8 + 0x58);
    v2 = *(vu32 *)((int)&data_02152cd8 + 0x64);
    v3 = *(vu32 *)((int)&data_02152cd8 + 0x54);
    v4 = *(vu32 *)((int)&data_02152cd8 + 0x60);
    v5 = *(vu32 *)((int)&data_02152cd8 + 0x6c);
    buf[0] = v0;
    buf[1] = v1;
    buf[2] = v2;
    buf[3] = v3;
    buf[4] = v4;
    buf[5] = v5;
    func_01ff832c(iVar2 * 0x29, (int *)buf, (int *)(param_1 + 0x2a0), (int *)(param_1 + 0x278));
    func_01ff832c(0xffff0fc4, (int *)&buf[3], (int *)(param_1 + 0x278), (int *)(param_1 + 0x278));
}
