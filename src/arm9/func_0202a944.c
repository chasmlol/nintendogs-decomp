#include "ctx.h"

extern u32 *data_0214f464;
extern void func_020a12dc(int a, int b, int c, int *d);
extern u8 func_02009f38(int *a, int *b);

typedef struct {
    int w0;
    int w1;
    int w2;
} Trip;

u32 func_0202a944(int param_1)
{
    u8 bVar2;
    u16 sgn;
    int iVar6;
    int iVar5;
    int iVar4;
    int iVar3;

    *(Trip *)(param_1 + 0x260) = *(Trip *)(param_1 + 0x490);
    iVar3 = *(int *)(param_1 + 0x264);
    iVar4 = *(int *)(param_1 + 0x260);
    if (iVar3 <= 0) {
        iVar3 = -iVar3;
    }
    if (iVar4 <= 0) {
        iVar4 = -iVar4;
    }
    iVar5 = iVar4 + iVar3;
    iVar6 = *(int *)(param_1 + 0x268);
    if (iVar6 <= 0) {
        iVar6 = -iVar6;
    }
    func_020a12dc(0x2a, 2, iVar6 + iVar5, (int *)(param_1 + 0x950));
    if (*(int *)(param_1 + 0x2a4) > 0x400) {
        *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) >> 2;
        *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x264) + 0x400;
        *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x268) >> 2;
        iVar4 = *data_0214f464 * 0x10dcd + 1;
        sgn = (u32)(iVar4 * 0x10000) >> 31;
        *data_0214f464 = iVar4;
        if (sgn == 0) goto s431;
        if (sgn != 1) goto zero;
        goto s432;
    s431:
        *(s16 *)(param_1 + 0xea) = 0x431;
        return 1;
    s432:
        *(s16 *)(param_1 + 0xea) = 0x432;
        return 1;

    }
    bVar2 = func_02009f38((int *)(param_1 + 0x260), (int *)(param_1 + 0x18c));
    if (bVar2) {
        *(s16 *)(param_1 + 0xea) = 0x434;
        return 1;
    }
    *(s16 *)(param_1 + 0xea) = 0x435;
    return 1;
zero:
    return 0;
}
