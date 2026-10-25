#include "ctx.h"

void func_02112798(u32 a, u32 b, u32 c);
void func_02112958(u32 a, u32 b, u32 c);

void func_0210d590(u8 *param_1)
{
    s32 iVar1;

    iVar1 = *(s32 *)(param_1 + 0x1c60);
    switch (iVar1) {
    case 0:
        func_02112798(2, 11, 0);
        func_02112798(2, 12, 1);
        func_02112798(2, 13, 0);
        break;
    case 1:
        func_02112798(2, 11, 0);
        func_02112798(2, 12, 0);
        func_02112798(2, 13, 1);
        break;
    case 2:
        func_02112798(2, 11, 1);
        func_02112798(2, 12, 0);
        func_02112798(2, 13, 0);
        break;
    }
    func_02112958(2, 11, 3);
    func_02112958(2, 12, 3);
    func_02112958(2, 13, 3);
}
