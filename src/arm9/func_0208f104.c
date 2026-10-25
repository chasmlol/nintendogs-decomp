#include "ctx.h"
extern void func_02077970(u32 *p);
extern u32 *func_020781d4(u32 *p);
extern void func_020036d0(s32 *a, u32 b, u32 c);
void func_0208f104(u32 *param_1, s32 *param_2)
{
    u32 *iVar1;
    func_02077970(param_1);
    iVar1 = func_020781d4(param_1);
    func_020036d0(param_2, (u32)param_1, (u32)iVar1 + *(u32 *)((u8 *)iVar1 + 0x14) - (u32)param_1);
}
