#pragma avoid_byte strb
#include "ctx.h"
extern u8 data_0215ae08[];
extern u8 data_0215ae30[];
extern u8 data_0215ae84[];
extern u8 data_0215ae34[];
extern u8 data_0215ae8c[];
extern u8 data_0215aea4[];
extern u8 data_0215ae54[];
extern u8 data_0215ae10[];
extern u8 data_0215ae2c[];
extern u8 data_0215ae58[];
extern u8 data_0215b064[];
extern u8 data_0215aecc[];
extern u8 data_027c0b30[];
extern void func_020dd404(s32 a, s32 b);
extern u32 func_0207d51c(u32 a, u32 b, u32 c);
extern void func_02070b48(void *p);
extern void func_020dd360(void *p);
extern void func_020dd370(void *p, s32 a);
extern void func_020dfd3c(u32 a, u32 b);
extern void func_020dd298(void *p);
extern void func_020dcd60(void *p, s32 a);
extern void func_020e20d0(void);

static inline void SwapFix(u32 v, u8 *p) { *(u8 *)(p) = (u8)(v); }

void func_020df59c(s32 param_1, s32 param_2)
{
    s32 iVar3;
    u32 uVar4;
    u8 *pa;
    u8 *pb;
    u32 uVar7;
    s32 *piVar6;
    s32 c20;
    s32 *piVar1;
    s32 *dst;
    u32 k2;
    s32 *p84;
    s32 pv;

    func_020dd404(param_1, param_2);
    iVar3 = func_0207d51c(*(u32 *)data_0215ae08, 0xbb8c, 4);
    *(s32 *)data_0215ae30 = iVar3;
    *(s32 *)data_0215ae84 = iVar3 + 0xc;
    func_02070b48(data_0215ae34);
    piVar6 = (s32 *)data_0215ae8c;
    uVar7 = 0;
    do {
        c20 = 20;
        piVar1 = (s32 *)data_0215ae8c;
        dst = (s32 *)data_0215aea4;
        func_020dd360(piVar6);
        func_020dd370(piVar6, c20);
        piVar6 = piVar6 + 1;
        dst[uVar7] = piVar1[uVar7];
        uVar7 = uVar7 + 1;
    } while (uVar7 < 3);
    uVar4 = func_0207d51c(*(u32 *)data_0215ae08, 0x2000, 0x20);
    *(u32 *)data_0215ae54 = uVar4;
    func_020dfd3c(uVar4, 0x2000);
    p84 = (s32 *)data_0215ae84;
    k2 = 0;
    pv = *p84;
    SwapFix(k2, data_0215ae10);
    *(s32 *)data_0215ae2c = pv;
    *(u32 *)data_0215ae58 = 1;
    pa = data_0215b064;
    pb = data_0215aecc;
    do {
        func_020dd298(pa);
        func_020dd298(pb);
        k2 = k2 + 1;
        pa = pa + 0x88;
        pb = pb + 0x88;
    } while (k2 < 3);
    func_020dcd60(data_027c0b30, 0x20);
    func_020e20d0();
}
