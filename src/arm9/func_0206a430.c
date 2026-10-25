#include "ctx.h"
extern s32 func_0206a1c8(u32 *p);
extern s32 func_0206a19c(u32 *p);
void func_0206a430(void)
{
    vu32 *puVar1;
    vu32 *puVar2;
    s32 iVar3;
    u32 local_10;
    u32 local_c;
    *(vu32 *)0x04000600 = *(vu32 *)0x04000600 | 0x8000;
    do {
        iVar3 = func_0206a1c8(&local_10);
    } while (iVar3 != 0);
    do {
        iVar3 = func_0206a19c(&local_c);
        puVar1 = (vu32 *)0x04000440;
    } while (iVar3 != 0);
    *(vu32 *)0x04000440 = 3;
    *(vu32 *)0x04000454 = 0;
    *puVar1 = 0;
    puVar1 = (vu32 *)0x04000454;
    if (local_c != 0) {
        *(vu32 *)0x04000448 = local_c;
    }
    puVar2 = (vu32 *)0x04000440;
    *puVar1 = 0;
    *puVar2 = 2;
    *(vu32 *)0x04000448 = local_10;
    *puVar1 = 0;
}
