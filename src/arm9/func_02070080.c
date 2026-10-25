#include "ctx.h"
extern u8 data_021517f8[];
extern void func_0207cec8(u32 *a, u8 *b);
extern void func_020702e8(u32 *a, u8 *b);
extern void func_02070288(u8 *p);
void func_02070080(u8 *param_1, u8 param_2)
{
    u32 *piVar1;
    piVar1 = *(u32 **)(param_1 + 4);
    if (piVar1 != NULL) {
        func_0207cec8(piVar1, param_1);
        *(u32 *)(param_1 + 4) = 0;
    }
    func_0207cec8((u32 *)data_021517f8, param_1);
    *(u8 *)(param_1 + 0x3d) = param_2;
    if (piVar1 != NULL) {
        func_020702e8(piVar1, param_1);
    }
    func_02070288(param_1);
}
