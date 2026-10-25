#include "ctx.h"
extern u8 data_02159148[];
extern void func_020e1ec4(void);
extern void func_020e1d58(u8 *p, u32 a, u32 b);
extern void func_0209d4b0(u32 *p, u32 n);
u32 func_0209ce58(u32 *param_1)
{
    u8 *puVar1;
    puVar1 = *(u8 **)(data_02159148 + 0x10);
    if (puVar1 != NULL) {
        func_020e1ec4();
        func_020e1d58(puVar1, 0x5a, 0);
        func_0209d4b0(param_1, 7);
        return 1;
    }
    return 0;
}
