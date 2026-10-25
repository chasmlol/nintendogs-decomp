#include "ctx.h"

extern u8 *data_0215943c;

void func_020aab2c(void)
{
    u8 *p = data_0215943c;
    void (*fp)(u8 *) = *(void (**)(u8 *))(p + 0x14);
    if (fp != (void (*)(u8 *))0) {
        fp(p);
    }
}
