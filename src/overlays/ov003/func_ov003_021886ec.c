#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f464;
extern void func_02022b7c(u8 *p);
extern s32 func_02026e68(u8 *p);
extern void func_ov003_0218c050(u8 *p, s32 a);
extern s32 func_0202c5d8(u8 *p, u32 a);
extern s32 func_02029b7c(u8 *p, u32 a, u32 b, u32 c);
extern void func_0203e908(u8 *p, u32 a);

void func_ov003_021886ec(u8 *param_1)
{
    s32 bres;
    s32 iVar2;
    s32 bVar5;
    u32 *P;
    u32 uVar4;

    bVar5 = 0;
    if (*(u16 *)(param_1 + 0xfc) > 60) {
        P = *(u32 **)&data_0214f464;
        uVar4 = *P * 0x10dcd + 1;
        *P = uVar4;
        if ((u16)((((u32)(u16)uVar4) * 30u) >> 16) == 0) {
            bVar5 = 1;
        }
    }
    func_02022b7c(param_1);
    iVar2 = func_02026e68(param_1);
    func_ov003_0218c050(param_1, iVar2);
    *(u16 *)(param_1 + 256 + 28) = 1;
    *(u16 *)(param_1 + 256 + 30) = 0;
    if (iVar2 != 0) {
        *(param_1 + 185) = 1;
    } else {
        *(param_1 + 185) = 0;
    }
    if (func_0202c5d8(param_1, 1) != 0) {
        bres = 1;
        goto Ld4;
    }
    bres = func_02029b7c(param_1, 1, 31, 0) != 0;
Ld4:
    if (bres != 0) {
        return;
    }
    if (bVar5 != 0) {
        func_0203e908(param_1, 0x16d);
    }
}
