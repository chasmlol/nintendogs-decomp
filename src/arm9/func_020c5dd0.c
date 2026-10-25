#include "ctx.h"

extern BOOL func_020bd824(void *a, s32 b, s32 c, s32 d);
extern void *func_01ffdb08(s32 x);
extern void func_0202707c(void *p, s32 v);
extern void func_020274f0(void *p, s32 v);

u32 func_020c5dd0(void *param_1, s32 param_2, s32 param_3)
{
    void *p;
    if (func_020bd824(param_1, 6, param_3, -1)) {
        p = func_01ffdb08(param_3);
        func_0202707c(p, 0x29);
        func_020274f0(p, param_2);
        return 1;
    }
    return 0;
}
