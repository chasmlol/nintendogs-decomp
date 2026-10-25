#include "ctx.h"

extern s32 (*data_0214e5ac)(void);
extern void func_02080b84(void);
extern void func_02000e2c(void);

void func_02000e4c(u32 param_1, u32 param_2)
{
    s32 iVar1;

    if ((param_2 & 0x3f) == 0x11) {
        iVar1 = 0;
        if (data_0214e5ac != NULL) {
            iVar1 = data_0214e5ac();
        }
        if (iVar1 != 0) {
            func_02000e2c();
        }
    } else {
        func_02080b84();
    }
}
