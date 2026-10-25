#include "ctx.h"

extern u8 data_02144974;
extern void func_020650e8(void);
extern void func_020d6a60(u8 *p, u32 fn, u32 a, u32 b);

void func_020d69d8(u32 a, u32 b)
{
    func_020d6a60(&data_02144974, (u32)func_020650e8, a, b);
}
