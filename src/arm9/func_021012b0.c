#include "ctx.h"

extern u8 *data_0215be4c;
extern void func_0211320c(u32 a, u32 b, u32 c, u32 d);

void func_021012b0(void)
{
    s32 iVar2;
    u8 *p;
    u8 *q;

    iVar2 = 0;
    p = data_0215be4c + 4;
    do {
        if (*(u32 *)(p + 4) != 0 && *(u32 *)(p + 8) == 0) {
            q = p + 24;
            if (*(u32 *)(q + 0x20) != 0) {
                *(u32 *)(q + 0x20) = 0;
                func_0211320c(*(u32 *)(q + 0), *(u32 *)(p + 0x10),
                              (u32)*(u16 *)(q + 28) << 5, *(u32 *)(p + 0x14));
            }
        }
        iVar2 = iVar2 + 1;
        p = p + 440;
    } while (iVar2 < 24);
}
