#include "ctx.h"

extern u32 data_0213e4dc;
extern void func_0206c180(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern void func_0206c3dc(u32 a, u32 b, u32 c, u32 d);
extern void func_0206c7f0(u32 a, u32 b, u32 c);

void func_0206a1f4(void)
{
    s32 i;

    if (data_0213e4dc != 0xffffffff) {
        func_0206c180(data_0213e4dc, 0x04000330, 0, 16, 0, 0);
        func_0206c3dc(data_0213e4dc, 0x04000360, 0, 96);
    } else {
        vu32 z1;
        vu32 z2;

        z1 = 0;
        func_0206c7f0(z1, 0x04000330, 16);
        z2 = 0;
        func_0206c7f0(z2, 0x04000360, 96);
    }
    for (i = 0; i < 32; i++) {
        *(vu32 *)0x040004d0 = 0;
    }
}
