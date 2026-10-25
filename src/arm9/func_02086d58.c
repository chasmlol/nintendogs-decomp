#include "ctx.h"

extern void func_02087008(u32 *a, u8 *b, u32 c);

u32 func_02086d58(u8 *param_1)
{
    u32 *puVar3;
    u32 local_14;
    vu32 local_10;
    u8 local_18[2];
    u16 uStack_16;
    s32 iVar2;

    puVar3 = *(u32 **)(param_1 + 0x2c);
    local_14 = *(u32 *)(param_1 + 8);
    local_10 = *(s32 *)(param_1 + 0x24);
    func_02087008(&local_14, local_18, 1);
    puVar3[4] = local_18[0] & 0x7f;
    puVar3[3] = ((s32)local_18[0] >> 7) & 1;
    iVar2 = puVar3[4];
    if (iVar2 == 0) {
        return 1;
    }
    if (*(s32 *)(param_1 + 0x30) == 0) {
        func_02087008(&local_14, (u8 *)(puVar3 + 5), iVar2);
        *(u8 *)((u8 *)puVar3 + puVar3[4] + 0x14) = 0;
    } else {
        local_10 = local_10 + iVar2;
    }
    if (puVar3[3] != 0) {
        func_02087008(&local_14, (u8 *)&uStack_16, 2);
        puVar3[0] = *(u32 *)(param_1 + 8);
        *(u16 *)(puVar3 + 1) = uStack_16 & 0xfff;
        *(u16 *)((u8 *)puVar3 + 6) = 0;
        puVar3[2] = 0;
    } else {
        puVar3[0] = *(u32 *)(param_1 + 8);
        puVar3[1] = (u32)*(u16 *)(param_1 + 0x22);
        *(u16 *)(param_1 + 0x22) = *(u16 *)(param_1 + 0x22) + 1;
    }
    *(s32 *)(param_1 + 0x24) = local_10;
    return 0;
}
