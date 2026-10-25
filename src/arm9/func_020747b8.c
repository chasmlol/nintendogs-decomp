#include "ctx.h"

extern void func_020776d4(u32 a, void *b, u32 c);
extern void func_02066664(void *a, void *b);
extern u8 data_02152cdc[];
extern u8 data_02152d24[];
extern u8 data_02152d94[];
extern u8 data_02152cd8[];
extern u8 data_02152d54[];
extern u8 data_02152dd0[];

void func_020747b8(void)
{
    u32 local_38;
    u32 auStack_34[12];
    u32 base;
    u32 v;

    func_020776d4(0x1610, data_02152cdc, 17);
    func_020776d4(25, data_02152d24, 12);
    func_020776d4(0x1b19, data_02152d94, 15);
    local_38 = 2;
    func_020776d4(16, &local_38, 1);
    func_02066664(data_02152d94, auStack_34);
    func_020776d4(23, auStack_34, 12);
    base = (u32)data_02152d54;
    base += 4;
    func_020776d4(*(u32 *)(data_02152cd8 + 0x7c), (void *)base, 14);
    func_020776d4(21, 0, 0);
    func_020776d4(42, data_02152dd0, 1);
    v = *(u32 *)(data_02152cd8 + 0xfc) | 1;
    *(u32 *)(data_02152cd8 + 0xfc) = v;
    *(u32 *)(data_02152cd8 + 0xfc) = v & ~2;
}
