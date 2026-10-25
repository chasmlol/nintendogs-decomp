#include "ctx.h"

extern u32 data_02152154;
extern u32 data_02152150;
extern u32 data_021521c0;
extern u32 data_02152158;
extern void func_020800d4(u32 a, u32 b);
extern void func_0207fd5c(u32 a, u8 *b, u32 c, u8 *d);

void func_02070ee4(u8 *param_1)
{
    u32 uVar8;
    u32 uVar7;
    s32 iVar6;
    s32 iVar3;
    u8 *base;
    u8 *e;
    u32 k;
    s32 t;
    iVar6 = *(s32 *)(param_1 + 0x18);
    iVar3 = iVar6 * *(s32 *)(param_1 + 0x1c);
    uVar8 = *(s32 *)(param_1 + 0xc) + iVar3;
    uVar7 = *(s32 *)(param_1 + 0x10) + iVar3;
    if (data_02152154 != 0) {
        k = data_02152150;
        base = (u8 *)&data_021521c0;
        *(u32 *)(base + k * 20) = (u32)param_1;
        e = base + k * 20;
        *(s32 *)(e + 4) = iVar6;
        *(s32 *)(e + 8) = iVar3;
        *(u32 *)(e + 0xc) = uVar8;
        *(u32 *)(e + 0x10) = uVar7;
        func_0207fd5c((u32)&data_02152158, e, 0, base);
        t = data_02152150 + 1;
        data_02152150 = t;
        if (t >= 8) {
            data_02152150 = 0;
        }
    } else {
        func_020800d4(uVar8, iVar6);
        func_020800d4(uVar7, iVar6);
        ((void (*)(u32, u32, s32, s32, s32))*(u32 *)(param_1 + 0x34))(uVar8, uVar7, iVar6, *(s32 *)(param_1 + 8), *(s32 *)(param_1 + 0x38));
    }
    *(s32 *)(param_1 + 0x1c) = *(s32 *)(param_1 + 0x1c) + 1;
    if (*(s32 *)(param_1 + 0x1c) >= *(s32 *)(param_1 + 0x30)) {
        *(u32 *)(param_1 + 0x1c) = 0;
    }
}
