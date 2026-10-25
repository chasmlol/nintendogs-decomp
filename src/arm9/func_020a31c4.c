#include "ctx.h"
extern u8 data_021593c0[];
extern void func_02070c18(u32 a, u32 b);
extern void func_02070b30(u32 a);
void func_020a31c4(void)
{
    u8 *g = data_021593c0;
    u8 *q;
    if (*(u32 *)(g + 0x34) != 0) {
        if (*(u32 *)(g + 0x38) == 0) {
            q = g + 8;
            if (*(s16 *)(g + 4) == 3 && *(u32 *)q != 0) {
                func_02070c18((u32)q, 10);
                func_02070b30((u32)q);
            }
        }
        *(u32 *)(g + 0x38) = 0;
    }
}
