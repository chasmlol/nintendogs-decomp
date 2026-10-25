#include "ctx.h"
extern u8 data_02155cec[];
extern u8 data_02155d0c[];
extern void func_02080b08(void);
extern void func_02080b84(void);
extern void func_0207ff08(u8 *p);
extern void func_0207f8a0(u8 *p);
extern u64 func_0207f4e0(u16 *p);
extern void func_0207f3a0(u32 a, u32 b);
void func_0207f5bc(void)
{
    u8 *iVar2;
    u64 uVar3;
    func_02080b08();
    iVar2 = *(u8 **)(*(u8 **)data_02155cec);
    func_0207ff08(iVar2);
    func_0207f8a0(iVar2);
    ((u32 *)data_02155d0c)[*(s32 *)(iVar2 + 0x6c)] = 0;
    *(u32 *)(iVar2 + 100) = 2;
    uVar3 = func_0207f4e0((u16 *)(iVar2 + 0x90));
    func_0207f3a0((u32)uVar3, (u32)(uVar3 >> 32));
    func_02080b84();
}
