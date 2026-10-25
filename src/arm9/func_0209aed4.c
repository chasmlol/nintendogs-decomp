#include "ctx.h"

extern u8 data_02159074;
extern void func_0209eff4(void);
extern void func_020a2574(void);
extern void func_020a39c0(void);
extern void func_0206fe48(u32 a, s32 b);

void func_0209aed4(void)
{
    u8 *iVar1;
    u32 uVar2;
    s32 iVar3;

    iVar1 = &data_02159074;
    func_0209eff4();
    func_020a2574();
    func_020a39c0();
    iVar3 = *(u16 *)(iVar1 + 0x1a) + 1;
    *(u16 *)(iVar1 + 0x1a) = (u16)iVar3;
    if (*(u16 *)(iVar1 + 0x1a) >= 3) {
        *(u16 *)(iVar1 + 0x1a) = 0;
    }
    uVar2 = *(u32 *)(iVar1 + 0x38);
    if (uVar2 != 0) {
        *(u16 *)(iVar1 + 0x3c) = *(u16 *)(iVar1 + 0x3c) + 1;
        uVar2 = *(u16 *)(iVar1 + 0x3c);
        if (uVar2 > 3600) {
            uVar2 = 0;
            *(u16 *)(iVar1 + 0x3c) = 0;
            *(u32 *)(iVar1 + 0x38) = 0;
        }
    }
    func_0206fe48(uVar2, iVar3);
}
