#include "ctx.h"

typedef struct {
    u32 a;
    u32 b;
} Rng;

u32 func_0207dab4(u32 *p, u32 n);
u32 *func_0207da54(Rng *r, s32 v);
void func_0207da84(u32 *p, u32 *x, u32 y);

s32 func_0207d5b8(u32 *param_1, Rng *param_2)
{
    Rng loc;
    u32 uVar1;
    u32 uVar2;
    u32 uVar4;
    u32 *puVar3;

    loc = *param_2;
    uVar2 = 0;
    if (*param_1 != 0) {
        uVar1 = *param_1;
        do {
            uVar4 = uVar1;
            if (uVar4 < param_2->a) {
                uVar2 = uVar4;
                goto next;
            }
            if (uVar4 == param_2->b) {
                loc.b = *(u32 *)(uVar4 + 4) + (uVar4 + 0x10);
                func_0207dab4(param_1, uVar4);
            }
            break;
next:
            uVar1 = *(u32 *)(uVar4 + 0xc);
        } while (uVar1 != 0);
    }
    if (uVar2 != 0) {
        u32 sum = *(u32 *)(uVar2 + 4) + (uVar2 + 0x10);
        if (sum == param_2->a) {
            loc.a = uVar2;
            uVar2 = func_0207dab4(param_1, uVar2);
        }
    }
    if (loc.b - loc.a >= 16) {
        puVar3 = func_0207da54(&loc, 0x4652);
        func_0207da84(param_1, puVar3, uVar2);
        return 1;
    }
    return 0;
}
