#include "ctx.h"
extern u8 data_0214e93c[];
extern u8 data_0214e938[];
extern void func_02088364(s32 *p);
extern void func_02088014(s32 *p, u8 *q);
extern s32 func_020038b8(u8 *p, s32 a);
extern void func_02087e90(s32 *p, s32 a, s32 b);
extern void func_02087fcc(s32 *p);
extern u32 *func_02006bac(s32 a);
extern u32 *func_02006b78(s32 a);

void func_02006084(u8 *param_1, u8 *param_2, u8 *param_3)
{
    s32 blk[17];
    s32 iVar1;
    s32 iVar4;
    u32 *piVar2;
    u32 *piVar3;

    if (*(u32 *)data_0214e93c != 0) {
        return;
    }
    func_02088364(blk);
    func_02088014(blk, param_2);
    iVar4 = blk[9] - blk[8];
    iVar1 = func_020038b8(param_1, iVar4);
    func_02087e90(blk, iVar1, iVar4);
    func_02087fcc(blk);
    piVar2 = func_02006bac(iVar1);
    *(u32 **)data_0214e93c = piVar2;
    func_02088014(blk, param_3);
    iVar4 = blk[9] - blk[8];
    iVar1 = func_020038b8(param_1, iVar4);
    func_02087e90(blk, iVar1, iVar4);
    func_02087fcc(blk);
    piVar3 = func_02006b78(iVar1);
    *(u32 **)data_0214e938 = piVar3;
}
