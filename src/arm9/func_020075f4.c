#include "ctx.h"

extern u8 data_0214f138;
extern void func_02007624(void *p, u32 b, u32 c, u32 d);

void func_020075f4(u32 a, u32 b, u32 c)
{
    void (*fp)(void *, u32, u32, u32) = func_02007624;
    fp(&data_0214f138, b, c, a);
}
