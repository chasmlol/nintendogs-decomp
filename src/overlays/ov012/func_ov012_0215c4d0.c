#include "ctx.h"

extern u32 *data_ov012_0215c720;
extern void func_0208c604(s32 *p, s32 a, s32 b, u32 c);
extern u32 *func_020038b8(s32 *p, s32 a);
extern s32 func_020fe06c(s32 a, s32 *p);
extern u32 *func_02006cc4(s32 *p, s32 a);
extern void func_020fc898(u32 a);
extern void func_020fc880(u32 a);

void func_ov012_0215c4d0(s32 *param_1, s32 param_2, s32 param_3, u32 param_4)
{
    u32 *puVar1;
    s32 iVar2;
    u32 *puVar3;

    func_0208c604(param_1, param_2, param_3, param_4);
    puVar1 = func_020038b8(param_1, 0x24);
    puVar1[0] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    switch (puVar1[2]) {
    case 0:
        iVar2 = func_020fe06c(2, param_1);
        puVar1[6] = iVar2;
        break;
    case 1:
        iVar2 = func_020fe06c(9, param_1);
        puVar1[6] = iVar2;
        break;
    case 2:
        iVar2 = func_020fe06c(9, param_1);
        puVar1[6] = iVar2;
        break;
    case 3:
        iVar2 = func_020fe06c(0, param_1);
        puVar1[6] = iVar2;
        break;
    case 4:
        iVar2 = func_020fe06c(0, param_1);
        puVar1[6] = iVar2;
        break;
    case 6:
        iVar2 = func_020fe06c(1, param_1);
        puVar1[6] = iVar2;
        break;
    case 5:
        iVar2 = func_020fe06c(2, param_1);
        puVar1[6] = iVar2;
        break;
    }
    puVar3 = func_02006cc4(param_1, 0x80);
    puVar1[7] = (u32)puVar3;
    puVar3 = func_02006cc4(param_1, 0x80);
    puVar1[8] = (u32)puVar3;
    func_020fc898(puVar1[7]);
    func_020fc880(puVar1[8]);
    data_ov012_0215c720 = puVar1;
}
