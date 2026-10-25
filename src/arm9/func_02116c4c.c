#include "ctx.h"

extern u8 *data_0215be48;
extern void func_02117e4c(u8 *p);
extern void func_02108f44(void);
extern void func_02117700(u8 *p, u32 v);
extern void func_02112798(u32 a, u32 b, u32 c);

void func_02116c4c(u8 *param_1)
{
    s16 *puVar1;

    puVar1 = (s16 *)(param_1 + 0x1cb8);
    if (*(s16 *)(param_1 + 0x1cb8) != 2) {
        func_02117e4c(param_1 + 0x294);
        func_02117e4c(param_1 + 0x2b4);
        func_02117e4c(param_1 + 0x2d4);
        *(u32 *)(data_0215be48 + 0x5034) = 0;
        func_02108f44();
    }
    func_02117700(param_1 + 0x18, 1);
    *(u32 *)(data_0215be48 + 0x5034) = 0;
    func_02112798(2, 0x11, 1);
    func_02117700(param_1 + 0x54, 1);
    *puVar1 = 2;
}
