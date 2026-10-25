#include "ctx.h"

extern u8 data_0212aa78[];
extern u8 data_0212aa7a[];
extern u8 data_0212aa7c[];
extern u32 data_02150e7c;
extern u32 data_02150e6c;
extern u32 data_02150e80;
extern u32 data_02150e84;
extern s32 func_02068c08(void);

void func_0206bdf0(void)
{
    s32 idx = func_02068c08();
    u32 off = idx * 6;
    u16 a = *(u16 *)(data_0212aa78 + off);
    u16 b = *(u16 *)(data_0212aa7a + off);
    u16 c = *(u16 *)(data_0212aa7c + off);
    data_02150e7c = idx;
    data_02150e6c = (u32)a << 12;
    data_02150e80 = (u32)b << 12;
    data_02150e84 = (u32)c << 12;
}
