#include "ctx.h"
extern u64 func_02080858(void);
extern u64 func_0205e074(u64 a, u32 c, u32 d);
u16 func_020d5f68(void)
{
    u64 uVar1;
    u64 uVar2;
    uVar1 = func_02080858();
    uVar2 = func_0205e074(uVar1, 10, 0);
    return (u16)((u16)uVar2 + 90);
}
