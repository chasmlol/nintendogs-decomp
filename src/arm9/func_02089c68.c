#include "ctx.h"

extern s32 func_0207fbf4(void);
extern s32 func_02080b08(s32 a);
extern void func_02080b1c(s32 a);

BOOL func_02089c68(void)
{
    s32 r;
    u32 v;
    r = func_0207fbf4();
    if (r == 0) {
        return TRUE;
    }
    r = func_02080b08(r);
    *(vu32 *)0x04fff200 = 16;
    v = *(vu32 *)0x04fff200;
    func_02080b1c(r);
    return v != 0;
}
