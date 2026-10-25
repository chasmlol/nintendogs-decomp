#include "ctx.h"

extern u16 data_02150ea8;
extern u32 data_02150eac;
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 a);
extern void func_0207eb98(u32 a);
extern void func_0207eda4(u32 a, u32 b);
extern void func_0207ec14(u32 a);
extern void func_0206cc94(void);

void func_0206cf00(void)
{
    u32 uVar1;
    vu16 *puVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;
    u32 uVar6;
    u32 *base;

    uVar6 = func_02080b08();
    base = (u32 *)0x027ffc00;
    if (data_02150ea8 != 0) {
        goto done;
    }
    data_02150ea8 = 1;
    iVar4 = 0;
    base[0xe2] = 0;
    do {
        (&data_02150eac)[iVar4] = 0;
        iVar4 = iVar4 + 1;
    } while (iVar4 < 0x20);
    *(u16 *)0x04000184 = (u16)0xc408;
    func_0207eb98(0x40000);
    func_0207eda4(0x40000, (u32)func_0206cc94);
    func_0207ec14(0x40000);
    puVar2 = (vu16 *)0x04000180;
    iVar4 = 0;
top:
    uVar1 = *puVar2;
    uVar5 = uVar1 & 0xf;
    *puVar2 = uVar5 << 8;
    if (uVar5 != 0) {
        goto inner;
    }
    if (iVar4 > 4) {
        goto done;
    }
inner:
    iVar3 = 1000;
    uVar1 = *puVar2;
    while ((uVar1 & 0xf) == uVar5) {
        if (iVar3 <= 0) {
            iVar4 = 0;
            goto next;
        }
        iVar3 = iVar3 - 1;
        uVar1 = *puVar2;
    }
next:
    iVar4 = iVar4 + 1;
    goto top;
done:
    func_02080b1c(uVar6);
}
