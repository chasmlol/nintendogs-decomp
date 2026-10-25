#include "ctx.h"

typedef struct {
    u32 w[3];
} T12;

extern u32 data_0213cde7;
extern void func_02067e34(void *a, void *b, void *c);
extern s32 func_02009f38(void *a, void *b);

void func_0202bc24(u8 *param_1)
{
    T12 local;
    s32 bVar1;
    s16 sVar2;

    local = *(T12 *)(param_1 + 0x490);
    func_02067e34(&local, param_1 + 0x2a0, &local);
    bVar1 = func_02009f38(&local, param_1 + 0x18c);
    sVar2 = bVar1 ? 0 : 1;
    switch (*(s8 *)((u8 *)&data_0213cde7 + *(s16 *)(param_1 + 0x152) * 8)) {
    case 0:
        *(s16 *)(param_1 + 0xea) = sVar2 + 0x40c;
        *(u16 *)(param_1 + 0xfa) = 0;
        return;
    case 1:
    case 2:
    case 3:
        goto common;
    default:
        goto dflt;
    }
common:
    *(s16 *)(param_1 + 0xea) = sVar2 + 0x40e;
    *(u16 *)(param_1 + 0xfa) = 0;
    return;
dflt:
    *(s16 *)(param_1 + 0xea) = 0x40b;
    *(u16 *)(param_1 + 0xfa) = 0;
}
