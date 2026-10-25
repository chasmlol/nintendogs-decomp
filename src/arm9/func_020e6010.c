#include "ctx.h"
extern s32 func_020bd158(u32 a);
extern void func_0208d564(u16 *p);
extern void func_0208d3a0(u16 *p, u32 a, s16 b, u32 c);
extern void func_0208d388(u16 *p);

void func_020e6010(u16 *param_1)
{
    s32 iVar1;
    s32 j;

    iVar1 = func_020bd158(0x45);
    func_0208d564(param_1);
    func_0208d3a0(param_1, 0x1d, 1, 0x218);
    j = iVar1 - 1;
    func_0208d3a0(param_1, 0x1e, (s16)j, 0x218);
    func_0208d3a0(param_1, 0x5e, (s16)j, 0x88);
    func_0208d388(param_1);
}
