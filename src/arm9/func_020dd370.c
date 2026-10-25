#include "ctx.h"

extern u32 data_0215ae08;
extern u32 data_0215ae00;
extern u32 *func_0207d51c(u32 heap, u32 size, u32 align);
extern void func_020dc890(u32 *p);

u32 func_020dd370(u32 *param_1, u32 param_2)
{
    u32 *puVar1;
    u32 uVar3;

    if (param_1 != NULL) {
        u32 *puVar2;
        puVar1 = func_0207d51c(data_0215ae08, param_2 * 0x18 + 0x94, 4);
        *puVar1 = param_2;
        uVar3 = 0;
        if (uVar3 < param_2) {
            puVar2 = puVar1 + 0x25;
            do {
                func_020dc890(puVar2);
                uVar3 = uVar3 + 1;
                puVar2 = puVar2 + 6;
            } while (uVar3 < param_2);
        }
        puVar1[0x24] = data_0215ae00;
        puVar1[1] = 0;
        *param_1 = (u32)puVar1;
        return 1;
    }
    return 0;
}
