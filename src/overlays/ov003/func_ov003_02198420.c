#include "ctx.h"
extern void func_020362ec(u8 *p, s32 a);
extern s32 func_02027c68(u8 *p, s32 a);
extern u32 func_020bd5e8(u8 *p, u8 *q);
extern void func_0203e908(u8 *p, s32 a);
extern s32 func_020386d0(u8 *p);

u32 func_ov003_02198420(u8 *param_1, u8 *param_2, u32 param_3)
{
    s32 bVar1;
    u32 uVar2;
    s32 iVar3;

    func_020362ec(param_1, (s16)(*(s16 *)(param_2 + 0x88) + 3));
    switch (param_3) {
    case 0: goto blk1;
    case 1: goto blk1;
    case 2: goto blk1;
    case 3: goto blk1;
    case 4: goto blk2;
    case 5: goto blk2;
    case 6: goto blk2;
    case 7: goto blk2;
    case 8: goto blk2;
    case 9: goto blk2;
    case 10: goto blk2;
    case 11: goto zero;
    case 12: goto zero;
    case 13: goto blk2;
    case 14: goto blk2;
    default: goto zero;
    }
blk1:
    bVar1 = func_02027c68(param_1, 1);
    if (bVar1 != 0) {
        uVar2 = func_020bd5e8(param_1, param_2);
        if ((uVar2 & 1) != 0) {
            func_0203e908(param_1, 0x3d6);
            return 1;
        }
    }
    iVar3 = func_020386d0(param_1);
    func_0203e908(param_1, (s16)(iVar3 + 0x3d1));
    return 1;
blk2:
    bVar1 = func_02027c68(param_1, 1);
    if (bVar1 != 0) {
        uVar2 = func_020bd5e8(param_1, param_2);
        if ((uVar2 & 2) != 0) {
            func_0203e908(param_1, 0x3d7);
            return 1;
        }
    }
    uVar2 = func_020bd5e8(param_1, param_2);
    if ((uVar2 & 4) != 0) {
        func_0203e908(param_1, 0x3d8);
        return 1;
    }
    uVar2 = func_020bd5e8(param_1, param_2);
    if ((uVar2 & 8) != 0) {
        func_0203e908(param_1, 0x3d9);
        return 1;
    }
    iVar3 = func_020386d0(param_1);
    func_0203e908(param_1, (s16)(iVar3 + 0x3d1));
    return 1;
zero:
    return 0;
}
