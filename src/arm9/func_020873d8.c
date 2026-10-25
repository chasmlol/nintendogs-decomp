#include "ctx.h"
extern void func_02088364(s32 *p);
extern s32 func_020880e0(s32 *p, u8 *a, s32 b, s32 c, s32 d);
extern s64 func_02087e90(s32 *p, u32 a, u32 b);
extern s64 func_0206c924(u32 *p, s32 a, u32 b);
extern void func_02087fcc(s32 *p, u32 hi);
extern void func_02087d48(void);

u32 func_020873d8(u8 *param_1, u32 param_2, u32 param_3)
{
    s32 aiStack_5c[18];
    u32 uVar6;
    s32 iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 *puVar5;
    s64 uVar7;
    s64 uVar8;
    u8 *tp;
    s32 s20;
    s32 s28;
    s32 s24;

    tp = (u8 *)(*(u32 *)(param_1 + 0x24) + *(u32 *)(param_1 + 0x2c));
    tp = tp + 32;
    uVar6 = ((u32)tp + 31) & 0xffffffe0;
    if (uVar6 <= param_3) {
        puVar5 = (u32 *)((param_2 + 0x1f) & 0xffffffe0);
        func_02088364(aiStack_5c);
        s20 = *(s32 *)(param_1 + 0x20);
        iVar1 = func_020880e0(aiStack_5c, param_1, s20, s20 + *(s32 *)(param_1 + 0x24), -1);
        if (iVar1 != 0) {
            uVar7 = func_02087e90(aiStack_5c, (u32)puVar5, *(u32 *)(param_1 + 0x24));
            uVar2 = (u32)(uVar7 >> 32);
            if ((s32)uVar7 < 0) {
                uVar3 = *(u32 *)(param_1 + 0x24);
                uVar8 = func_0206c924(puVar5, 0, uVar3);
                uVar2 = (u32)(uVar8 >> 32);
            }
            func_02087fcc(aiStack_5c, uVar2);
        }
        *(u32 **)(param_1 + 0x20) = puVar5;
        s24 = *(s32 *)(param_1 + 0x24);
        s28 = *(s32 *)(param_1 + 0x28);
        puVar5 = (u32 *)((u8 *)puVar5 + s24);
        iVar1 = func_020880e0(aiStack_5c, param_1, s28, s28 + *(s32 *)(param_1 + 0x2c), -1);
        if (iVar1 != 0) {
            uVar7 = func_02087e90(aiStack_5c, (u32)puVar5, *(u32 *)(param_1 + 0x2c));
            uVar2 = (u32)(uVar7 >> 32);
            if ((s32)uVar7 < 0) {
                uVar3 = *(u32 *)(param_1 + 0x2c);
                uVar8 = func_0206c924(puVar5, 0, uVar3);
                uVar2 = (u32)(uVar8 >> 32);
            }
            func_02087fcc(aiStack_5c, uVar2);
        }
        *(u32 **)(param_1 + 0x28) = puVar5;
        *(u32 *)(param_1 + 0x38) = param_2;
        *(u32 *)(param_1 + 0x44) = (u32)func_02087d48;
        *(u32 *)(param_1 + 0x10) = *(u32 *)(param_1 + 0x10) | 4;
    }
    return uVar6;
}
