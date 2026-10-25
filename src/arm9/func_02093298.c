#include "ctx.h"

extern u8 *data_02159034;
extern void func_0206c7d4(void);

void func_02093298(u32 param_1)
{
    u8 *q = data_02159034 + 0x1000;
    u8 *obj = *(u8 **)(q + 0x41c);
    void (*fp)(u32, u32, u32) = (void (*)(u32, u32, u32))func_0206c7d4;
    fp((u32)(obj + 0xb4), param_1, 68);
}
