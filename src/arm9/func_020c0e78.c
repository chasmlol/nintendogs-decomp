#include "ctx.h"

extern u8 data_02132764[];
extern u8 data_02132774[];
extern u8 data_02132754[];
extern u8 data_02132784[];
extern u8 data_02132794[];
extern void func_020bdd1c(s32 a, s32 b);
extern s32 *func_020038b8(s32 *a, s32 b);
extern void func_020d3500(s32 *a, s32 *b, s32 c, s32 d);
extern u32 func_02078224(s32 a, u8 *b);
extern void func_0208f86c(s32 a, s16 b, void *c);
extern void func_020c0d38(void);
extern void func_020bfedc(void);
extern void func_020c0e74(void);
extern void func_020bfe80(void);
extern void func_020c154c(void);
extern void func_020c11f0(void);
extern void func_020c10fc(void);
extern void func_020c1008(void);
extern void func_020c12e0(void);

void func_020c0e78(s32 *param_1, s32 *param_2)
{
    s32 *piVar3;
    u32 uVar2;

    func_020bdd1c((s32)param_1, 0x30);
    *(u32 *)((u8 *)param_1 + 0x1f4) = (u32)func_020c0d38;
    *(u32 *)((u8 *)param_1 + 0x1f8) = (u32)func_020bfedc;
    *(u32 *)((u8 *)param_1 + 0x1f0) = (u32)func_020c0e74;
    *(u32 *)((u8 *)param_1 + 0x1fc) = (u32)func_020bfe80;
    *(u32 *)((u8 *)param_1 + 0x124) = 0x333;
    *(u32 *)((u8 *)param_1 + 0x128) = 0x800;
    *(u32 *)((u8 *)param_1 + 0x12c) = 3;
    *(s32 **)((u8 *)param_1 + 0x214) = func_020038b8(param_2, 0xb0);
    piVar3 = *(s32 **)((u8 *)param_1 + 0x214);
    func_020d3500(piVar3, param_2, 4, 0xb33);
    piVar3[7] = 0;
    uVar2 = func_02078224(*(s32 *)(*(s32 *)((u8 *)param_1 + 0x1c) + 8) + 0x40, data_02132764);
    func_0208f86c((s32)param_1, (s16)uVar2, func_020c154c);
    uVar2 = func_02078224(*(s32 *)(*(s32 *)((u8 *)param_1 + 0x1c) + 8) + 0x40, data_02132774);
    func_0208f86c((s32)param_1, (s16)uVar2, func_020c11f0);
    uVar2 = func_02078224(*(s32 *)(*(s32 *)((u8 *)param_1 + 0x1c) + 8) + 0x40, data_02132754);
    func_0208f86c((s32)param_1, (s16)uVar2, func_020c10fc);
    uVar2 = func_02078224(*(s32 *)(*(s32 *)((u8 *)param_1 + 0x1c) + 8) + 0x40, data_02132784);
    func_0208f86c((s32)param_1, (s16)uVar2, func_020c1008);
    uVar2 = func_02078224(*(s32 *)(*(s32 *)((u8 *)param_1 + 0x1c) + 8) + 0x40, data_02132794);
    func_0208f86c((s32)param_1, (s16)uVar2, func_020c12e0);
}
