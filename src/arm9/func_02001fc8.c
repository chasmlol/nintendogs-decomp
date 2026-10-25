#include "ctx.h"

extern u32 data_0214e6c0;
void func_02001c54(void);
void func_02001c3c(void);
u32 func_0200200c(u32 *a, void *b, u32 c);

u32 func_02001fc8(u32 *param_1)
{
    u32 iVar1;
    iVar1 = func_0200200c(param_1, func_02001c54, 0);
    *(u32 *)((u8 *)&data_0214e6c0 + 0xc) = iVar1;
    if (iVar1 == 0) {
        func_02001c3c();
    }
    return *(u32 *)((u8 *)&data_0214e6c0 + 0xc);
}
