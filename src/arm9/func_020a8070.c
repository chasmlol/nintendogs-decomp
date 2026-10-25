#include "ctx.h"

extern u16 *data_0215942c;
extern void func_020a85c4(u16 *p, u32 v);

void func_020a8070(u32 *param_1, u16 param_2)
{
    s32 iVar2;
    u16 *puVar1;
    u16 *puVar3;

    puVar3 = data_0215942c;
    func_020a85c4(puVar3, 2);
    iVar2 = 0;
    puVar3[2] = 0;
    puVar1 = puVar3 + 0x10;
    do {
        *puVar1 = *puVar1 | 1;
        puVar1[1] = (u16)iVar2;
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 10;
    } while (iVar2 < 3);
    if (param_1 != NULL) {
        *param_1 = 0x4453454c;
        *(u16 *)((u8 *)param_1 + 4) = param_2;
        *(s16 *)((u8 *)param_1 + 6) = -1;
        *(s16 *)((u8 *)param_1 + 8) = -1;
        return;
    }
    return;
}
