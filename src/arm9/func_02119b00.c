#include "ctx.h"

extern u8 data_0214aa04;
extern u8 data_0214aa0c;
extern u8 *data_0215bf9c;
extern void func_02112744(u32 a, void *b, u32 c);
extern void func_02112670(u32 a, void *b, u32 c);
extern void func_02112798(u32 a, u32 b, u32 c);

void func_02119b00(void)
{
    s32 iVar1;

    func_02112744(0, &data_0214aa04, 0);
    func_02112744(0, &data_0214aa0c, 0);
    func_02112670(0, &data_0214aa04, 1);
    func_02112670(0, &data_0214aa0c, 0);
    iVar1 = 0;
    do {
        func_02112798(0, (u16)(iVar1 + 2), 0);
        iVar1 = iVar1 + 1;
    } while (iVar1 < 10);
    func_02112798(0, 12, 0);
    func_02112798(0, 13, 0);
    *(u32 *)(data_0215bf9c + 0x19c) = 1;
}
