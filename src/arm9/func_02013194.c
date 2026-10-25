#include "ctx.h"
extern u8 data_0214f464[];
extern s32 func_02022dec(u8 *p, s32 a, s32 b);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0202cd10(u8 *p, s32 a);
extern void func_0203e908(u8 *p, s32 a);
extern void func_02022b7c(u8 *p);

void func_02013194(u8 *param_1)
{
    s32 bVar1;
    s32 iVar2;
    u8 *p6;
    u32 *pc;
    u32 uVar3;
    s16 st;

    func_02022b7c(param_1);
    bVar1 = (*(u8 *)(param_1 + 0xa4) != 0);
    if (bVar1) {
        iVar2 = func_02022dec(param_1, *(s16 *)(param_1 + 0xf2), *(u8 *)(param_1 + 0xa6));
        bVar1 = (iVar2 != 0);
    }
    p6 = func_0203541c(param_1);
    if (p6 == NULL) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    st = *(s16 *)(p6 + 0x90);
    if (st == 4) {
        goto c4;
    }
    if (st != 7) {
        goto call;
    }
    goto c7;
c4:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(u32 *)(param_1 + 0x948) = 1;
    }
    goto call;
c7:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(u32 *)(param_1 + 0x948) = 8;
    }
call:
    iVar2 = func_ov003_02198298(param_1);
    goto after;
zero:
    iVar2 = 0;
after:
    if (iVar2 != 0) {
        bVar1 = 1;
        goto done;
    }
    iVar2 = func_020289d0(param_1, 13, 0);
    if (iVar2 != 0) {
        bVar1 = 1;
        goto done;
    }
    if (bVar1) {
        goto zero2;
    }
    iVar2 = func_0202cd10(param_1, 13);
    if (iVar2 != 0) {
        bVar1 = 1;
        goto done;
    }
zero2:
    bVar1 = 0;
done:
    if (bVar1) {
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) <= 100) {
        return;
    }
    pc = *(u32 **)data_0214f464;
    uVar3 = *pc * 0x10dcd + 1;
    *pc = uVar3;
    if ((u16)(((u32)(u16)uVar3 * 100u) >> 16) == 0) {
        func_0203e908(param_1, 13);
    }
}
