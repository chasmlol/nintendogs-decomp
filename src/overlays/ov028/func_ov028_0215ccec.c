#include "ctx.h"

extern u32 data_ov028_0215df14;
extern void func_0206f878(u32 a);
extern void func_0206f2bc(void);
extern void func_ov028_0215d76c(void);

void func_ov028_0215ccec(void)
{
    func_0206f878(0xffff);
    func_0206f2bc();
    *(u32 *)*(u8 **)&data_ov028_0215df14 = 0;
    *(u32 *)(*(u8 **)&data_ov028_0215df14 + 0x108) = 0;
    *(u32 *)(*(u8 **)&data_ov028_0215df14 + 0x10c) = 0;
    func_ov028_0215d76c();
}
