#include "ctx.h"
extern u8 *data_0214f464;
extern void func_020352e0(u32 a);
void func_02035280(void)
{
    s8 i = 0;
    u32 v;
    do {
        if (i < 0 || i >= 3) {
            v = 0;
        } else {
            v = *(u32 *)(data_0214f464 + i * 4 + 0x54);
        }
        if (v != 0) {
            func_020352e0(v);
        }
        i = (s8)(i + 1);
    } while (i < 3);
}
