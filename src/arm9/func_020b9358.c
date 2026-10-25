#include "ctx.h"

extern u8 *data_02159060;
extern u8 *data_0215942c;
extern u8 *data_0214f130;
extern void func_02097b94(s32 a, s32 b, s32 c, u32 d, s32 e);
extern void func_020ad7c8(u8 *p, s32 v);
extern u32 func_020ad6fc(u8 *p, s32 v);
extern s32 func_01ffdb08(s32 v);
extern s32 func_0202817c(s32 v);
extern u8 *func_0210befc(void);
extern void func_0209522c(s32 a, u8 *b);
extern void func_02094cbc(s32 a, u8 *b, u8 *c);
extern u8 func_02028184(s32 v);
extern void func_020421b8(s32 v);
extern void func_02096bd0(s32 v);
extern void func_02096c20(s32 a, s32 b, s32 c);
extern void func_02095a0c(void);
extern void func_02095d6c(s32 a, s32 b, s32 c, s32 d);
extern void func_020959ec(void);
extern void func_02097b68(void);
extern u32 func_0210e280(void);
extern void func_020b9880(void);

u32 func_020b9358(u8 *param_1)
{
    s16 sVar1;
    s16 sVar2;
    u8 bVar3;
    s32 iVar4;
    s32 iVar5;
    u8 *psVar6;
    u32 uVar7;
    s32 sum;
    s32 v60;
    s32 dst;
    u32 uu;

    if (*(s16 *)(param_1 + 0x2a) == 0) goto st0;
    if (*(s16 *)(param_1 + 0x2a) == 1) goto st1;
    return (u32)param_1;
st0:
    if (*(s32 *)(data_02159060 + 0xa4) == 0) {
        return (u32)param_1;
    }
    sVar1 = *(s16 *)(data_02159060 + 0x9a);
    if (sVar1 == 0) goto s0;
    if (sVar1 == 1) goto s1;
    return (u32)param_1;
s0:
    if (*(u16 *)data_0215942c == 0x11) goto a0;
    *(s16 *)(param_1 + 0x2a) = 1;
    func_02097b94(0, 0x4b0, 0, (u32)func_020b9880, 0);
    goto j0;
a0:
    func_020ad7c8(param_1, 0x19);
    func_020ad6fc(param_1, 0);
j0:
    iVar4 = func_01ffdb08(*(s16 *)(param_1 + 0x112));
    iVar5 = func_0202817c(iVar4);
    sum = iVar5 + 0x90;
    sVar1 = *(s16 *)(param_1 + 0x114);
    v60 = 0x3c;
    asm { smlabb dst, sVar1, v60, sum }
    psVar6 = func_0210befc();
    func_0209522c(dst, psVar6);
    func_02094cbc(iVar5, data_0214f130 + 0x1c, data_0214f130 + 0x2c);
    bVar3 = func_02028184(iVar4);
    return (u32)bVar3;
s1:
    func_020ad7c8(param_1, 0x16);
    func_020ad6fc(param_1, 0);
    return func_0210e280();
st1:
    if (*(s16 *)(data_02159060 + 0x6c) != 2) {
        return (u32)*(s16 *)(data_02159060 + 0x6c);
    }
    sVar2 = *(s16 *)(param_1 + 0x112);
    func_020421b8((s8)sVar2);
    func_02096bd0(sVar2);
    func_02096c20(0, 0, 0);
    func_02095a0c();
    func_02095d6c(0, 0, 0, 1);
    uu = (u16)sVar2;
    func_02095d6c(1, uu, 0, 1);
    uVar7 = 0;
    do {
        func_02095d6c(2, uu, uVar7, 1);
        uVar7 = (u16)(uVar7 + 1);
    } while (uVar7 < 0x14);
    func_020959ec();
    func_02097b68();
    func_020ad7c8(param_1, 0x19);
    return func_020ad6fc(param_1, 0);
}
