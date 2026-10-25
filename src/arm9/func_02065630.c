#include "ctx.h"

extern s32 func_0206565c(void);
extern void func_02080b84(void);

void func_02065630(void)
{
    s32 iVar1;
    iVar1 = func_0206565c();
    if (iVar1 == 0) {
        func_02080b84();
        return;
    }
}
