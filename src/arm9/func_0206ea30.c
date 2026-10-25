#include "ctx.h"

extern u32 data_0213e4e4;
extern u32 data_0213e4e8;
extern u32 data_0213e4e0;
extern u32 *func_0206fc5c(void);
extern u32 func_0206fd3c(void);
extern u32 func_0205e270(u32 a, u32 b);

s32 func_0206ea30(u32 param_1, s32 param_2)
{
    s32 iVar6;
    u32 *puVar3;
    s32 iVar4;
    u32 uVar5;
    s32 r;

    puVar3 = func_0206fc5c();
    if (param_1 < 1000) {
        return param_2;
    }
    if (puVar3 == 0) {
        goto notfound;
    }
loop:
    if (puVar3[0] != param_1) {
        goto next;
    }
    if (param_1 != data_0213e4e4) {
        goto fin;
    }
    iVar6 = 0;
    goto check;
body:
    param_2 = param_2 + 1;
    iVar4 = func_0206fd3c();
    uVar5 = func_0206fd3c();
    r = func_0205e270((puVar3[1] + iVar4) - 1, uVar5);
    iVar6 = iVar6 + 1;
    if (param_2 > r - 1) {
        param_2 = 0;
    }
    if (iVar6 > 2) {
        goto fin;
    }
check:
    if (param_2 == (s32)data_0213e4e0) {
        goto body;
    }
    if (param_2 == (s32)data_0213e4e8) {
        goto body;
    }
fin:
    iVar6 = data_0213e4e0;
    data_0213e4e4 = param_1;
    data_0213e4e8 = iVar6;
    data_0213e4e0 = param_2;
    return param_2;
next:
    puVar3 = (u32 *)puVar3[10];
    if (puVar3 != 0) {
        goto loop;
    }
notfound:
    return -1;
}
