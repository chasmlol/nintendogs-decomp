#include "ctx.h"

extern int data_0215be48;
extern u32 data_0214a46c;
extern u32 data_0214a45c;
extern void func_02117e4c(u32 a);
extern void func_02112798(int a, int b, int c);
extern void func_02112744(int a, u32 b, int c);

void func_02118aa8(u32 *param_1)
{
    *param_1 = 0;
    if (*(int *)(data_0215be48 + 0xa8) == 7) {
        func_02117e4c((u32)(param_1 + 0x31));
        func_02117e4c((u32)(param_1 + 0x39));
        func_02117e4c((u32)(param_1 + 0x41));
    }
    param_1[1] = 0x3c;
    if (*(int *)(data_0215be48 + 0xa8) == 7) {
        func_02112798(0, 0, 1);
    }
    param_1[2] = 0x4c;
    if (*(int *)(data_0215be48 + 0xa8) == 7) {
        func_02112744(0, (u32)&data_0214a46c, 1);
        func_02112744(0, (u32)&data_0214a45c, 0);
    }
}
