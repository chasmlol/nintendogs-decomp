#include "ctx.h"

extern u8 *data_0214f464;
extern s32 func_02022dec(u8 *p, s32 a, u32 b);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern s32 func_0202cd10(u8 *p, u32 a);
extern void func_0203e908(u8 *p, u32 a);
extern void func_02022b7c(u8 *p);

void func_020110a8(u8 *param_1)
{
    s32 iVar2;
    s32 bVar1;
    s32 bres;
    u32 uVar3;
    u8 *r6;

    func_02022b7c(param_1);
    bVar1 = (*(u8 *)(param_1 + 0xa4) != 0);
    if (bVar1) {
        iVar2 = func_02022dec(param_1, *(s16 *)(param_1 + 0xf2), *(u8 *)(param_1 + 0xa6));
        bVar1 = (iVar2 != 0);
    }
    r6 = func_0203541c(param_1);
    if (r6 == NULL) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    switch (*(s16 *)(r6 + 0x90)) {
    case 4:
        if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
            *(u32 *)(param_1 + 0x948) = 1;
        }
        break;
    case 7:
        if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
            *(u32 *)(param_1 + 0x948) = 8;
        }
        break;
    }
    iVar2 = func_ov003_02198298(param_1);
    goto test;
zero:
    iVar2 = 0;
test:
    if (iVar2 != 0) {
        bres = 1;
        goto done;
    }
    iVar2 = func_020289d0(param_1, 2, 0);
    if (iVar2 != 0) {
        bres = 1;
        goto done;
    }
    if (bVar1) {
        goto zero_res;
    }
    iVar2 = func_0202cd10(param_1, 2);
    if (iVar2 != 0) {
        bres = 1;
        goto done;
    }
zero_res:
    bres = 0;
done:
    if (bres) {
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) <= 100) {
        return;
    }
    uVar3 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = uVar3;
    if ((u16)(((u32)(u16)uVar3 * 100) >> 16) == 0) {
        func_0203e908(param_1, 135);
    }
}
