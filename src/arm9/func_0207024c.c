#include "ctx.h"

extern void func_02089b0c(u32, u32);
extern void func_02089bc8(u32);
extern void func_02070140(u8 *);

void func_0207024c(u8 *param_1)
{
    if (*(u8 *)(param_1 + 0x2c) == 2) {
        func_02089b0c((u32)*(u8 *)(param_1 + 0x3c), 0xfffffd2d);
    }
    func_02089bc8((u32)*(u8 *)(param_1 + 0x3c));
    func_02070140(param_1);
}
