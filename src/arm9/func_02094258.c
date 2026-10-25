#include "ctx.h"

extern u8 *data_02159034;
extern void func_0206c7d4(u32 a, u8 *b, u32 c);

void func_02094258(u32 p)
{
    u8 *g = data_02159034;
    u8 *iv = *(u8 **)(g + 0x1000 + 0x41c);
    func_0206c7d4(p, iv + 4, 92);
    *(u16 *)(iv + 0x600 + 0xae) = *(u16 *)(iv + 0x600 + 0xae) | 1;
}
