#include "ctx.h"
#pragma opt_strength_reduction off
#pragma opt_loop_invariants off

extern u8 *data_ov001_0215e260;
extern u8 *data_0215be48;
extern void func_02069fb8(u32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_0208010c(u32 a, s32 b);
extern void func_0206b314(u32 a, s32 b, s32 c);
extern void func_0207c910(s32 a, s32 b, u32 c, s32 d);
extern void func_0206b714(u32 a, s32 b, u32 c);
extern void func_0206b6ac(u32 a, s32 b, u32 c);

void func_ov001_0215c3a8(void)
{
    s32 iVar7;
    s32 cnt;
    s32 iVar6;
    s32 off;
    s32 iVar4;
    s32 uVar1;
    u32 iVar8;
    u32 uStack_28;

    if (data_ov001_0215e260 == 0) {
        return;
    }
    *(vu32 *)0x04001014 = 0x1ff & ((-*(s32 *)(data_ov001_0215e260 + 0x1c)) >> 12);
    *(vu32 *)0x04001018 = 0x1ff & ((-*(s32 *)(data_ov001_0215e260 + 0x1c)) >> 12);
    uVar1 = *(s32 *)(data_ov001_0215e260 + 0x20) >> 12;
    func_02069fb8(0x04001050, 4, 2, uVar1, 16 - uVar1);
    iVar4 = (s32)data_ov001_0215e260;
    if (*(s32 *)(iVar4 + 0xc1dc) != 0) {
        func_0208010c(*(u32 *)(iVar4 + *(s32 *)(iVar4 + 0xc14c) * 4 + *(s32 *)(iVar4 + 0xc150) * 4 + 0xc16c), 0xc000);
        iVar7 = 0;
        iVar6 = 0;
        do {
            cnt = 0;
            off = iVar6;
            do {
                iVar8 = (s32)data_ov001_0215e260;
                uStack_28 = ((u32 *)(*(u32 *)(iVar8 + *(s32 *)(iVar8 + 0xc14c) * 4 + *(s32 *)(iVar8 + 0xc150) * 4 + 0xc16c)))[off >> 2] | 0x80808080;
                func_0206b314((u32)&uStack_28, off, 4);
                cnt = cnt + 1;
                off = off + 4;
            } while (cnt < 0x40);
            iVar7 = iVar7 + 1;
            iVar6 = iVar6 + 0x100;
        } while (iVar7 < 0xc0);
        iVar4 = (s32)data_ov001_0215e260;
        func_0207c910(0xf, 0x100, *(u32 *)(iVar4 + *(s32 *)(iVar4 + 0xc14c) * 4 + *(s32 *)(iVar4 + 0xc150) * 4 + 0xc1a4), 0x100);
        *(u32 *)(data_ov001_0215e260 + 0xc1dc) = 0;
    }
    uVar1 = *(s32 *)(data_ov001_0215e260 + 0xc13c) >> 12;
    func_02069fb8(0x04000050, 8, 4, uVar1, 16 - uVar1);
    func_0206b714(*(u32 *)(*(u16 **)(data_0215be48 + 0x1de4) + 2), 0, (u32)**(u16 **)(data_0215be48 + 0x1de4) << 3);
    func_0206b6ac(*(u32 *)(*(u16 **)(data_0215be48 + 0x1de8) + 2), 0, (u32)**(u16 **)(data_0215be48 + 0x1de8) << 3);
}
