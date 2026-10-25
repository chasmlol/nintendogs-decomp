#include "ctx.h"

extern void func_0208f5c4(u8 *p, u32 v);
extern void func_0200658c(u8 *p);
extern void func_0208eff8(void);

void func_0208f028(u8 *param_1, u32 param_2)
{
    func_0208f5c4(param_1, 2);
    *(u32 *)(param_1 + 0x14) = (u32)func_0208eff8;
    *(u32 *)(param_1 + 0x18) = 0;
    func_0200658c(param_1 + 0x1c);
    *(u32 *)(param_1 + 0x24) = param_2;
    *(s16 *)(param_1 + 0x28) = 0x7fff;
    *(s16 *)(param_1 + 0x2a) = 0;
    *(s16 *)(param_1 + 0x2c) = -4096;
    *(s16 *)(param_1 + 0x2e) = 0;
}
