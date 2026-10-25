#include "ctx.h"

extern u32 func_02077bd8(u8 *buf, u8 *src, u32 n);

void func_0208f8f8(u8 *param_1, u32 param_2, u32 *param_3)
{
    u8 buf[128];
    u32 uVar1;
    u32 uVar6;
    u32 off;
    u32 *puVar2;
    u32 iVar4;
    u32 iVar3;
    u8 *pb;
    s16 sIdx = (s16)param_2;

    iVar4 = *(u32 *)(*(u32 *)(param_1 + 0x1c) + 8);
    uVar1 = func_02077bd8(buf, (u8 *)(iVar4 + *(u32 *)(iVar4 + 4)), param_2);
    off = sIdx * 12;
    iVar3 = *(u32 *)(*(u32 *)(param_1 + 0x1c) + 0x5c);
    puVar2 = *(u32 **)(iVar3 + off);
    if (puVar2 != 0) {
        param_3 = puVar2;
    }
    *(u32 **)(iVar3 + off + 4) = param_3;
    uVar6 = 0;
    *param_3 = *param_3 | (1u << (s16)param_2);
    if (uVar6 < uVar1) {
        pb = buf;
        do {
            func_0208f8f8(param_1, *pb, param_3);
            uVar6 = uVar6 + 1;
            pb = pb + 1;
        } while (uVar6 < uVar1);
    }
}
