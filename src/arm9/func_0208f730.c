#include "ctx.h"

extern void func_0208f588(s32 a, s32 b);
extern void func_0207d018(u8 *p, s32 v);

void func_0208f730(s32 param_1, s32 param_2)
{
    func_0208f588(param_1, param_2);
    func_0207d018((u8 *)param_1 + 0x30, param_2);
}
