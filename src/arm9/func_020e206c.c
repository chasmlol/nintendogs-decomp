#include "ctx.h"

extern u32 data_0215b754;

u32 func_0207fcb0(u32 *a, u32 *b, u32 c);

u32 func_020e206c(void)
{
    u32 v;

    func_0207fcb0(&data_0215b754, &v, 0);
    return ((v & 0xffffff) == 0x46494e) ? (v & 0xf0000000) : 0;
}
