#include "ctx.h"

extern u32 data_0214f460;
extern u32 data_0215942c;
extern u32 data_0214f464;
extern u32 func_020ab6e0(u8 *p, u32 n);
extern void func_0208f588(u32 a, u32 b);
extern u32 func_0200c370(u8 *p, u32 a);

void func_02042440(u8 *param_1, u32 param_2)
{
    u32 puVar2;
    u32 iVar3;
    u16 sVar1;

    puVar2 = func_020ab6e0(param_1, 0);
    data_0214f460 = puVar2;
    func_0208f588(param_2, puVar2);
    sVar1 = *(u16 *)data_0215942c;
    if (sVar1 != 0 && sVar1 != 0x11 && sVar1 != 8 && sVar1 != 0x10) {
        return;
    }
    iVar3 = data_0214f464;
    puVar2 = func_0200c370(param_1, param_2);
    *(u32 *)(iVar3 + 0x60) = puVar2;
    func_0208f588(param_2, *(u32 *)(data_0214f464 + 0x60));
}
