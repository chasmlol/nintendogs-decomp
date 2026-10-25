#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;

void func_02022b7c(u8 *p);
s32 func_02026e68(u8 *p);
void func_ov003_0218c050(u8 *p, s32 a);
s32 func_0202c5d8(u8 *p, u32 a);
s32 func_02029b7c(u8 *p, u32 a, u32 b, u32 c);
void func_0203e908(u8 *p, u32 a);

void func_ov003_021881b4(u8 *param_1)
{
    s32 bVar1;
    s32 bVar5;
    s32 iVar2;
    u32 t;

    bVar5 = 0;
    if (*(u16 *)(param_1 + 0xfc) > 60) {
        t = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = t;
        if ((u16)(((u32)(u16)t * 30) >> 16) == 0) {
            bVar5 = 1;
        }
    }
    func_02022b7c(param_1);
    iVar2 = func_02026e68(param_1);
    func_ov003_0218c050(param_1, iVar2);
    *(u16 *)(param_1 + 256 + 28) = 1;
    *(u16 *)(param_1 + 256 + 30) = 0;
    if (iVar2 != 0) {
        *(u8 *)(param_1 + 185) = 1;
    } else {
        *(u8 *)(param_1 + 185) = 0;
    }
    iVar2 = func_0202c5d8(param_1, 4);
    if (iVar2 != 0) {
        bVar1 = 1;
        goto test;
    }
    iVar2 = func_02029b7c(param_1, 4, 0x1f, 0);
    bVar1 = (iVar2 != 0);
test:
    if (!bVar1) {
        if (bVar5) {
            func_0203e908(param_1, 0x172);
        }
    }
}
