#include "ctx.h"

extern u32 data_0215bfb4;
extern u32 data_0215bfb0;
extern u32 data_0215bfb8;
extern u16 data_021483d8;
extern u16 data_0215bfa4;
extern u16 data_0215bfa8;
extern u32 data_021482e0;
extern u16 data_0215bfa0;
extern u16 data_0215bfac;

void func_021044ec(void);
void func_0210d080(u8 *p);

void func_0210cd54(u8 *param_1, u32 param_2)
{
    s32 iVar8;
    u16 sVar1;
    u16 sVar2;
    u32 *puVar10;

    func_021044ec();
    data_0215bfb4 = param_2;
    data_0215bfb0 = (u32)param_1;
    iVar8 = *(u16 *)(param_1 + 0x30) - 1;
    data_0215bfb8 = iVar8;
    if (iVar8 < 0) {
        return;
    }
    data_0215bfa4 = ((u16 *)&data_021483d8)[iVar8];
    sVar1 = data_0215bfa4;
    data_0215bfa8 = 0;
    data_021482e0 = 1;
    do {
        puVar10 = (u32 *)data_0215bfb4;
        data_0215bfa0 = *(u16 *)(*puVar10);
        sVar2 = data_0215bfa0;
        data_0215bfac = *(u16 *)(puVar10[1]);
        if (sVar2 == 0) {
            data_021482e0 = 0;
        } else if (sVar2 == sVar1) {
            data_0215bfa8 = data_0215bfac;
            data_021482e0 = 0;
        } else if (data_0215bfac == sVar1) {
            data_0215bfa8 = sVar2;
            data_021482e0 = 0;
        }
        data_0215bfb4 = data_0215bfb4 + 8;
    } while (data_021482e0 != 0);
    if (data_0215bfa8 != 0) {
        ((u16 *)&data_021483d8)[iVar8] = data_0215bfa8;
        func_0210d080(param_1);
        return;
    }
}
