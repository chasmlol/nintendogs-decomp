#include "ctx.h"
#pragma opt_strength_reduction off

extern int data_02159438;
extern int data_02159424;
extern void func_02006c74(u16 *a, u32 *b);

void func_020aa498(void)
{
    u32 buf[3];
    s32 sVar3;
    u32 uStack_34;
    u32 uVar6;
    u32 uVar5;
    u32 uVar4;
    u32 uVar7;

    if (*(s16 *)(data_02159438 + 8) != 0) {
        uVar7 = 0;
        sVar3 = 0;
        uStack_34 = 0;
        do {
            uVar4 = (uVar7 & 0xff) | 0xc0000c00;
            uVar5 = uVar6 = uStack_34;
            do {
                buf[0] = uVar4 | ((uVar6 & 0x1ff) << 16);
                *(u16 *)((u8 *)buf + 4) = (u16)(uVar5 + sVar3 * 0x20 + 0x100 | 0xfc00);
                func_02006c74(*(u16 **)(*(int *)&data_02159424 + 0x10), buf);
                uVar6 = uVar6 + 0x40;
                uVar5 = uVar5 + 8;
            } while ((s32)uVar6 < 0x100);
            uVar7 = uVar7 + 0x40;
            sVar3 = sVar3 + 8;
        } while ((s32)uVar7 < 0xc0);
    }
}
