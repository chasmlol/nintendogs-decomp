#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

extern u32 *data_0214f464;
extern u32 data_02152cd8;

void func_02026478(u8 *p);
void func_02025548(u8 *p);
void func_02034198(u8 *p);
void func_01ff832c(s32 a, u32 *b, u32 *c, u32 *d);


void func_ov003_021654c4(u8 *param_1)
{
    u32 uVar4;
    s32 iVar2;
    s32 iVar3;
    u32 t0, t1, t2, t3, t4, t5;
    u32 arr[6];

    *(u16 *)(param_1 + 0x152) = 0;
    *(vu8 *)(param_1 + 147) = 7;
    *(vu8 *)(param_1 + 152) = 5;
    *(vu8 *)(param_1 + 151) = 1;
    func_02026478(param_1);
    func_02025548(param_1);
    func_02034198(param_1);
    uVar4 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar4;
    iVar2 = (s32)(u16)(((u32)(u16)uVar4 * 20) >> 16) + 50;
    iVar3 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = iVar3;
    if ((u16)((u32)(iVar3 * 0x10000) >> 31)) {
        iVar2 = -iVar2;
    }
    {
        u8 *tb = (u8 *)&data_02152cd8;
        t0 = *(vu32 *)(tb + 0x4c);
        t1 = *(vu32 *)(tb + 0x58);
        t2 = *(vu32 *)(tb + 0x64);
        t3 = *(vu32 *)(tb + 0x54);
        t4 = *(vu32 *)(tb + 0x60);
        t5 = *(vu32 *)(tb + 0x6c);
    }
    arr[0] = t0;
    arr[1] = t1;
    arr[2] = t2;
    arr[3] = t3;
    arr[4] = t4;
    arr[5] = t5;
    func_01ff832c(iVar2 * 41, arr, (u32 *)(param_1 + 0x2a0), (u32 *)(param_1 + 0x278));
    func_01ff832c(0xffff0fc4, &arr[3], (u32 *)(param_1 + 0x278), (u32 *)(param_1 + 0x278));
}
