#include "ctx.h"

extern u16 *data_0215942c;

void *func_020038b8(void *p, u32 size);
void func_020a85c4(u16 *p, u32 v);

u16 *func_020a8594(void *param_1)
{
    u16 *puVar1 = (u16 *)func_020038b8(param_1, 0x5c);

    func_020a85c4(puVar1, 0);
    data_0215942c = puVar1;
    return puVar1;
}
