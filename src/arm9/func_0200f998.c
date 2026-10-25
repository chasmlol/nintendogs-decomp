#include "ctx.h"

extern void func_02010474(u8 *p, u32 a);
extern void func_02035aa0(u8 *p);
extern s32 func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern s32 func_0202cd10(u8 *p, u32 a);
extern void func_0203e908(u8 *p, s32 v);
extern s32 *data_0214f464;

void func_0200f998(u8 *param_1)
{
    BOOL bVar1;
    s32 uVar3;
    s32 rA;
    s32 iVar2;
    u16 uVar4;

    if (*(s32 *)(0x464 + param_1) == 0) {
        uVar4 = 200;
    } else {
        uVar4 = 0;
    }
    func_02010474(param_1, 0);
    func_02035aa0(param_1);
    iVar2 = func_0203541c(param_1);
    if (iVar2 != 0) {
        func_0203e8cc(param_1, 2, 1);
        switch (*(s16 *)(0x90 + iVar2)) {
        case 4:
            if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
                *(u32 *)(param_1 + 0x948) = 1;
            }
            break;
        case 7:
            if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
                *(u32 *)(0x948 + param_1) = 8;
            }
            break;
        }
        rA = func_ov003_02198298(param_1);
    } else {
        rA = 0;
    }
    if (rA != 0) {
        bVar1 = TRUE;
    } else {
        if (func_020289d0(param_1, 0, 0) != 0) {
            bVar1 = TRUE;
        } else {
            bVar1 = (func_0202cd10(param_1, 0) != 0);
        }
    }
    if (bVar1) {
        return;
    }
    if ((s32)*(u16 *)(param_1 + 0xfc) <= uVar4) {
        return;
    }
    uVar3 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = uVar3;
    if ((u16)(((u32)(u16)uVar3 * 120u) >> 16) != 0) {
        return;
    }
    func_0203e908(param_1, 0x256);
}
