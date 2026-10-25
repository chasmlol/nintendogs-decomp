#include "ctx.h"

extern u32 data_ov019_02161618;
void func_0208f6ac(u32 a);

void func_ov019_02160d5c(void)
{
    void (*fp)(u32) = func_0208f6ac;
    fp(**(u32 **)&data_ov019_02161618);
}
