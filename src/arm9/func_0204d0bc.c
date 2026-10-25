#include "ctx.h"

extern u32 *data_0214f464;
extern void func_02039448(u8 *p);
extern void func_02027654(s32 a, u8 *b);
extern void func_02037450(u8 *p, s32 a);
extern s32 func_02035744(u8 *p, s32 a);
extern s32 func_0203567c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);

typedef struct { u32 a, b, c; } Trio;

void func_0204d0bc(u8 *param_1, s32 param_2)
{
    u32 uVar2;
    u16 sel;
    u32 *rng;
    s32 st;

    if (param_2 == 0) {
        return;
    }
    st = *(s32 *)(param_1 + 0x464);
    if (st == 1) {
        goto caseS1;
    }
    if (st == 2) {
        goto caseS2;
    }
    func_02039448(param_1);
    func_02027654(param_2, param_1 + 0x278);
    *(Trio *)(param_1 + 0x3b4) = *(Trio *)(param_1 + 0x278);
    func_02037450(param_1, 0x300);
    rng = data_0214f464;
    uVar2 = *rng * 0x10dcd + 1;
    *rng = uVar2;
    sel = (u16)(((u32)(u16)uVar2 * 10u) >> 16);
    if (sel == 0) {
        goto c0;
    }
    if (sel == 1) {
        goto c1;
    }
    return;
c0:
    func_0203e8cc(param_1, 0, 0xa7);
    *(s32 *)(param_1 + 0x464) = 1;
    return;
c1:
    func_0203e8cc(param_1, 0, 0xa8);
    *(s32 *)(param_1 + 0x464) = 2;
    return;
caseS1:
    func_02039448(param_1);
    func_02027654(param_2, param_1 + 0x278);
    *(Trio *)(param_1 + 0x3b4) = *(Trio *)(param_1 + 0x278);
    if (func_02035744(param_1, 0x1a) != 0) {
        func_02037450(param_1, 0x300);
    }
    if (func_0203567c(param_1) == 0) {
        return;
    }
    func_0203e8cc(param_1, 0, 8);
    *(s32 *)(param_1 + 0x464) = 0;
    *(s32 *)(param_1 + 0x468) = *(s32 *)(param_1 + 0x468) + 1;
    return;
caseS2:
    func_02039448(param_1);
    func_02027654(param_2, param_1 + 0x278);
    *(Trio *)(param_1 + 0x3b4) = *(Trio *)(param_1 + 0x278);
    if (func_02035744(param_1, 0x12) != 0) {
        func_02037450(param_1, 0x300);
    }
    if (func_0203567c(param_1) == 0) {
        return;
    }
    func_0203e8cc(param_1, 0, 8);
    *(s32 *)(param_1 + 0x464) = 0;
    *(s32 *)(param_1 + 0x468) = *(s32 *)(param_1 + 0x468) + 1;
    return;
}
