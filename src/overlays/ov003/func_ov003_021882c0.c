#pragma avoid_byte strb
#include "ctx.h"
extern u8 data_0214f464[];
extern void func_02022b7c(u8 *p);
extern s32 func_02026e68(u8 *p);
extern void func_ov003_0218c050(u8 *p, s32 a);
extern s32 func_0202c5d8(u8 *p, s32 a);
extern s32 func_02029b7c(u8 *p, s32 a, s32 b, s32 c);
extern void func_0203e908(u8 *p, s32 a);

static inline u32 SwapB(u32 v, u8 *p) { u32 o; *(u8 *)(p) = (u8)(v); return o; }

void func_ov003_021882c0(u8 *param_1)
{
    s32 bVar5;
    s32 iVar2;
    s32 bVar1;
    u32 *pc;
    u32 uVar4;
    s32 c1;
    s32 c0;

    bVar5 = 0;
    if (*(u16 *)(param_1 + 0xfc) > 60) {
        pc = *(u32 **)data_0214f464;
        uVar4 = *pc * 0x10dcd + 1;
        *pc = uVar4;
        if ((u16)(((u32)(u16)uVar4 * 30u) >> 16) == 0) {
            bVar5 = 1;
        }
    }
    func_02022b7c(param_1);
    iVar2 = func_02026e68(param_1);
    func_ov003_0218c050(param_1, iVar2);
    c1 = 1;
    c0 = 0;
    *(u16 *)(param_1 + 0x11c) = (u16)c1;
    *(u16 *)(param_1 + 0x11e) = (u16)c0;
    if (iVar2 != 0) {
        SwapB(c1, param_1 + 0xb9);
    } else {
        SwapB(c0, param_1 + 0xb9);
    }
    iVar2 = func_0202c5d8(param_1, 4);
    bVar1 = (iVar2 != 0) ? 1 : (func_02029b7c(param_1, 4, 31, 0) != 0);
    if (!bVar1 && bVar5) {
        func_0203e908(param_1, 0x171);
    }
}
