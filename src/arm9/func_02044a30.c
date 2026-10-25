#include "ctx.h"
extern u8 *data_0214f464;
extern void func_0206c7d4(u32 a, u32 b, u32 c);
void func_02044a30(s16 p0, u32 p1)
{
    u8 *b = data_0214f464;
    func_0206c7d4(p1, (u32)(u8 *)(b + 0x1a4) + (s32)p0 * 0x85c, 0x85c);
}
