#include "ctx.h"

extern void func_020bdd1c(u8 *o, s32 v);
extern void *func_020038b8(u32 *a, s32 v);
extern u32 func_02078224(u32 a, u32 b);
extern void func_0208f86c(u8 *o, s32 v, void *p);

extern u8 data_021327f4[];
extern u8 data_021327e4[];
extern u8 data_02132814[];
extern u8 data_021327c4[];
extern u8 data_021327b4[];
extern u8 data_02132804[];
extern u8 data_02132824[];
extern u8 data_021327a4[];
extern u8 data_021327d4[];
extern u8 data_02132834[];

extern void func_020c5624(void);
extern void func_020c48b8(void);
extern void func_020c5784(void);
extern void func_020c485c(void);
extern void func_020c4748(void);
extern void func_020c5af0(void);
extern void func_020c5ae0(void);
extern void func_020c5ad0(void);
extern void func_020c5ac0(void);
extern void func_020c5ab0(void);
extern void func_020c5aa0(void);
extern void func_020c5a90(void);
extern void func_020c5a80(void);
extern void func_020c5a70(void);
extern void func_020c5a60(void);

void func_020c5788(u8 *param_1, u32 *param_2)
{
    s32 i;
    u32 *p;
    u32 v;

    func_020bdd1c(param_1, 0x4e);
    *(u32 *)(param_1 + 0x1f4) = (u32)func_020c5624;
    *(u32 *)(param_1 + 0x1f8) = (u32)func_020c48b8;
    *(u32 *)(param_1 + 0x1f0) = (u32)func_020c5784;
    *(u32 *)(param_1 + 0x1fc) = (u32)func_020c485c;
    *(u32 *)(param_1 + 0x200) = (u32)func_020c4748;
    *(u32 *)(param_1 + 0x124) = 0x19a;
    *(u16 *)(param_1 + 0xa6) = 2;
    *(void **)(param_1 + 0x214) = func_020038b8(param_2, 0x124);

    p = *(u32 **)(param_1 + 0x214);
    i = 0;
    do {
        p[0] = 0;
        p[1] = 0;
        p[2] = i * -0x1000;
        p[0x21] = 0;
        p[0x22] = 0;
        p[0x23] = 0;
        p += 3;
        i = (s16)(i + 1);
    } while (i < 11);

    if (param_1 != 0) {
        *(u32 *)(param_1 + 0x24) = 0x1000;
        *(u32 *)(param_1 + 0x28) = 0x1000;
        *(u32 *)(param_1 + 0x2c) = 0x1000;
    }

    v = func_02078224(*(u32 *)(*(u32 *)(param_1 + 0x1c) + 8) + 0x40, (u32)data_021327f4);
    func_0208f86c(param_1, (s16)v, (void *)func_020c5af0);
    v = func_02078224(*(u32 *)(*(u32 *)(param_1 + 0x1c) + 8) + 0x40, (u32)data_021327e4);
    func_0208f86c(param_1, (s16)v, (void *)func_020c5ae0);
    v = func_02078224(*(u32 *)(*(u32 *)(param_1 + 0x1c) + 8) + 0x40, (u32)data_02132814);
    func_0208f86c(param_1, (s16)v, (void *)func_020c5ad0);
    v = func_02078224(*(u32 *)(*(u32 *)(param_1 + 0x1c) + 8) + 0x40, (u32)data_021327c4);
    func_0208f86c(param_1, (s16)v, (void *)func_020c5ac0);
    v = func_02078224(*(u32 *)(*(u32 *)(param_1 + 0x1c) + 8) + 0x40, (u32)data_021327b4);
    func_0208f86c(param_1, (s16)v, (void *)func_020c5ab0);
    v = func_02078224(*(u32 *)(*(u32 *)(param_1 + 0x1c) + 8) + 0x40, (u32)data_02132804);
    func_0208f86c(param_1, (s16)v, (void *)func_020c5aa0);
    v = func_02078224(*(u32 *)(*(u32 *)(param_1 + 0x1c) + 8) + 0x40, (u32)data_02132824);
    func_0208f86c(param_1, (s16)v, (void *)func_020c5a90);
    v = func_02078224(*(u32 *)(*(u32 *)(param_1 + 0x1c) + 8) + 0x40, (u32)data_021327a4);
    func_0208f86c(param_1, (s16)v, (void *)func_020c5a80);
    v = func_02078224(*(u32 *)(*(u32 *)(param_1 + 0x1c) + 8) + 0x40, (u32)data_021327d4);
    func_0208f86c(param_1, (s16)v, (void *)func_020c5a70);
    v = func_02078224(*(u32 *)(*(u32 *)(param_1 + 0x1c) + 8) + 0x40, (u32)data_02132834);
    func_0208f86c(param_1, (s16)v, (void *)func_020c5a60);
}
