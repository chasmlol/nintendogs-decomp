#include "ctx.h"

extern void func_02096264(void);
extern u32 data_02159038;

void func_02096224(void)
{
    void (*fp)(u32, u32, u32) = (void (*)(u32, u32, u32))func_02096264;
    fp(data_02159038, 6, 0);
}
