#include "ctx.h"

extern void func_02026c24(u8 *p);
extern u8 func_02025548(u8 *p);

void func_ov003_0216fd58(u8 *p)
{
    *(s16 *)(p + 0x152) = 0x17d;
    func_02026c24(p);
    func_02025548(p);
    *(u32 *)(p + 0x948) = *(u32 *)(p + 0x948) | 1;
}
