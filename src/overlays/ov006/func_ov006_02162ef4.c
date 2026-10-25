#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_strength_reduction off
#pragma opt_common_subs off

extern s16 data_02126868[];

#define FX_Mul(a, b) ((u32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

u32 func_020449e4(void);
void func_02067e68(u8 *a, u8 *b, u8 *c);

void func_ov006_02162ef4(u8 *param_1, s32 param_2)
{
    s32 p2;
    u8 *puVar5;
    s32 iVar4;
    u32 off;
    u32 r4v;
    s32 q0;
    u32 uVar3;
    s64 lVar2;

    puVar5 = *(u8 **)(param_1 + 0x2c);
    p2 = (__typeof__(p2))(param_2);
    iVar4 = 0x2800;
    if (p2 == 0) {
        iVar4 = -0x2800;
    }
    q0 = *(u16 *)puVar5;
    r4v = FX_Mul(iVar4, data_02126868[((q0 >> 4) << 1) + 1]);
    uVar3 = func_020449e4();
    off = (u32)p2 * 12;
    lVar2 = (s64)iVar4 * data_02126868[((*(u16 *)puVar5) >> 4) << 1] + 0x800;
    *(u32 *)(puVar5 + off + 12) = (u32)(lVar2 >> 12);
    *(u32 *)(puVar5 + off + 16) = FX_Mul((s32)uVar3, 0x1800);
    *(u32 *)(puVar5 + off + 20) = r4v;
    func_02067e68(*(u8 **)(puVar5 + 0x54) + 0x30, (puVar5 + 12) + off,
                  *(u8 **)(puVar5 + p2 * 4 + 0x58) + 0x30);
    *(u32 *)(puVar5 + off + 0x24) = 0;
    *(u32 *)(puVar5 + off + 0x28) = 0;
    *(u32 *)(puVar5 + off + 0x2c) = 0;
    *(u32 *)(puVar5 + p2 * 4 + 4) = 0;
    *(u32 *)(puVar5 + p2 * 4 + 0x3c) = 0;
    *(u32 *)(puVar5 + p2 * 4 + 0x44) = 0;
    *(u32 *)(puVar5 + p2 * 4 + 0x4c) = 0;
}
