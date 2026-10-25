#pragma opt_strength_reduction off
#pragma avoid_byte strb
#include "ctx.h"

extern void func_020741a4(u32 *a, u32 b);
extern void func_020744b8(u32 *a, u8 *b, u32 c, u32 d);
extern void func_02074280(u32 a, u32 b);

void func_0208e690(u32 *param_1, u8 *param_2)
{
    u16 uVar1;
    u16 zz;
    u32 uVar2;
    u32 uVar3;
    u16 *hp;
    u8 *q0;
    u8 *q1;
    if (param_2 != 0 && param_1[4] != 0) {
        func_020741a4((u32 *)param_1[3], param_1[4]);
        func_020744b8((u32 *)param_1[4], param_2, *(u32 *)(param_1[3] + 4), 0);
        uVar3 = param_1[4];
        uVar2 = 0;
        if (uVar2 < *(u8 *)(uVar3 + 0x19)) {
            do {
                if ((param_1[0] & (1u << uVar2)) != 0) {
                    hp = (u16 *)(uVar3 + uVar2 * 2 + 0x1a);
                    *hp = *hp | 0x100;
                } else {
                    hp = (u16 *)(uVar3 + uVar2 * 2 + 0x1a);
                    *hp = *hp & ~0x100u;
                }
                uVar2 = uVar2 + 1;
                uVar3 = param_1[4];
            } while (uVar2 < *(u8 *)(uVar3 + 0x19));
        }
        func_02074280(param_1[3], uVar3);
        q0 = (u8 *)param_1 + 0x14;
        uVar1 = *(u16 *)(*(u32 *)(param_1[4] + 8) + 4);
        zz = 0;
        *q0 = zz;
        q1 = (u8 *)param_1 + 0x15;
        *q1 = zz;
        *(u16 *)((u8 *)param_1 + 0x16) = zz;
        *(u16 *)((u8 *)param_1 + 0x18) = (s32)((u32)uVar1 << 12) >> 12;
        *(u16 *)((u8 *)param_1 + 0x1a) = zz;
        param_1[7] = 0x1000;
        param_1[8] = zz;
        return;
    }
    zz = 0;
    *((u8 *)param_1 + 0x14) = zz;
    *((u8 *)param_1 + 0x15) = zz;
    *(u16 *)((u8 *)param_1 + 0x16) = zz;
    *(u16 *)((u8 *)param_1 + 0x18) = zz;
    *(u16 *)((u8 *)param_1 + 0x1a) = zz;
    param_1[7] = 0x1000;
    param_1[8] = zz;
}
