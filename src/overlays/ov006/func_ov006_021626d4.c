#include "ctx.h"

extern void func_ov006_021621fc(void);
extern u32 data_ov006_02165e18;
extern u32 data_ov006_02165e1c;
extern u32 data_ov006_02165e34;
extern u32 data_ov006_021661c0;
extern u32 data_02126868;

extern void func_ov006_021646a4(u8 *p);
extern u32 func_020038b8(u8 *p, u32 a);
extern void func_0205f050(u8 *p, u32 a, u32 b, u32 c);
extern u32 func_0207df48(u8 *p);
extern u8 *func_0208f43c(u8 *p, u32 a);
extern u8 *func_0208fb00(u8 *p, u32 a, u8 *b);
extern void func_0208f7e4(u32 a, u32 b);
extern void func_0208f820(u32 a, u32 b);
extern void func_0208f7d0(u32 a, u32 b);
extern void func_0208f588(u32 a, u32 b);
extern void func_01ff8020(u8 *p, u32 a, u32 b);
extern u32 func_020449e4(void);
extern void func_02067e68(u8 *a, u8 *b, u8 *c);

typedef struct {
    u32 w[3];
} T12;

typedef struct {
    u32 w[12];
} T48;

void func_ov006_021626d4(u8 *param_1, u8 *param_2, u8 *param_3)
{
    char acStack_58[64];
    u8 *P2;
    u8 *puVar3;
    u8 *puVar4;
    u32 uVar8;
    s32 iv;
    s32 kk;

    func_ov006_021646a4(param_1);
    *(u32 *)(param_1 + 0x28) = (u32)func_ov006_021621fc;
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x20) = (u32)param_3;
    *(u32 *)(param_1 + 0x2c) = func_020038b8(param_2, 48);
    P2 = *(u8 **)(param_1 + 0x2c);
    if (P2 == 0) {
        return;
    }
    func_0205f050((u8 *)acStack_58, 64, (u32)&data_ov006_02165e1c, *(u32 *)&data_ov006_02165e18);
    puVar3 = func_0208f43c(param_2, func_0207df48((u8 *)acStack_58));
    func_0205f050((u8 *)acStack_58, 64, (u32)&data_ov006_02165e34, *(u32 *)&data_ov006_02165e18);
    puVar4 = func_0208f43c(param_2, func_0207df48((u8 *)acStack_58));
    *(u32 *)(P2 + 0x28) = (u32)func_0208fb00(param_2, 0x88, puVar3);
    *(u32 *)(P2 + 0x2c) = (u32)func_0208fb00(param_2, 0x88, puVar4);
    func_0208f7e4(*(u32 *)(P2 + 0x28), 0x39ce);
    func_0208f820(*(u32 *)(P2 + 0x28), 0x7fff);
    func_0208f7d0(*(u32 *)(P2 + 0x28), 3);
    func_0208f7e4(*(u32 *)(P2 + 0x2c), 0x39ce);
    func_0208f820(*(u32 *)(P2 + 0x2c), 0x7fff);
    func_0208f7d0(*(u32 *)(P2 + 0x2c), 3);
    func_0208f588(*(u32 *)&data_ov006_021661c0 + 4, *(u32 *)(P2 + 0x28));
    func_0208f588(*(u32 *)&data_ov006_021661c0 + 4, *(u32 *)(P2 + 0x2c));
    *(T12 *)(*(u8 **)(P2 + 0x28) + 48) = *(T12 *)(param_3 + 8);
    *(T12 *)(*(u8 **)(P2 + 0x28) + 36) = *(T12 *)(param_3 + 20);
    *(T12 *)(*(u8 **)(P2 + 0x2c) + 36) = *(T12 *)(param_3 + 20);
    iv = (*(u16 *)(param_3 + 4)) >> 4;
    kk = iv * 2;
    func_01ff8020(*(u8 **)(P2 + 0x28) + 60,
                  (u32)*(s16 *)((u8 *)&data_02126868 + (kk << 1)),
                  (u32)*(s16 *)((u8 *)&data_02126868 + ((kk + 1) << 1)));
    *(T48 *)(*(u8 **)(P2 + 0x2c) + 60) = *(T48 *)(*(u8 **)(P2 + 0x28) + 60);
    P2 = *(u8 **)(param_1 + 0x2c);
    uVar8 = func_020449e4();
    {
        u32 *pv = (u32 *)P2;
        u32 *pv1;
        pv1 = pv + 1;
        pv[1] = 0;
        pv1[1] = (u32)((((s64)(s32)uVar8 * 0x1800) + 0x800) >> 12);
        pv1[2] = 0;
        func_02067e68(*(u8 **)(P2 + 0x28) + 48, (u8 *)pv1, *(u8 **)(P2 + 0x2c) + 48);
    }
    {
        u32 *q = (u32 *)(P2 + 16);
        q[0] = 0;
        q[1] = 0;
        q[2] = 0;
    }
    *(u32 *)P2 = 0;
    *(u32 *)(P2 + 0x1c) = 0;
    *(u32 *)(P2 + 0x20) = 0;
    *(u32 *)(P2 + 0x24) = 0;
}
