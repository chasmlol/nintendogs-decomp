#include "ctx.h"

extern u16 data_021560d0;
extern u8 data_021560d4[];
extern u8 data_021560e4[];
extern u8 data_02156124[];
void func_0206552c(u32 a);
void func_0207ef68(u32 a);
void func_020892ac(u8 *a);
void func_0207ee54(u32 a);
void func_0206551c(u32 a);

void func_020892f8(void)
{
    u16 uVar1;
    u8 *puVar2;
    u8 *iVar3;
    u32 uVar4;

    uVar1 = data_021560d0;
    iVar3 = data_021560d4;
    puVar2 = data_021560e4;
    uVar4 = (u32)data_02156124;
    *(u32 *)(iVar3 + 4) = (u32)puVar2;
    *(u32 *)(iVar3 + 8) = uVar4;
    puVar2[0] = 2;
    puVar2[1] = 3;
    puVar2[2] = 1;
    func_0206552c(uVar1);
    func_0207ef68(data_021560d0);
    iVar3 = data_021560d4;
    *(u16 *)0x040001a0 = 0xa040;
    func_020892ac(iVar3);
    func_020892ac(data_021560d4);
    iVar3 = data_021560d4;
    *(u16 *)0x040001a0 = 0xa000;
    func_020892ac(iVar3);
    func_0207ee54(data_021560d0);
    func_0206551c(data_021560d0);
}
