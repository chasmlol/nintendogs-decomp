#include "ctx.h"

extern u8 *data_ov022_0215c720;
extern void func_0208f6ac(u32 a);

void func_ov022_0215c0c4(void)
{
    void (*fp)(u32) = func_0208f6ac;
    fp(*(u32 *)data_ov022_0215c720);
}
