#include "ctx.h"

extern void func_02022b7c(u8 *p);
extern s32 func_02022dec(u8 *p, s32 a, u32 b);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern s32 func_0202cd10(u8 *p, u32 a);
extern void func_0203e908(u8 *p, s32 v);
extern s32 *data_0214f464;

void func_02011728(u8 *param_1)
{
    BOOL bVar1;
    BOOL r4;
    s32 iVar2;
    u8 *pp;
    u32 uVar3;

    func_02022b7c(param_1);
    r4 = (*(u8 *)(param_1 + 0xa4) != 0);
    if (r4) {
        iVar2 = func_02022dec(param_1, *(s16 *)(param_1 + 0xf2), *(u8 *)(param_1 + 0xa6));
        r4 = (iVar2 != 0);
    }
    pp = func_0203541c(param_1);
    if (pp != 0) {
        func_0203e8cc(param_1, 2, 1);
        switch (*(s16 *)(pp + 0x90)) {
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
    } else {
        iVar2 = 0;
    }
    if (iVar2 != 0) {
        bVar1 = TRUE;
        goto done;
    }
    iVar2 = func_020289d0(param_1, 0xe, 0);
    if (iVar2 != 0) {
        bVar1 = TRUE;
        goto done;
    }
    if (r4) {
        goto cont;
    }
    if (func_0202cd10(param_1, 0xe) != 0) {
        bVar1 = TRUE;
        goto done;
    }
cont:
    bVar1 = FALSE;
done:
    if (bVar1) {
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) <= 100) {
        return;
    }
    uVar3 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = uVar3;
    if ((u16)((u32)(u16)uVar3 * 100 >> 16) == 0) {
        func_0203e908(param_1, 0xe);
    }
}
