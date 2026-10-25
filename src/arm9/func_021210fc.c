#include "ctx.h"

extern void func_02122060(u32 *p);
extern void func_02121e44(u32 *p);
extern void func_0212181c(u32 *p);
extern void func_021215cc(u32 *p);
extern void func_020a1a40(u32 v);

void func_021210fc(u32 *param_1)
{
    u32 iVar1;
    iVar1 = param_1[0x12];
    switch (param_1[0xe]) {
    case 0:
        func_02122060(param_1);
        break;
    case 1:
        func_02121e44(param_1);
        break;
    case 2:
        func_0212181c(param_1);
        break;
    case 3:
        func_021215cc(param_1);
        break;
    }
    if (iVar1 == param_1[0x12]) {
        return;
    }
    func_020a1a40(0xf);
}
