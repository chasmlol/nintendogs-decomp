#include "ctx.h"

extern u32 data_02159198;
extern u32 data_021591a0;

void func_02070c18(u8 *p, s32 v);
void func_02072fe4(u8 *p, s32 a, s32 b);
void func_020709f8(u8 *p, s32 a, s32 b);
void func_02070ac8(u8 *p, s32 a, s32 b);

void func_0209dec8(s32 param_1, s32 param_2)
{
    s32 lim;
    u8 *pA;
    u8 *pB;
    s32 iVar4;
    s32 sh;
    s32 iVar3;
    s32 v;

    pA = (u8 *)&data_02159198;
    pB = (u8 *)&data_021591a0;
    if (param_2 != 0) {
        if (*(u32 *)pA != 0) {
            func_02070c18(pA, 0);
        }
        if (*(u32 *)(pA + 0x4c) == 0) {
            func_02072fe4(pB, 48, 8);
            *(u32 *)(pA + 0x4c) = 1;
        }
        lim = 10000;
        iVar4 = 40;
        iVar3 = 2;
        sh = 6;
    } else {
        if (*(u32 *)pB == 0) {
            if (param_1 > 0) {
                func_02072fe4(pB, 48, 10);
            } else {
                if (param_1 < 0) {
                    func_02072fe4(pB, 48, 11);
                }
            }
        }
        lim = 10000;
        iVar4 = 10;
        iVar3 = 3;
        sh = 6;
    }
    if (*(u32 *)pB != 0) {
        if (param_1 < 0) {
            param_1 = -param_1;
        }
        if (param_1 > lim) {
            param_1 = lim;
        }
        func_020709f8(pB, 0xffff, param_1 >> iVar3);
        v = iVar4 + (param_1 >> sh);
        if (127 < v) {
            v = 127;
        }
        func_02070ac8(pB, v, 0);
    }
    *(u32 *)(pA + 0x50) = 1;
}
