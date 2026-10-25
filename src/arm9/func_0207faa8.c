#include "ctx.h"

extern u32 func_0207ee60(void);
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 irq);
extern u16 func_0207eef8(u32 p);
extern s32 func_0207efb4(u16 idx);
extern void func_0207efd4(u16 idx);

u32 func_0207faa8(void)
{
    u32 uVar6;
    u32 bVar1 = 0;
    u16 idx;
    s32 iVar5;
    s32 iVar4;
    u32 irq;
    u16 uVar2;

    idx = (u16)func_0207ee60();
    uVar6 = bVar1;
    do {
        iVar5 = -1;
        irq = func_02080b08();
        uVar2 = func_0207eef8(0x027fffe8);
        if ((uVar2 & 0x40) == 0) {
            iVar4 = func_0207efb4(idx);
            iVar5 = iVar4;
            if (iVar4 == 0) {
                goto lab;
            }
        } else {
lab:
            if (*(vu32 *)0x08000000 == 0x544e494e && *(u32 *)0x08000004 == 0x4f444e45) {
                uVar6 = 0x1000000;
            } else {
                uVar6 = 0x2000000;
            }
            if (iVar5 == 0) {
                func_0207efd4(idx);
                bVar1 = 1;
            }
        }
        func_02080b1c(irq);
        if (bVar1) {
            return uVar6;
        }
    } while (1);
}
