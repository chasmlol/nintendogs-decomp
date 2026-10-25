#include "ctx.h"

extern void func_0207d018(void);
extern u32 data_02159028;

void func_0208f3fc(u32 a)
{
    void (*fp)(u32, u32) = (void (*)(u32, u32))func_0207d018;
    fp(**(u32 **)&data_02159028, a);
}
