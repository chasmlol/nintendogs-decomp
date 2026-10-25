#include "ctx.h"

extern u32 data_0214f464;
extern void func_02010474(u8 *p, u32 v);
extern void func_02035aa0(u8 *p);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern s32 func_0202cd10(u8 *p, u32 a);
extern void func_0203e908(u8 *p, u32 v);

void func_020101b0(u8 *param_1)
{
    u32 bVar1;
    s32 iVar2;
    u32 uVar3;
    u16 uVar4;
    u8 *V;

    if (*(s32 *)(param_1 + 0x464) == 0) {
        uVar4 = 200;
    } else {
        uVar4 = 0;
    }
    func_02010474(param_1, 1);
    func_02035aa0(param_1);
    iVar2 = (s32)func_0203541c(param_1);
    if (iVar2 == 0) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    switch (*(s16 *)(iVar2 + 144)) {
    case 4:
        if ((s8)param_1[139] != 5 && (s8)param_1[139] != 4) {
            *(u32 *)(param_1 + 0x948) = 1;
        }
        break;
    case 7:
        if ((s8)param_1[139] != 5 && (s8)param_1[139] != 4) {
            *(u32 *)(param_1 + 0x948) = 8;
        }
        break;
    }
    bVar1 = func_ov003_02198298(param_1);
    goto chk;
zero:
    bVar1 = 0;
chk:
    if (bVar1 != 0) {
        bVar1 = 1;
        goto DONE;
    }
    if (func_020289d0(param_1, 1, 0) != 0) {
        bVar1 = 1;
        goto DONE;
    }
    bVar1 = func_0202cd10(param_1, 1) != 0;
DONE:
    if (bVar1 != 0) {
        return;
    }
    if ((s32)*(u16 *)(param_1 + 252) <= (s32)uVar4) {
        return;
    }
    V = *(u8 **)&data_0214f464;
    uVar3 = *(u32 *)V * 0x10dcd + 1;
    *(u32 *)V = uVar3;
    if ((u16)((((u32)(u16)uVar3) * 0x78) >> 16) != 0) {
        return;
    }
    func_0203e908(param_1, 1);
}
