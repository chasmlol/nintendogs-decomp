#include "ctx.h"

extern u32 data_0213695c;
extern u32 data_0214e778;
typedef void (*FnV)(void);
u64 func_02080858(void);
u32 func_0205e068(u32 lo, u32 hi, u32 a, u32 b);

void func_02003efc(void)
{
    u64 t;
    u64 d;
    u64 x;
    u8 *p;

    ((FnV)(*(u32 *)((u8 *)&data_0213695c + 0xc)))();
    t = func_02080858();
    p = *(u8 **)&data_0214e778;
    *(u32 *)(p + 0x28) = *(u32 *)(p + 0x28) + 1;
    p = *(u8 **)&data_0214e778;
    x = *(u64 *)(p + 0xcc);
    d = t - x;
    *(u32 *)(p + 0xd8) = func_0205e068((u32)(d * 64000), (u32)((d * 64000) >> 32), 0x82ea, 0);
    p = *(u8 **)&data_0214e778;
    x = *(u64 *)(p + 0xc4);
    d = t - x;
    *(u32 *)(p + 0xdc) = func_0205e068((u32)(d * 64000), (u32)((d * 64000) >> 32), 0x82ea, 0);
}
