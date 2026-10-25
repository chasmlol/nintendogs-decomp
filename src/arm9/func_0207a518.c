#include "ctx.h"
extern u8 *func_0207851c(u32 a, u32 b, u32 c);
extern u8 *func_020785ac(u32 a, u32 b);
extern u8 *func_0207859c(u32 a, u32 b);
extern void func_0207a5f8(u32 a, u8 *b, u32 c);
extern void func_0207a5a0(u32 a, u8 *b, u32 c);
void func_0207a518(u32 param_1, u32 *param_2, u32 param_3)
{
    u32 iVar3;
    u8 *iVar1;
    u8 *piVar2;
    iVar3 = param_2[2];
    iVar1 = func_0207851c(iVar3, (u16)param_3, (u32)(param_2[0] << 4) >> 16);
    piVar2 = func_020785ac(iVar3, (u32)*(u8 *)(iVar1 + 2));
    func_0207a5f8(param_2[5], piVar2, param_1);
    if (*(u8 *)(iVar1 + 3) != 0xff) {
        piVar2 = func_0207859c(iVar3, (u32)*(u8 *)(iVar1 + 3));
        func_0207a5a0(param_2[5], piVar2, param_1);
        return;
    }
}
