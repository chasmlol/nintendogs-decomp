#include "ctx.h"

typedef volatile s16 vs16;
extern s32 data_02159198;
extern s16 data_02159148;
extern s32 data_021591a0;
extern void func_0209e494(s32 a);
extern void func_0209e894(s32 a, s32 b);
extern void func_02070b54(s32 *p, s32 v);
extern void func_02070c18(s32 *p, s32 v);
extern void func_02072fe4(s32 *p, s32 a, s32 b);
extern void func_02070ac8(s32 *p, s32 a, s32 b);

void func_0209e038(s32 param_1)
{
    s32 *piVar1;

    piVar1 = (s32 *)&data_02159198;
    if (*(vs16 *)((u8 *)piVar1 + 52) == 127) {
        *(s16 *)((u8 *)piVar1 + 88) = *(vs16 *)((u8 *)piVar1 + 52);
        return;
    }
    if (*piVar1 == 0) {
        goto blockA;
    }
    if (data_02159148 == 100) {
        if (param_1 != 0) {
            *(s16 *)((u8 *)piVar1 + 88) = *(s16 *)((u8 *)piVar1 + 52);
            func_0209e494(0);
        }
    } else {
        func_02070b54(piVar1, param_1);
    }
    goto after;
blockA:
    if (param_1 == 0 && data_02159148 == 100) {
        func_0209e894(100, *(s16 *)((u8 *)piVar1 + 88));
    }
after:
    if (param_1 == 0) {
        goto zero;
    }
    func_02070c18(piVar1 + 2, 0);
    return;
zero:
    func_02070c18(piVar1 + 2, 0);
    piVar1 = (s32 *)&data_021591a0;
    func_02072fe4(piVar1, 48, 6);
    func_02070ac8(piVar1, 127, 0);
    func_02070ac8(piVar1, 95, 300);
    return;
}
