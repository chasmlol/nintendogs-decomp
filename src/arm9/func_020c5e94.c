#include "ctx.h"

extern BOOL func_020bd824(void *a, s32 b, s32 c, s32 d);
extern void *func_01ffdb08(s32 x);
extern void func_0202707c(void *p, s32 v);
extern void func_020274f0(void *p, s32 v);

u32 func_020c5e94(void *param_1, s32 param_2)
{
    void *p;
    s16 idx;
    idx = *(s16 *)((u8 *)param_1 + 152);
    if (func_020bd824(param_1, 8, idx, -1)) {
        p = func_01ffdb08(*(s16 *)((u8 *)param_1 + 152));
        func_0202707c(p, 43);
        func_020274f0(p, param_2);
        return 1;
    }
    return 0;
}
