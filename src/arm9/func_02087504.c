#include "ctx.h"

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 s);
extern u8 func_02087328(s32 *p);
extern void func_02087248(s32 *p, s32 v);
extern void func_020872ac(s32 *p);

u32 func_02087504(s32 *param_1, u32 param_2, u32 param_3, s32 param_4)
{
    s32 *piVar4;
    s32 *piVar1;
    u32 bVar2;
    u32 uVar3;
    u32 s;

    s = func_02080b08();
    bVar2 = ((*(volatile s32 *)&param_1[4]) & 2) != 0;
    if (bVar2 != 0) {
        *(vu32 *)&param_1[4];
        bVar2 = func_02087328(param_1);
        uVar3 = param_1[4];
        param_1[4] = uVar3 | 0x80;
        piVar1 = (s32 *)param_1[6];
        while (piVar1 != NULL) {
            piVar4 = (s32 *)piVar1[1];
            func_02087248(piVar1, 3);
            piVar1 = piVar4;
        }
        param_1[6] = 0;
        if (bVar2 != 0) {
            func_020872ac(param_1);
        }
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[11] = 0;
        param_1[13] = 0;
        param_1[12] = param_1[13];
        param_1[4] = param_1[4] & 0xffffff5d;
    }
    func_02080b1c(s);
    return 1;
}
