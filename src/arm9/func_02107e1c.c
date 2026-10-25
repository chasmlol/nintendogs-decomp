#include "ctx.h"

extern u8 *data_0215be48;
extern void func_02112798(u32 a, u32 b, u32 c);
extern u32 func_0209406c(void);
extern void func_021036b4(u32 a);

void func_02107e1c(void)
{
    u32 r;
    if (data_0215be48 != 0) {
        func_02112798(3, 0, 1);
        r = func_0209406c();
        *(u32 *)(data_0215be48 + 0x11158) = r;
        func_021036b4(r);
    }
}
