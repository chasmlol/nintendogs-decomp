#include "ctx.h"

extern u32 data_0215ae30;
extern u32 data_0215ae80;
extern u32 data_0215ae34;
extern void func_020e0114(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern void func_020e01a8(u32 a, u32 b, u32 c, u32 d);
extern void func_02072fe4(void *a, u32 b, u32 c);
extern void func_02070b20(void *a, u32 b);

void func_020deb8c(void)
{
    func_020e0114(data_0215ae30, 1, 0, 8000, 0, data_0215ae80);
    func_020e01a8(57, 1, 60, data_0215ae30);
    func_02072fe4(&data_0215ae34, 19, 124);
    func_02070b20(&data_0215ae34, 64);
}
