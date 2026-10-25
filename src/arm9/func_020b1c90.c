#include "ctx.h"

extern u8 data_021424ac[];
extern u8 data_021424dc[];
extern u8 data_021424b4[];
extern u8 data_021424c8[];
extern u8 data_021424f0[];
extern u8 data_021424fc[];
extern u8 data_0214252c[];
extern u8 data_02142504[];
extern u8 data_02142518[];
extern u8 data_02142540[];
extern u8 data_0214254c[];
extern u8 data_0214257c[];
extern u8 data_02142554[];
extern u8 data_02142568[];
extern u8 data_02142590[];
extern u32 data_0215944c;

u8 *func_020038b8(u8 *p, u32 n);
void func_0205f050(u8 *buf, u32 n, u8 *fmt, u32 r3, u32 s5, u32 s6);
u32 func_0208c5b4(u8 *buf);
u8 *func_02006be0(u32 a);
u8 *func_02006bac(u32 a);
u8 *func_02006b78(u32 a);
u32 func_02073708(u8 *p, u32 a);

u8 *func_020b1c90(u8 *param_1, s32 param_2, s32 param_3)
{
    u8 *puVar1;
    s32 iVar2;
    u8 *puVar3;
    u8 *piVar4;
    u8 auStack_50[64];
    u32 sel;
    u32 k6a;
    u32 k6b;
    u32 k6c;

    puVar1 = func_020038b8(param_1, 0x3c);
    *(u16 *)(puVar1 + 0) = 0;
    *(u16 *)(puVar1 + 2) = (u16)param_2;
    *(u32 *)(puVar1 + 4) = 0;
    *(u32 *)(puVar1 + 8) = 0;
    *(u32 *)(puVar1 + 12) = 0;
    *(u32 *)(puVar1 + 16) = 0;
    *(u32 *)(puVar1 + 20) = 0;
    *(u32 *)(puVar1 + 24) = 0;
    *(u32 *)(puVar1 + 28) = 0;
    *(u32 *)(puVar1 + 40) = 0;
    *(u32 *)(puVar1 + 44) = 0;
    *(u32 *)(puVar1 + 48) = 0;

    k6a = (u32)data_021424ac;
    sel = 0;
    if (param_2 == 0) goto A1;
    if (param_2 == 1) goto B1;
    if (param_2 == 2) sel = (u32)data_021424dc;
    goto C1;
A1:
    sel = (u32)data_021424b4;
    goto C1;
B1:
    sel = (u32)data_021424c8;
C1:
    func_0205f050(auStack_50, 0x40, data_021424f0, sel, param_3 - 1, k6a);
    iVar2 = (s32)func_0208c5b4(auStack_50);
    puVar3 = func_02006be0((u32)iVar2);
    *(u8 **)(puVar1 + 8) = puVar3;

    k6b = (u32)data_021424fc;
    sel = 0;
    if (param_2 == 0) goto A2;
    if (param_2 == 1) goto B2;
    if (param_2 == 2) sel = (u32)data_0214252c;
    goto C2;
A2:
    sel = (u32)data_02142504;
    goto C2;
B2:
    sel = (u32)data_02142518;
C2:
    func_0205f050(auStack_50, 0x40, data_02142540, sel, param_3 - 1, k6b);
    iVar2 = (s32)func_0208c5b4(auStack_50);
    piVar4 = func_02006bac((u32)iVar2);
    *(u8 **)(puVar1 + 12) = piVar4;

    k6c = (u32)data_0214254c;
    sel = 0;
    if (param_2 == 0) goto A3;
    if (param_2 == 1) goto B3;
    if (param_2 == 2) sel = (u32)data_0214257c;
    goto C3;
A3:
    sel = (u32)data_02142554;
    goto C3;
B3:
    sel = (u32)data_02142568;
C3:
    func_0205f050(auStack_50, 0x40, data_02142590, sel, param_3 - 1, k6c);
    iVar2 = (s32)func_0208c5b4(auStack_50);
    piVar4 = func_02006b78((u32)iVar2);
    *(u8 **)(puVar1 + 16) = piVar4;

    iVar2 = (s32)func_02073708(*(u8 **)(puVar1 + 8), 0);
    *(s32 *)(puVar1 + 20) = iVar2;
    *(u32 *)(puVar1 + 24) = 0x80000;
    *(u32 *)(puVar1 + 28) = 0x52000;
    *(u32 *)(puVar1 + 32) = 0xfff00000;
    *(u32 *)(puVar1 + 36) = 0;
    iVar2 = (s32)func_02073708(*(u8 **)(puVar1 + 8), 1);
    *(s32 *)(puVar1 + 40) = iVar2;
    *(u32 *)(puVar1 + 44) = 0x80000;
    *(u32 *)(puVar1 + 48) = 0x82000;
    *(u32 *)(puVar1 + 52) = 0x100000;
    *(u32 *)(puVar1 + 56) = 0;
    data_0215944c = (u32)puVar1;
    return puVar1;
}
