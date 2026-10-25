#include "ctx.h"

extern u32 data_02159468;
extern void func_0208daf8(u32 a, u32 b);

void func_020bcbf0(u32 a)
{
    void (*fp)(u32, u32) = func_0208daf8;
    u32 first = *(u32 *)(*(u8 **)&data_02159468 + 0x28);
    fp(first, a);
}
