#include "ctx.h"

extern u32 data_02142888;
extern u32 data_0215946c;
extern s32 *func_0200c498(u32 a, u32 b);
extern void func_020cdb74(s32 *a, s32 *b, s32 *c, u16 *d, u16 *e);

void func_020be07c(void)
{
    s32 *iVar1;
    s16 *psVar2;
    u16 sStack_2c;
    u16 local_2a;
    s32 iStack_28;
    s32 arr[3];
    s32 local_18[4];
    iVar1 = func_0200c498(13, 0);
    arr[0] = -iVar1[2];
    arr[1] = -iVar1[3];
    arr[2] = -iVar1[4];
    arr[1] = data_02142888;
    psVar2 = (s16 *)data_0215946c;
    local_18[0] = 0;
    local_18[1] = 0;
    local_18[2] = 0;
    func_020cdb74(arr, local_18, &iStack_28, &sStack_2c, &local_2a);
    *psVar2 = local_2a;
    *(s32 *)(psVar2 + 2) = arr[1];
}
