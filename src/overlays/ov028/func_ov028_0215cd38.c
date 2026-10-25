#include "ctx.h"
extern u8 data_ov028_0215df14[];
extern void func_0206f2bc(void);
extern void func_ov028_0215d614(u32 a);
extern void func_ov028_0215d628(u32 a);
extern void func_ov028_0215d8c4(void);
extern void func_ov028_0215c858(void);
extern void func_ov028_0215ca84(void);
void func_ov028_0215cd38(void)
{
    u32 uVar2;
    func_0206f2bc();
    uVar2 = (u32)func_ov028_0215c858;
    *(u32 *)(*(u8 **)data_ov028_0215df14 + 0x108) = 0;
    *(u32 *)(*(u8 **)data_ov028_0215df14 + 0x10c) = 0;
    func_ov028_0215d614(uVar2);
    func_ov028_0215d628((u32)func_ov028_0215ca84);
    func_ov028_0215d8c4();
}
