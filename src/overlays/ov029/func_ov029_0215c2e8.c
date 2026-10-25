#include "ctx.h"

extern u32 data_ov029_0215c4a0;
extern void func_02090f40(u8 *p, u32 v);
extern void func_0208c604(u8 *p, u32 v);
extern u32 *func_020038b8(u8 *p, u32 n);
extern u32 func_020fe06c(u32 a, u8 *p);
extern u32 func_02006cc4(u8 *p, u32 n);
extern void func_020fc898(u32 a);
extern void func_020fc880(u32 a);

void func_ov029_0215c2e8(u8 *param_1, u32 param_2)
{
    u32 *puVar1;
    u32 iVar2;
    u32 puVar3;
    func_02090f40(param_1, 4);
    func_02090f40(param_1, 5);
    func_02090f40(param_1, 6);
    func_0208c604(param_1, param_2);
    puVar1 = func_020038b8(param_1, 32);
    puVar1[0] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    iVar2 = func_020fe06c(5, param_1);
    puVar1[5] = iVar2;
    puVar3 = func_02006cc4(param_1, 128);
    puVar1[6] = puVar3;
    puVar3 = func_02006cc4(param_1, 128);
    puVar1[7] = puVar3;
    func_020fc898(puVar1[6]);
    func_020fc880(puVar1[7]);
    data_ov029_0215c4a0 = (u32)puVar1;
}
