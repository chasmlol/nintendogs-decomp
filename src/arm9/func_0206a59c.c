#include "ctx.h"

extern void func_0206a4e0(void);
extern void func_0206a430(void);
extern void func_0206a1f4(void);

void func_0206a59c(void)
{
    u32 uVar4;
    u32 uVar5;
    vu32 *puVar1;
    vu16 *puVar2;

    func_0206a4e0();
    *(vu32 *)0x04000504 = 0;
    puVar1 = (vu32 *)0x04000600;
    puVar2 = (vu16 *)0x04000060;
    while (*puVar1 & 0x8000000) {
    }
    *puVar2 = 0;
    *puVar1 = 0;
    *(vu32 *)0x04000010 = 0;
    uVar5 = 0xcffb;
    uVar4 = 0xffffcffd;
    *puVar2 = *puVar2 | 0x2000;
    *puVar2 = *puVar2 | 0x1000;
    *puVar2 = *puVar2 & uVar4;
    *puVar2 = (*puVar2 & ~0x3000) | 0x10;
    *puVar2 = *puVar2 & uVar5;
    *puVar1 = *puVar1 | 0x8000;
    *puVar1 = (*puVar1 & 0x3fffffff) | 0x80000000;
    func_0206a430();
    *(vu32 *)0x04000350 = 0;
    *(vu16 *)0x04000354 = 0x7fff;
    *(vu16 *)0x04000356 = 0;
    *(vu32 *)0x04000358 = 0;
    *(vu16 *)0x0400035c = 0;
    *(vu16 *)0x04000008 = *(vu16 *)0x04000008 & ~3;
    func_0206a1f4();
    *(vu32 *)0x040004a4 = 0x001f0080;
    *(vu32 *)0x040004a8 = 0;
    *(vu32 *)0x040004ac = 0;
}
