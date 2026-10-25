#include "ctx.h"

extern u8 data_0214aa04[];
extern u8 data_0214aa0c[];
extern void func_02112744(u32 a, u32 b, u32 c);
extern void func_02112670(u32 a, u32 b, u32 c);
extern void func_02112798(u32 a, u32 b, u32 c);

void func_02119bd8(void)
{
    s32 i;
    func_02112744(0, (u32)data_0214aa04, 1);
    func_02112744(0, (u32)data_0214aa0c, 1);
    func_02112670(0, (u32)(vu8 *)data_0214aa04, 1);
    func_02112670(0, (u32)(vu8 *)data_0214aa0c, 0);
    i = 0;
    do {
        func_02112798(0, (u16)(i + 2), 0);
        i = i + 1;
    } while (i < 10);
    func_02112798(0, 12, 0);
    func_02112798(0, 13, 0);
}
