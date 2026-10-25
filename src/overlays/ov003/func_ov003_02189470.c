#include "ctx.h"

extern void func_ov003_021894ec(void);

void func_ov003_02189470(u8 *p)
{
    void (*fp)(void *, u32, u32, u32) = (void (*)(void *, u32, u32, u32))func_ov003_021894ec;
    u32 flag = *(u16 *)(p + 0xfc) > 60;
    fp(p, 3, 31, flag);
}
