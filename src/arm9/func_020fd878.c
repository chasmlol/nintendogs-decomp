#include "ctx.h"

extern u32 data_0215be48;
extern void func_0210a5e4(void);
extern void func_0207c910(s32 a, s32 b, s32 c, s32 d);
extern void func_0210167c(s32 a);
extern void func_021012b0(void);
extern void func_0210b780(s32 a, s32 b, u16 *c, u8 *d, s32 e);

void func_020fd878(void)
{
    s32 k14;
    s32 k32;
    u32 *pd;
    s32 *piVar6;
    s32 i;
    s32 zero;
    s32 k19;
    u8 *base;
    u8 *base2;
    s32 *pB;
    s32 *pB2;
    s32 iVar4;
    s32 iVar2;
    u16 *puVar3;

    func_0210a5e4();
    asm { ldr pd, =data_0215be48 }
    piVar6 = (s32 *)(*(u8 **)pd + 0x1dec);
    piVar6 = (s32 *)((u8 *)piVar6 + 0x294);
    piVar6 = (s32 *)((u8 *)piVar6 + 72);
    i = 0;
    asm { mov zero, i }
    k19 = 19;
    k14 = 14;
    k32 = 32;
    do {
        if (piVar6[0] != 0) {
            piVar6[0] = zero;
            func_0207c910(k19, *(s32 *)(*(u8 **)pd + 0x4840) + piVar6[6] * 0x80, piVar6[1], piVar6[5]);
            func_0207c910(k14, piVar6[7] << 5, piVar6[4], k32);
        }
        i = i + 1;
        piVar6 = piVar6 + 8;
    } while (i < 18);
    func_0210167c(1);
    func_021012b0();
    base = (u8 *)data_0215be48;
    pB = (s32 *)(base + 0x1dec);
    pB = (s32 *)((u8 *)pB + 0x294);
    iVar4 = pB[3];
    puVar3 = *(u16 **)(base + 0x1de4);
    if (iVar4 != 0) {
        iVar2 = pB[2];
        if (iVar2 != 0) {
            func_0210b780(iVar4, iVar2, puVar3, (u8 *)((u32)base + 0x283c) + 0x800, *(u32 *)(base + 0x4840) >> 7);
        }
    }
    base2 = (u8 *)data_0215be48;
    pB2 = (s32 *)(base2 + 0x1dec);
    iVar4 = pB2[3];
    puVar3 = *(u16 **)(base2 + 0x1de4);
    if (iVar4 == 0) return;
    iVar2 = pB2[2];
    if (iVar2 == 0) return;
    func_0210b780(iVar4, iVar2, puVar3, base2 + 0x283c, *(u32 *)(base2 + 0x483c) >> 7);
}
