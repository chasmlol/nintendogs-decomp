#include "ctx.h"

typedef struct { u32 w[3]; } T3;
typedef struct { u32 w[12]; } T12;

extern u8 data_0214f464[];
extern s32 func_02067d04(u32 *a, u32 *b, u32 *c);
extern void func_01ff8980(u32 *a);
extern void func_02067e68(u32 *a, u32 *b, u32 *c);
extern void func_01ffe474(u8 *p);

void func_0203e6d4(u8 *param_1)
{
    s32 iVar5;
    s32 bVar2;
    u32 uVar7;
    u32 uVar9;
    u32 local_40[3];
    u32 local_34[3];
    u32 local_28[3];
    u32 local_1c[3];

    iVar5 = *(s16 *)(param_1 + 0x88);
    if (iVar5 < 0 || iVar5 >= 3) {
        iVar5 = 0;
    } else {
        iVar5 = *(s32 *)(*(u8 **)&data_0214f464 + iVar5 * 4 + 0x54);
    }
    if (iVar5 == 0) {
        goto Lflag;
    }
    if (*(s16 *)(iVar5 + 0xea) == 0x47a) {
        goto Lflag;
    }
    if (*(s16 *)(iVar5 + 0xea) == 0x47f) {
        goto Lflag;
    }
    *(u16 *)(param_1 + 0x20) = *(u16 *)(param_1 + 0x20) & ~1;
    uVar9 = *(u32 *)(*(u8 **)(iVar5 + 0x9e8) + 8);
    uVar7 = (u32)((((s64)(s32)uVar9 * 0xb54) + 0x800) >> 12);
    *(u32 *)(param_1 + 0x24) = uVar7;
    *(u32 *)(param_1 + 0x28) = uVar7;
    *(u32 *)(param_1 + 0x2c) = uVar7;
    bVar2 = 0;
    if (*(s8 *)(iVar5 + 0x9e) != 0 || *(s32 *)(iVar5 + 0x460) < 0x1000) {
        bVar2 = 1;
    }
    if (bVar2 == 0) {
        goto Lelse;
    }
    local_28[0] = 0;
    local_28[1] = 0x1000;
    local_28[2] = 0;
    *(T3 *)local_1c = *(T3 *)(iVar5 + 0x1a4);
    func_02067d04(local_28, local_1c, local_34);
    func_01ff8980(local_34);
    func_02067d04(local_34, local_28, local_1c);
    *(u32 *)(param_1 + 0x3c) = local_34[0];
    *(u32 *)(param_1 + 0x40) = local_34[1];
    *(u32 *)(param_1 + 0x44) = local_34[2];
    *(u32 *)(param_1 + 0x48) = local_28[0];
    *(u32 *)(param_1 + 0x4c) = local_28[1];
    *(u32 *)(param_1 + 0x50) = local_28[2];
    *(u32 *)(param_1 + 0x54) = local_1c[0];
    *(u32 *)(param_1 + 0x58) = local_1c[1];
    *(u32 *)(param_1 + 0x5c) = local_1c[2];
    goto Lcommon;
Lelse:
    *(T12 *)(param_1 + 0x3c) = *(T12 *)(iVar5 + 0x3c);
Lcommon:
    *(T3 *)(param_1 + 0x30) = *(T3 *)(iVar5 + 0x33c);
    *(T3 *)local_40 = *(T3 *)(iVar5 + 0x934);
    func_02067e68((u32 *)(param_1 + 0x30), local_40, (u32 *)(param_1 + 0x30));
    *(u32 *)(param_1 + 0x34) = *(u32 *)(iVar5 + 0x918);
    goto Lend;
Lflag:
    *(u16 *)(param_1 + 0x20) = *(u16 *)(param_1 + 0x20) | 1;
Lend:
    func_01ffe474(param_1);
}
