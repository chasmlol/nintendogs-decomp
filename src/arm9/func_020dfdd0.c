#include "ctx.h"

extern void func_020dffa0(void *a, void *b, u32 c, void *d);
extern void func_020dfe88(void *a, void *b, u32 c, void *d);

static inline u8 SwapB(u32 v, vu8 *p)
{
    u8 old;
    asm { swpb old, v, [p] }
    return old;
}

typedef struct {
    u32 p1;
    u8 ab[2];
    s16 l32[4];
    s16 l2a;
    u8 l28;
} Frame;

void func_020dfdd0(u16 *param_1, s32 param_2)
{
    Frame f;
    s32 iVar6;
    s32 iVar4;
    s32 iVar3;
    u8 *pAb;
    s32 n;
    s16 *pL2a;
    s32 iVar2;
    s32 iVar5;

    iVar6 = 0;
    asm { mov r1, #1 }
    asm { str param_1, [sp] }
    iVar3 = 0;
    asm { strh param_2, [sp, #6] }
    asm { strh r1, [sp, #8] }
    asm { mov iVar4, #65536 }
    pAb = f.ab;
    pL2a = &f.l2a;
    n = 2;
    do {
        SwapB(iVar3, (vu8 *)&f.l28);
        f.l2a = (s16)param_2;
        func_020dffa0(f.l32, pAb, n, pL2a);
        SwapB(iVar3, (vu8 *)&f.l28);
        func_020dfe88(pAb, &f.l32[2], n, pL2a);
        iVar2 = f.l32[2] - param_2;
        if (iVar2 < 0) {
            iVar2 = -iVar2;
        }
        iVar5 = iVar4;
        if (iVar2 < iVar4) {
            iVar5 = iVar2;
            iVar6 = iVar3;
        }
        iVar3 = (s8)(iVar3 + 1);
        iVar4 = iVar5;
    } while (iVar3 < 89);
    asm { ldr r0, [sp] }
    asm { mov r1, #0 }
    asm { strh r1, [r0] }
    asm { add r1, r0, #2 }
    asm { swpb r0, iVar6, [r1] }
}
