#include "ctx.h"
extern u8 *data_02159428;
extern u32 data_02142bd0;
extern void func_020cdc04(u32 a, u32 *b, u32 c, u32 d, u32 e);
void func_020c9198(u32 *p0, u16 p1)
{
    u32 loc[3];
    loc[0] = 0;
    loc[1] = 0;
    loc[2] = 0;
    func_020cdc04((u32)p0, loc, *(u32 *)(data_02159428 + 0xc), 0, p1);
    p0[1] = 0x1e000;
    p0[3] = 0;
    p0[4] = 0;
    p0[5] = 0;
    p0[6] = 0;
    p0[7] = 0x1000;
    p0[8] = 0;
    p0[9] = data_02142bd0;
}
