#include "ctx.h"

extern void func_0208f588(u32, u32);
extern void func_0207d018(u8 *, u32);

void func_0208f704(u8 *param_1, u32 param_2)
{
    func_0208f588((u32)param_1, param_2);
    func_0207d018(param_1 + 0x3c, param_2);
}
