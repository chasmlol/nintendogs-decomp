#include "ctx.h"

extern u32 data_02150f54;
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 irq);
extern s32 *func_0206fd10(void);

u32 func_0206f878(u32 param_1)
{
    u32 i;
    u32 uVar4 = 0;
    u32 irq;
    s32 *piVar3;
    u32 uVar1;
    u16 uVar2;
    void (*cb)(s32 *);

    irq = func_02080b08();
    if (data_02150f54 == 1) {
        piVar3 = func_0206fd10();
        if (*piVar3 != 0) {
            i = 0;
            do {
                uVar1 = 1 << i;
                uVar2 = (u16)uVar1;
                if ((param_1 & (*(u16 *)(piVar3 + 2) & uVar2)) != 0) {
                    u16 *hp = (u16 *)(piVar3 + 2);
                    uVar4 = 1;
                    *hp = *hp & ~uVar2;
                    piVar3[1] = 0x10;
                    *(u16 *)((u8 *)piVar3 + 10) = uVar2;
                    cb = (void (*)(s32 *))piVar3[4];
                    if (cb != 0) {
                        cb(piVar3);
                    }
                }
                i = i + 1;
            } while ((s32)i < 0x10);
            *piVar3 = 0;
        }
    }
    func_02080b1c(irq);
    return uVar4;
}
