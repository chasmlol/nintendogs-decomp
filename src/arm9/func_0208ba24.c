#include "ctx.h"

extern u32 data_0213eb7c[];
extern u32 data_0213eb80[];
extern u8 *data_02157cc8;
extern u32 *func_0208c720(u32 *a, u32 *b, u32 *c, u32 d);

void func_0208ba24(u32 *p0, u32 p1, u32 p2, u32 p3)
{
    u32 *r = func_0208c720(p0, data_0213eb7c, data_0213eb80, p3);
    *(u32 **)(data_02157cc8 + 0x10) = r;
}
