#include "ctx.h"

extern s16 data_02126868[];
extern s8 data_02133004[];
extern u8 data_02132ffc[];
extern void func_02068368(u32 a);
extern void func_02066310(s32 *a, s32 b, s32 c);
extern void func_02069fd4(u32 a, s32 *b, u32 c, u32 d, s32 e, s32 f);

void func_020ecd04(u8 *param_1)
{
    s32 iVar1;
    s32 aiStack_30[4];
    s32 aiStack_20[5];
    u8 *iVar9;

    iVar9 = *(u8 **)(param_1 + 0x214);
    if (*(s32 *)(iVar9 + 0x154) != 0) {
        func_02068368(2);
        *(u16 *)0x0400100a = (*(u16 *)0x0400100a & 0x43) | 0x504;
        *(u16 *)0x0400100c = (*(u16 *)0x0400100c & 0x43) | 0x4608;
        *(u16 *)0x0400100e = (*(u16 *)0x0400100e & 0x43) | 0x4708;
        *(u32 *)0x04001000 = *(u32 *)0x04001000 | 0x1e00;
        *(u16 *)0x0400100a = (*(u16 *)0x0400100a & ~3u) | 3;
        *(u16 *)0x0400100c = (*(u16 *)0x0400100c & ~3u) | 2;
        *(u16 *)0x0400100e = (*(u16 *)0x0400100e & ~3u) | 1;
        *(u32 *)0x04001000 = *(u32 *)0x04001000 & 0xffff1fff;
        *(u16 *)0x04001050 = 0;
        *(s32 *)(iVar9 + 0x154) = 0;
    }
    iVar1 = (s32)(*(u16 *)(iVar9 + 0xc) >> 4);
    func_02066310(aiStack_30, data_02126868[iVar1 * 2], data_02126868[iVar1 * 2 + 1]);
    iVar1 = (s32)(*(u16 *)(iVar9 + 0x1c) >> 4);
    func_02066310(aiStack_20, data_02126868[iVar1 * 2], data_02126868[iVar1 * 2 + 1]);
    func_02069fd4(0x04001020, aiStack_30, data_02132ffc[0], data_02132ffc[1], data_02133004[0], data_02133004[1]);
    func_02069fd4(0x04001030, aiStack_20, data_02132ffc[2], data_02132ffc[3], data_02133004[2], data_02133004[3]);
    *(u32 *)0x04001014 = ((s32)data_02133004[4] & 0x1ff) | (((s32)data_02133004[5] << 16) & 0x01ff0000);
}
