#include "ctx.h"

typedef void (*Fn1)(u32 a);
typedef void (*Fn2)(u8 *p, u32 *q);

extern u32 func_0208278c(u32 a);
extern void func_02082788(u32 a);
extern void func_02082b08(u8 *p, u32 *q);
extern void func_020838e4(u32 a);
extern void func_020831c8(u8 *p, u32 *q);

void func_02081d34(u8 *param_1)
{
    u32 iVar5;
    u32 *piVar3;
    Fn2 pcVar2;
    Fn1 pcVar4;
    u32 uVar1;
    u32 *piVar6;

    iVar5 = *(u32 *)(param_1 + 0x34);
    piVar3 = (u32 *)**(u32 ***)(iVar5 + 0x18);
    pcVar2 = 0;
    func_0208278c(*((u8 *)piVar3 + 0x43) * 20 + *(u32 *)(param_1 + 0x20));
    uVar1 = (*piVar3 << 26) >> 30;
    if (uVar1 == 0) {
        goto c0;
    }
    if (uVar1 == 1) {
        goto c1;
    }
    if (uVar1 == 2) {
        pcVar2 = (Fn2)func_02082b08;
    }
    goto sel;
c0:
    pcVar2 = (Fn2)func_020838e4;
    goto sel;
c1:
    pcVar2 = (Fn2)func_020831c8;
sel:
    pcVar4 = (((*(vu32 *)piVar3 << 20) >> 31) != 0) ? (Fn1)func_0208278c : (Fn1)func_02082788;
    piVar6 = *(u32 **)(iVar5 + 8);
    if (piVar6 == 0) {
        return;
    }
    do {
        pcVar4(*((u8 *)piVar6 + 0x42) * 20 + *(u32 *)(param_1 + 0x20));
        pcVar2(param_1, piVar6);
        piVar6 = (u32 *)*piVar6;
    } while (piVar6 != 0);
}
