#include "ctx.h"

extern u32 data_02159070;

void func_0206c7bc(u32 a, u8 *b, u32 c);
void func_02095670(u8 *p);
void func_020955e4(u8 *p, s32 a);
void func_02094afc(u8 *p, s32 a, s32 b);
void func_02094994(u8 *p, s32 a, s32 b);
void func_02094294(u8 *p);
s32 func_020955c0(s32 a);
void func_0209300c(u8 *p, s32 a);
void func_0206c7d4(u32 a, u8 *b, u32 c);
void func_02080d84(u8 *p);

void func_020b42c0(u8 *param_1, s16 param_2, u8 *param_3)
{
    vu16 s0;
    vu16 s2;
    vu16 s4;
    s32 i;
    vu16 s6;
    u8 *q;
    u8 *r8;
    u32 t0, t1;

    s0 = 0;
    func_0206c7bc(s0, param_1, 0x74f8);
    *(u16 *)param_1 = 0;
    *(u16 *)(param_1 + 2) = 0;
    func_02095670(param_1 + 4);
    s2 = 0;
    func_0206c7bc(s2, 2144 + param_1, 0x18b0);
    s4 = 0;
    func_0206c7bc(s4, param_1 + 0x2110, 0x500);
    *(s16 *)(param_1 + 0x2610) = -1;
    *(s16 *)(param_1 + 0x2612) = -1;
    s6 = 0;
    func_0206c7bc(s6, param_1 + 0x2614, 0xa4);
    *(s16 *)(param_1 + 0x74f0) = -1;
    func_020955e4(4 + param_1, param_2);
    i = 0;
    q = param_1 + 2144;
    r8 = param_1 + 0x2110;
    do {
        func_02094afc(q, param_2, i);
        func_02094994(r8, param_2, i);
        i = (s16)(1 + i);
        q += 316;
        r8 += 64;
    } while (20 > i);
    if (param_3 != 0) {
        t0 = *(vu16 *)param_3;
        t1 = *(vu16 *)(param_3 + 2);
        *(u16 *)(param_1 + 0x2610) = t0;
        *(u16 *)(param_1 + 0x2612) = t1;
    } else {
        *(s16 *)(param_1 + 0x2610) = -1;
        *(s16 *)(param_1 + 0x2612) = -1;
    }
    func_02094294(param_1 + 0x2614);
    i = 0;
    q = 0x267c + param_1;
    do {
        func_0209300c(q, func_020955c0(i));
        i = (s16)(i + 1);
        q = q + 20;
    } while (i < 3);
    func_0206c7d4(data_02159070, param_1 + 0x26b8, 0x4e38);
    *(u16 *)((u32)param_1 + 0x74f0) = 2000;
    func_02080d84(0x74f2 + param_1);
}
