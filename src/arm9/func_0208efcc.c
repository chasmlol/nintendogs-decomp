#include "ctx.h"

extern u8 *func_020038b8(u32 a, u32 b);
extern void func_0208f5c4(u8 *a, u32 b);
extern void func_0200658c(u8 *a);

u8 *func_0208efcc(s32 *param_1)
{
    u8 *puVar1;
    puVar1 = func_020038b8((u32)param_1, 0x24);
    func_0208f5c4(puVar1, 4);
    func_0200658c(puVar1 + 0x1c);
    return puVar1;
}
