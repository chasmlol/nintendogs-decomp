#include "ctx.h"

extern u8 *data_02159034;
extern void func_0206c7d4(u32 a, u32 b, u32 c);

void func_0209323c(u32 param_1)
{
    u8 *q = data_02159034 + 0x1000;
    u8 *b = *(u8 **)(q + 0x41c);
    func_0206c7d4(param_1, (u32)(b + 180), 68);
    *(u16 *)(b + 1536 + 174) = *(u16 *)(b + 1536 + 174) | 1;
}
