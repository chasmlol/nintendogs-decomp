#include "ctx.h"

extern u32 data_021517f8;
extern u32 data_021517ec;
extern void func_0207cec8(u32 a, u32 b);
extern void func_0207d018(u32 a, u32 b);

void func_02070140(u32 *param_1)
{
    u32 *puVar1;

    if ((u32 *)*param_1 != (u32 *)0) {
        *(u32 *)*param_1 = 0;
        *param_1 = 0;
    }
    puVar1 = (u32 *)param_1[1];
    func_0207cec8((u32)puVar1, (u32)param_1);
    param_1[1] = 0;
    if (param_1[2] != 0) {
        func_0207d018((u32)(puVar1 + 3), param_1[2]);
        *(u32 *)(param_1[2] + 0xc) = 0;
        param_1[2] = 0;
    }
    func_0207cec8((u32)&data_021517f8, (u32)param_1);
    func_0207d018((u32)&data_021517ec, (u32)param_1);
    *(u8 *)(param_1 + 0xb) = 0;
}
