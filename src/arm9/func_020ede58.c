#include "ctx.h"
extern void func_0209ab28(s32 a);
extern void func_0209e038(s32 a);
extern void func_0209e894(s32 a, s32 b);
extern void func_0209e524(void);
extern void func_0209aa84(void);

/* a32: the smull writes its high word straight into iVar3 (the asm output is the variable), so
   the asr and the sum update iVar3 in place as the target's asr lr,lr,#11 and adds lr,r1,lr do.
   Otherwise as a27 (the product is a variable, the out-of-range exits are separate copies). */
void func_020ede58(u8 *param_1)
{
    u8 *iVar4;
    s32 iVar3;
    u32 uVar1;
    s32 iVar2;
    s32 sc;
    s32 prod;
    s32 lo;
    s32 k;

    iVar4 = *(u8 **)(param_1 + 0x214);
    uVar1 = *(u16 *)(iVar4 + 0x1c);
    if (uVar1 < 0xeef) {
        goto r11c;
    }
    if (uVar1 > 0x20b6) {
        goto r11c;
    }
    k = 0x7333eb87;
    sc = *(s16 *)(iVar4 + 6);
    prod = sc * (s32)(uVar1 + 0xfffff111);
    iVar3 = prod / 4551;
    if (iVar3 < 0) {
        goto rf8;
    }
    if (iVar3 >= sc) {
        goto rf8;
    }
    if (*(s16 *)(iVar4 + 2) == 2) {
        iVar2 = *(s32 *)(iVar4 + 0x14);
        if (iVar2 <= 0) {
            iVar2 = -iVar2;
        }
        if (iVar2 < 0x71c) {
            if (*(s32 *)(iVar4 + 0x54) != 0) {
                if (*(s32 *)(iVar4 + 0x58) != 0) {
                    func_0209e038(0);
                    *(s32 *)(iVar4 + 0x58) = 0;
                }
                return;
            }
            func_0209ab28((s16)iVar3);
            return;
        }
    }
    if (*(s32 *)(iVar4 + 0x54) != 0) {
        func_0209e894(*(s16 *)(param_1 + 0x94), (s16)iVar3);
        return;
    }
    func_0209ab28((s16)iVar3);
    return;
rf8:
    if (*(s32 *)(iVar4 + 0x54) != 0) {
        func_0209e524();
        return;
    }
    func_0209aa84();
    return;
r11c:
    if (*(s32 *)(iVar4 + 0x54) != 0) {
        func_0209e524();
        return;
    }
    func_0209aa84();
    return;
}
