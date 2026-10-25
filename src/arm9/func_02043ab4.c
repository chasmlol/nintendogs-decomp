#include "ctx.h"

extern u8 *data_0214f464;
extern void func_0208cfe8(u32 a);

void func_02043ab4(void)
{
    s32 i = 0;
    do {
        u32 v = *(u32 *)(data_0214f464 + i * 4 + 0x48);
        if (v != 0) {
            func_0208cfe8(v);
        }
        i = (s16)(i + 1);
    } while (i < 3);
}
