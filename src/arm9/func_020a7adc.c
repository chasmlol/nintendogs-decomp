#include "ctx.h"
extern u8 data_0215942c[];
extern void func_020a85c4(u16 *p, u32 n);
void func_020a7adc(void)
{
    u16 *puVar3;
    u8 *iVar2;
    u8 *sub;
    puVar3 = *(u16 **)data_0215942c;
    func_020a85c4(puVar3, 0xd);
    puVar3[2] = 8;
    iVar2 = *(u8 **)data_0215942c;
    *(u16 *)(iVar2 + 0x20) = *(u16 *)(iVar2 + 0x20) | 1;
    *(u16 *)(iVar2 + 0x20) = *(u16 *)(iVar2 + 0x20) | 2;
    iVar2 = *(u8 **)data_0215942c;
    sub = iVar2 + 0x20;
    *(u16 *)(sub + 0x14) = *(u16 *)(sub + 0x14) | 1;
    *(u16 *)(sub + 0x14) = *(u16 *)(sub + 0x14) | 2;
    iVar2 = *(u8 **)data_0215942c;
    sub = iVar2 + 0x20;
    *(u16 *)(sub + 0x28) = *(u16 *)(sub + 0x28) | 1;
    *(u16 *)(sub + 0x28) = *(u16 *)(sub + 0x28) | 2;
    puVar3[0xe] = 0;
}
