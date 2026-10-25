#include "ctx.h"

u32 func_02080b08(void);
void func_02080b1c(u32 a);
u32 func_02071ab4(u32 a);
u32 func_02071778(u32 a);
void func_0207175c(u32 a, u32 b);

void func_02072448(u32 param_1, u32 param_2, u32 param_3)
{
    u32 uVar1;
    u32 iVar2;
    u32 uVar3;

    if (param_2 == 0) {
        return;
    }
    uVar3 = func_02080b08();
    uVar1 = func_02071ab4(param_2);
    iVar2 = func_02071778(param_3);
    if (param_1 == iVar2) {
        func_0207175c(param_3, 0);
    }
    func_02071ab4(uVar1);
    func_02080b1c(uVar3);
}
