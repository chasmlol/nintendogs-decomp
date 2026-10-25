#include "ctx.h"

extern int func_0206a1c8(u32 *p);
extern int func_0206a19c(u32 *p);

void func_0206a384(void)
{
    u32 local_10;
    u32 local_c;
    int iVar2;
    vu32 *puVar1;

    *(vu32 *)0x04000600 |= 0x8000;
    do {
        iVar2 = func_0206a1c8(&local_10);
    } while (iVar2 != 0);
    do {
        iVar2 = func_0206a19c(&local_c);
        puVar1 = (vu32 *)0x04000440;
    } while (iVar2 != 0);
    *(vu32 *)0x04000440 = 3;
    *(vu32 *)0x04000454 = 0;
    *puVar1 = 0;
    if (local_c != 0) {
        *(vu32 *)0x04000448 = local_c;
    }
    *(vu32 *)0x04000440 = 2;
    puVar1 = (vu32 *)0x04000454;
    *(vu32 *)0x04000448 = local_10;
    *puVar1 = 0;
}
