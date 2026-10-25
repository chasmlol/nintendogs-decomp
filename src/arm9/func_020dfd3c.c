#include "ctx.h"
extern u32 data_02144a78;
extern u8 data_0215b23c[];
extern u8 data_0215b234[];
extern u8 data_0215b258[];
extern u8 data_0215b230[];
extern void func_0200217c(void);
extern void func_02002cc8(void);
extern void func_02002764(u32 a);
extern void func_0200274c(u32 a);

u8 *func_020dfd3c(u32 param_1, u32 param_2)
{
    u8 *base;
    u16 z;
    z = 0;
    func_0200217c();
    func_02002cc8();
    func_02002764(1);
    func_0200274c(data_02144a78);
    base = data_0215b23c;
    *(u32 *)(base + 0) = 3;
    *(u32 *)(base + 4) = param_1;
    *(u32 *)(base + 8) = param_2;
    *(u32 *)(base + 12) = 0x105d;
    *(u32 *)(base + 16) = 1;
    *(u32 *)(base + 20) = 0;
    *(u32 *)data_0215b234 = 1;
    *(u16 *)data_0215b258 = z;
    *(u16 *)(data_0215b258 + 4) = z;
    *(u16 *)(data_0215b258 + 2) = z;
    *(u32 *)data_0215b230 = 0;
    return base;
}
