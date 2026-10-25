#include "ctx.h"

extern u16 *data_0215942c;
extern void func_020a85c4(u16 *p, s32 v);

void func_020a7a48(void)
{
    u16 *puVar3;
    u8 *iVar2;
    u8 *q;

    puVar3 = data_0215942c;
    func_020a85c4(puVar3, 0x12);
    puVar3[2] = 8;
    iVar2 = *(u8 **)&data_0215942c;
    *(u16 *)(iVar2 + 0x20) = *(u16 *)(iVar2 + 0x20) | 1;
    *(u16 *)(iVar2 + 0x20) = *(u16 *)(iVar2 + 0x20) | 2;
    iVar2 = *(u8 **)&data_0215942c;
    q = iVar2 + 0x20;
    *(u16 *)(q + 20) = *(u16 *)(q + 20) | 1;
    *(u16 *)(q + 20) = *(u16 *)(q + 20) | 2;
    iVar2 = *(u8 **)&data_0215942c;
    q = iVar2 + 0x20;
    *(u16 *)(q + 40) = *(u16 *)(q + 40) | 1;
    *(u16 *)(q + 40) = *(u16 *)(q + 40) | 2;
    puVar3[0xe] = 0;
}
