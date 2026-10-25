#include "ctx.h"

extern u32 data_0215944c;
extern void func_0206b64c(u32 a, u32 b, u32 c);
extern void func_0206b7d8(u32 a, u32 b, u32 c);

void func_020b1c30(void)
{
    if (data_0215944c != 0) {
        func_0206b64c(*(u32 *)(*(u32 *)(data_0215944c + 0xc) + 0x14), 0, 0x4000);
        func_0206b7d8(*(u32 *)(*(u32 *)(data_0215944c + 0x10) + 0xc), 0, 0x100);
    }
}
