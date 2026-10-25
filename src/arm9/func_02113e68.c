#include "ctx.h"

extern u32 data_0215be48;
extern u32 data_02148ba4;
extern u32 data_02148b80;
extern u32 data_02148b90;
extern u32 data_02148ba0;
extern void func_020fc76c(u32, u32, u32, u32, u32);

void func_02113e68(void)
{
    u32 *gp = &data_0215be48;
    u8 *g;
    g = (u8 *)*gp;
    *(u32 *)(g + 0xc838) = 3;
    g = (u8 *)*gp;
    *(u32 *)(g + 0xc83c) = 0;
    func_020fc76c(16, (u32)&data_02148b80, (u32)&data_02148b90, (u32)&data_02148ba0, (u32)&data_02148ba4);
}
