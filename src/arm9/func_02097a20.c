#include "ctx.h"
extern s32 data_0214193c;
extern u8 data_0212f614[];
extern void func_0208c9b4(s32 a);
extern u32 func_020887a8(u32 a, u32 b);
void func_02097a20(s32 param_1)
{
    u32 uVar2;
    data_0214193c = param_1;
    func_0208c9b4(param_1);
    uVar2 = func_020887a8(0, *(u32 *)(data_0212f614 + param_1 * 8));
    func_0208c9b4(uVar2);
}
