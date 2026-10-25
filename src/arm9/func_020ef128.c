#include "ctx.h"

extern u32 data_02144e64;
extern u32 data_02144e78;
extern u32 data_0213302c;
extern u32 data_0213303c;

void func_020eefd0(void);
void func_020ee9cc(void);
void func_020ef02c(void);
void func_020ee9b8(void);

s32 func_020038b8(u8 *p, s32 a);
void func_0205f050(u8 *p, s32 a, u32 b, s32 c);
s32 func_0207df48(u8 *p);
s32 func_020785bc(s32 a, s32 b);
void func_0208fa4c(u8 *p, u8 *q, s32 a);
s32 func_02078224(s32 a, u32 b);
void func_0208f884(u8 *p, s32 a, s32 b);
void func_0208e690(u8 *p, s32 a);

void func_020ef128(u8 *param_1, u8 *param_2)
{
    u8 acStack_50[64];
    u32 *p4;
    s32 uVar5;
    s32 iVar3;

    *(u32 *)(param_1 + 500) = (u32)func_020eefd0;
    *(u32 *)(param_1 + 0x1f8) = (u32)func_020ee9cc;
    *(u32 *)(param_1 + 0x1f0) = (u32)func_020ef02c;
    *(u32 *)(param_1 + 0x204) = (u32)func_020ee9b8;
    *(u32 *)(param_1 + 0x214) = func_020038b8(param_2, 0x1c);
    p4 = *(u32 **)(param_1 + 0x214);
    if (p4 != 0) {
        uVar5 = *(s32 *)(param_1 + 0x1ec);
        func_0205f050(acStack_50, 0x40, (u32)&data_02144e64, uVar5);
        iVar3 = func_0207df48(acStack_50);
        iVar3 = func_020785bc(iVar3, 0);
        p4[5] = iVar3;
        func_0205f050(acStack_50, 0x40, (u32)&data_02144e78, *(s32 *)(param_1 + 0x1ec));
        iVar3 = func_0207df48(acStack_50);
        iVar3 = func_020785bc(iVar3, 0);
        p4[6] = iVar3;
        func_0208fa4c(param_1, param_2, 3);
        uVar5 = func_02078224(*(s32 *)(*(u8 **)(param_1 + 0x1c) + 8) + 0x40, (u32)&data_0213302c);
        func_0208f884(param_1, 1, (s16)uVar5);
        uVar5 = func_02078224(*(s32 *)(*(u8 **)(param_1 + 0x1c) + 8) + 0x40, (u32)&data_0213303c);
        func_0208f884(param_1, 2, (s16)uVar5);
        func_0208e690(*(u8 **)(param_1 + 0x74) + 0x24, p4[5]);
        func_0208e690(*(u8 **)(param_1 + 0x74) + 0x48, p4[6]);
        p4[3] = (u32)((u8 *)((u32)*(u8 **)(param_1 + 0x74) + 0x24) + 0x14);
        p4[4] = (u32)((u8 *)((u32)*(u8 **)(param_1 + 0x74) + 0x48) + 0x14);
        *(u32 *)(p4[3] + 0xc) = 0;
        *(u32 *)(p4[4] + 0xc) = 0;
        *(u32 *)(p4[3] + 8) = 0;
        *(u32 *)(p4[4] + 8) = 0;
        p4[0] = 0;
        p4[1] = 0;
        *(u16 *)((u8 *)p4 + 8) = 0;
    }
    *(u32 *)(param_1 + 0xac) = 0;
}
