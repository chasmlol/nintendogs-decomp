#include "ctx.h"

typedef struct { u32 w[3]; } T3;
typedef struct { u32 w[12]; } T12;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_ov006_021646a4(u8 *p);
void func_ov006_02163bc4(void);
void func_ov006_02163b3c(void);
void *func_020038b8(void *a, s32 b);
void func_0205f050();
u32 func_0207df48(void *a);
void *func_0208f43c(void *a, u32 b);
void *func_0208fb00(void *a, s32 b, void *c);
void func_0208f7e4(void *a, s32 b);
void func_0208f820(void *a, s32 b);
void func_0208f7d0(void *a, s32 b);
void func_0208f588(u32 a, void *b);
void func_01ff8020(void *a, s32 b, s32 c);
u32 func_02078224(void *a, void *b);
void func_0208f86c(void *a, s32 b, u32 c);

extern u32 data_ov006_02165eb4;
extern u32 data_ov006_02165f1c[];
extern u32 data_ov006_021661c0;
extern s16 data_02126868[];
extern u32 data_ov006_02166040[];
extern u32 *data_ov006_02165efc[];
extern u32 data_ov006_02166020[];

void func_ov006_0216424c(u8 *param_1, u8 *param_2, u8 *param_3)
{
    u32 *puVar14;
    s32 i;
    s32 iVar8;
    s32 iVar9;
    u32 *puVar13;
    u32 *puVar5;
    s32 iVar4;
    s32 iVar7;
    u32 uVar3;
    u32 uVar10;
    u32 uVar12;
    u32 uVar11;
    u32 acStack_78[16];
    s32 aiStack_38[4];

    func_ov006_021646a4(param_1);
    *(u32 *)(param_1 + 0x28) = (u32)func_ov006_02163bc4;
    *(u32 *)(param_1 + 0x1c) = 4;
    *(u8 **)(param_1 + 0x20) = param_3;
    *(u32 *)(param_1 + 0x2c) = (u32)func_020038b8(param_2, 0xf8);
    puVar14 = *(u32 **)(param_1 + 0x2c);
    if (puVar14 == 0) {
        return;
    }
    uVar11 = data_ov006_02165eb4;
    func_0205f050(acStack_78, 0x40, data_ov006_02165f1c, uVar11);
    iVar4 = func_0207df48(acStack_78);
    puVar5 = func_0208f43c(param_2, iVar4);
    puVar14[0x31] = (u32)func_0208fb00(param_2, 0x88, puVar5);
    func_0208f7e4((void *)puVar14[0x31], 0x39ce);
    func_0208f820((void *)puVar14[0x31], 0x7fff);
    func_0208f7d0((void *)puVar14[0x31], 3);
    func_0208f588(data_ov006_021661c0 + 4, (void *)puVar14[0x31]);
    *(T3 *)((u8 *)puVar14[0x31] + 0x30) = *(T3 *)(param_3 + 8);
    *(T3 *)((u8 *)puVar14[0x31] + 0x24) = *(T3 *)(param_3 + 0x14);
    iVar4 = (s32)(*(u16 *)(param_3 + 4) >> 4);
    func_01ff8020((u8 *)puVar14[0x31] + 0x3c, data_02126868[iVar4 * 2], data_02126868[iVar4 * 2 + 1]);
    *(T12 *)(puVar14 + 0x32) = *(T12 *)((u8 *)puVar14[0x31] + 0x3c);
    i = 0;
    uVar12 = puVar14[0x33];
    uVar10 = puVar14[0x34];
    uVar3 = puVar14[0x37];
    puVar14[0x33] = puVar14[0x35];
    puVar14[0x34] = puVar14[0x38];
    puVar14[0x37] = puVar14[0x39];
    puVar14[0x35] = uVar12;
    puVar14[0x38] = uVar10;
    puVar14[0x39] = uVar3;
    puVar5 = data_ov006_02166040;
    puVar13 = puVar14;
    for (; i < 8; i++) {
        iVar7 = ((s32)((u32)i - 4)) * 0x5666 + 0x2b33;
        iVar8 = (s32)(*(u16 *)(param_3 + 4) >> 4);
        puVar13[1] = FX_Mul(iVar7, data_02126868[iVar8 * 2]);
        puVar13[2] = 0;
        puVar13[3] = FX_Mul(iVar7, data_02126868[iVar8 * 2 + 1]);
        *(T12 *)puVar5 = *(T12 *)((u8 *)puVar14[0x31] + 0x3c);
        puVar13[0x19] = 0;
        puVar13[0x1a] = 0;
        puVar13[0x1b] = 0;
        iVar9 = *(s32 *)(*(s32 *)((u8 *)puVar14[0x31] + 0x1c) + 8);
        aiStack_38[0] = 0;
        aiStack_38[1] = 0;
        aiStack_38[2] = 0;
        aiStack_38[3] = 0;
        func_0205f050(aiStack_38, 0x10, data_ov006_02165efc[i]);
        uVar11 = func_02078224((u8 *)iVar9 + 0x40, aiStack_38);
        data_ov006_02166020[i] = uVar11;
        func_0208f86c((void *)puVar14[0x31], (s16)data_ov006_02166020[i], (u32)func_ov006_02163b3c);
        puVar13 += 3;
        puVar5 += 12;
    }
    *puVar14 = 0;
}
