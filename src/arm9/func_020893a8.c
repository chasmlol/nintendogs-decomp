#include "ctx.h"

extern u16 data_021560d0;
extern u8 data_021560e4[];
extern u8 data_021560d4[];
extern u8 data_02156124;
extern void func_0206552c(u32 a);
extern void func_0207ef68(u32 a);
extern void func_020892ac(void *a);
extern void func_02089268(void *a);
extern void func_0207ee54(u32 a);
extern void func_0206551c(u32 a);

u8 func_020893a8(void)
{
    u16 uVar1;

    uVar1 = data_021560d0;
    *(u32 *)(data_021560d4 + 4) = (u32)data_021560e4;
    *(u32 *)(data_021560d4 + 8) = (u32)&data_02156124;
    data_021560e4[0] = 3;
    data_021560e4[1] = 3;
    data_02156124 = 0;
    func_0206552c(uVar1);
    func_0207ef68(data_021560d0);
    *(vu16 *)0x040001a0 = 0xa040;
    func_020892ac(data_021560d4);
    func_020892ac(data_021560d4);
    *(vu16 *)0x040001a0 = 0xa000;
    func_02089268(data_021560d4);
    func_0207ee54(data_021560d0);
    func_0206551c(data_021560d0);
    return data_02156124;
}
