#include "ctx.h"

extern u8 data_02148af8[];
extern u8 data_02148b04[];
extern u8 data_02148b10[];
extern u8 data_02148b20[];
extern u8 *data_0215be48;
extern int func_0210e968(int a, void *b);
extern void func_021130c4(int a, int b);
extern void func_02112ed0(int a, int b);
extern u32 *func_02006b78(int a);

void func_02111ea4(int param_1)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u32 *piVar5;
    u8 *pb;
    u32 *puVar7;

    iVar1 = func_0210e968(param_1, data_02148af8);
    iVar2 = func_0210e968(param_1, data_02148b04);
    iVar3 = func_0210e968(param_1, data_02148b10);
    iVar4 = func_0210e968(param_1, data_02148b20);
    pb = (u8 *)((u32)data_0215be48 + 0x1dec);
    pb = (u8 *)((u32)pb + 0x7bc);
    if (iVar1 == 0) {
        *(int *)(pb + 4) = 0;
    } else {
        *(int *)(pb + 4) = iVar1;
    }
    func_021130c4(3, iVar2);
    pb = (u8 *)((u32)data_0215be48 + 0x1dec);
    puVar7 = (u32 *)((u32)pb + 0x7bc);
    if (iVar4 == 0) {
        puVar7[4] = 0;
        *puVar7 = 0;
    } else {
        piVar5 = func_02006b78(iVar4);
        puVar7[4] = piVar5[3];
        *puVar7 = 1;
    }
    func_02112ed0(3, iVar3);
    pb = (u8 *)((u32)data_0215be48 + 0x1dec);
    pb = (u8 *)((u32)pb + 0x294);
    if (iVar1 == 0) {
        *(int *)(pb + 4) = 0;
    } else {
        *(int *)(pb + 4) = iVar1;
    }
    func_021130c4(1, iVar2);
    pb = (u8 *)((u32)data_0215be48 + 0x1dec);
    puVar7 = (u32 *)((u32)pb + 0x294);
    if (iVar4 == 0) {
        puVar7[4] = 0;
        *puVar7 = 0;
    } else {
        piVar5 = func_02006b78(iVar4);
        puVar7[4] = piVar5[3];
        *puVar7 = 1;
    }
    func_02112ed0(1, iVar3);
}
