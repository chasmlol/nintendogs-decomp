#include "ctx.h"

extern u32 data_0215ae08;
extern u32 data_0215ae00;
extern u32 data_0215ae04;
extern u32 func_0207d56c(int a, int b, int c);
extern u32 func_0207d51c(int a, int b, int c);
extern void func_020dc890(u32 a);
extern void func_020dc8b0(void);

void func_020dd404(int param_1, int param_2)
{
    u32 puVar1;
    u32 uVar2;

    puVar1 = func_0207d56c(param_1, param_2, 0);
    data_0215ae08 = puVar1;
    puVar1 = func_0207d51c((int)puVar1, 0x18, 4);
    data_0215ae00 = puVar1;
    func_020dc890(puVar1);
    uVar2 = func_0207d51c(data_0215ae08, 0x13c, 4);
    *(u32 *)(data_0215ae00 + 0x14) = uVar2;
    data_0215ae04 = 1;
    func_020dc8b0();
}
