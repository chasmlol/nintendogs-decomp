#include "ctx.h"

extern s32 func_02101764(s32 a, s32 b);
extern void func_02101be4(s32 a, s32 b);
extern void func_021017d4(s32 a, s32 b, s32 c);

void func_02109b50(void)
{
    s32 v;

    v = func_02101764(0, 4);
    func_02101be4(v, 0);
    func_021017d4(0, v, 14);
}
