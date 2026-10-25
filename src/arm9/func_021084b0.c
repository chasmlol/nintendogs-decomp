#include "ctx.h"

extern u32 data_02159424;
extern u32 data_0215be48;
extern u32 data_0215bf9c;
void func_0210a854(u32 v);

void func_021084b0(void)
{
    u8 *q;
    u32 a;
    u32 b;
    u32 c;
    s32 d;
    u8 *p;
    u32 *w;

    q = *(u8 **)(*(u8 **)&data_02159424 + 0x34);
    a = q ? *(s16 *)(q + 0x12) : 0;
    b = q ? *(s16 *)(q + 0x14) : 0;
    c = q ? *(s16 *)(q + 0x16) : 0;
    d = q ? *(s16 *)(q + 0x10) : 0;
    if (*(u32 *)(*(u8 **)&data_0215be48 + 0xa8) == 6) {
        p = *(u8 **)&data_0215bf9c;
        *(u32 *)(p + 0x184) = a / 10;
        w = (u32 *)(p + 0x184);
        w[1] = b / 10;
        w[2] = c / 10;
        w[3] = d;
        func_0210a854(10);
    }
}
