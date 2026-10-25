#include "ctx.h"

extern u8 data_0214e6c0[];

u32 func_02001f58(void *fn, u32 arg);
void func_02001c3c(void);
void func_02001c54(void);

u32 func_02001f14(void)
{
    u32 r;
    r = func_02001f58(func_02001c54, 0);
    *(u32 *)(data_0214e6c0 + 0xc) = r;
    if (r == 0) {
        func_02001c3c();
    }
    return *(u32 *)(data_0214e6c0 + 0xc);
}
