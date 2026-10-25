#include "ctx.h"

extern u16 *data_0215942c;
extern void func_020a85c4(u16 *p, u32 v);

void func_020a7e54(s32 *param_1, u16 param_2, u16 param_3)
{
    s16 sVar1;
    u8 *ent;
    u16 *puVar4;

    puVar4 = data_0215942c;
    func_020a85c4(puVar4, 8);
    puVar4[2] = 7;
    puVar4[7] = param_2;
    puVar4[8] = param_3;
    sVar1 = (s16)puVar4[7];
    ent = (u8 *)puVar4 + 32 + sVar1 * 20;
    *(u16 *)ent = *(u16 *)ent | 1;
    *(s16 *)(ent + 2) = sVar1;
    if (param_1 != NULL) {
        *param_1 = 0x42415448;
        *(u16 *)((u8 *)param_1 + 4) = 0;
    }
}
