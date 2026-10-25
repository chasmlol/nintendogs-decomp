#include "ctx.h"

extern u8 data_02159074[];
extern void func_0209adc8(s32 x);

void func_0209b8e8(void)
{
    u32 v;
    v = *(u16 *)(data_02159074 + 24);
    if ((u16)(v + 0xffe3) > 1) {
        return;
    }
    func_0209adc8(3);
}
