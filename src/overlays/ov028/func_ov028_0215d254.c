#include "ctx.h"
extern s32 func_020d5fe4(u8 *obj);
extern void func_020d6664(void *fn, void *p);
extern void func_ov028_0215d0e0(void);
void func_ov028_0215d254(u8 *obj)
{
    u32 local;
    if (func_020d5fe4(obj) != 0) {
        func_020d6664((void *)func_ov028_0215d0e0, &local);
    }
}
