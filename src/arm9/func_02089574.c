#include "ctx.h"

extern u32 data_021560d4;
extern u16 data_021560d0;
extern s32 func_0207ee60(void);

void func_02089574(void)
{
    s32 iVar1;
    data_021560d4 = 1;
    iVar1 = func_0207ee60();
    data_021560d0 = (s16)iVar1;
}
