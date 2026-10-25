#include "ctx.h"

extern void func_020d505c(void);
extern s32 func_020d68ec(u32 p);
extern void func_020d671c(u32 fn, u32 *buf);

void func_020d508c(u32 p)
{
    u32 buf;
    if (func_020d68ec(p) != 0) {
        func_020d671c((u32)func_020d505c, &buf);
    }
}
