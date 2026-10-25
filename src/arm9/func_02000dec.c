#include "ctx.h"

extern u8 data_0214e5a0[];
extern void CpuSet(void *src, void *dst, u32 cnt);
extern s32 func_0207ee60(void);

void func_02000dec(void)
{
    u32 t;
    s32 iVar1;
    t = 0;
    CpuSet(&t, data_0214e5a0, 0x05000001);
    iVar1 = func_0207ee60();
    *(s16 *)(data_0214e5a0 + 2) = (s16)iVar1;
}
