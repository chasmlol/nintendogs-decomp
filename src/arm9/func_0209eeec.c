#include "ctx.h"

extern u8 data_02159184[];
extern u8 data_02159198[];
extern u8 data_02159074[];

void func_02070ba8(u32 a, u32 b, u32 c);
void func_0209ad94(void);
void func_02072cf0(u32 a, s32 b);
void func_0209adc8(u32 a);
void func_0209ae94(u32 a);
void func_0207307c(u8 *p, u32 a);
void func_02070ac8(u8 *p, u32 a, u32 b);
u64 func_0205e270(u32 a, u32 b);

u32 func_0209eeec(u32 param_1, s32 param_2)
{
    s32 r8;
    u8 *p5;
    u8 *p4;

    p5 = data_02159198;
    p4 = data_02159184;
    if (param_1 == 0x1d || param_1 == 0x1e) {
        goto COMMON;
    }
    if (param_1 != 0x1f) {
        goto OTHER;
    }
    if (*(s32 *)(p4 + 0x10) == 0) {
        return 0;
    }
    func_02070ba8(0x13, 0x40, 0);
    *(s32 *)(p4 + 0x10) = 0;
COMMON:
    r8 = *(s32 *)(data_02159074 + 4);
    if (*(u16 *)(data_02159074 + 24) != 0x18) {
        func_0209ad94();
    }
    func_02072cf0(param_1, r8);
    goto LAB;
OTHER:
    r8 = *(s32 *)data_02159074;
    func_0209adc8(3);
    func_02072cf0(param_1, r8);
    func_0209ae94(4);
LAB:
    func_0207307c(p4, param_1);
    func_02070ac8(p4, param_2, 0);
    *(s32 *)(p4 + 0xc) = 1;
    if (*(s32 *)p5 != 0) {
        u64 uVar4 = func_0205e270(*(s16 *)(p5 + 12), *(s32 *)(p4 + 4));
        func_02070ac8(p5, (u32)uVar4, 0);
    }
    return 1;
}
