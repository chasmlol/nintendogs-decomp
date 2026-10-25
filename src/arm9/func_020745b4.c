#include "ctx.h"

extern u32 data_02152cd8[];
extern u8 data_02152e38[];
extern void func_0207463c(void);

u8 *func_020745b4(void)
{
    if ((data_02152cd8[63] & 0x80) == 0) {
        func_0207463c();
        data_02152cd8[63] = data_02152cd8[63] | 0x80;
    }
    return data_02152e38;
}
