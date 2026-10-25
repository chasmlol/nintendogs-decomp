#include "ctx.h"

extern void func_020778d0(void);
extern s32 func_0206a33c(u32 *p);
extern void func_020673d0(u32 *a, u32 *b);
extern s32 func_0206a2f4(u32 *p);

void func_02077d20(u32 *param_1, u32 *param_2)
{
    u32 auStack_50[16];
    s32 iVar3;
    func_020778d0();
    *(vu32 *)0x04000440 = 0;
    *(vu32 *)0x04000444 = 0;
    *(vu32 *)0x04000454 = 0;
    if (param_1 != 0) {
        do {
            iVar3 = func_0206a33c(auStack_50);
        } while (iVar3 != 0);
        func_020673d0(auStack_50, param_1);
    }
    if (param_2 != 0) {
        do {
            iVar3 = func_0206a2f4(param_2);
        } while (iVar3 != 0);
    }
    *(vu32 *)0x04000448 = 1;
    *(vu32 *)0x04000440 = 2;
}
