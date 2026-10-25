#include "ctx.h"
extern u8 *data_02159034;
extern void func_0206c7d4(void);
void func_02094294(u32 param_1)
{
    u8 *b = data_02159034 + 0x1000;
    void (*fp)(u8 *, u32, u32) = (void (*)(u8 *, u32, u32))func_0206c7d4;
    fp(*(u8 **)(b + 0x41c) + 4, param_1, 92);
}
