#include "ctx.h"
extern s32 func_02089e38(void);
extern s32 func_02089df8(void);
s32 func_02089dd8(void)
{
    s32 a = func_02089e38();
    s32 b = func_02089df8();
    return (256 - a) - b;
}
