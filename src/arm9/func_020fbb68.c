#include "ctx.h"

extern void func_ov004_0215c130(void);

void func_020fbb68(u8 *p)
{
    u32 *q = *(u32 **)(p + 0x214);
    if (*q == 0) {
        *q = 1;
        func_ov004_0215c130();
    }
}
