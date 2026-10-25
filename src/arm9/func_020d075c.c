#include "ctx.h"

typedef struct {
    u32 w[3];
} T3;

extern s16 data_02126868[];
extern void func_020cd984(void *a, void *b, void *c, void *d, void *e, void *f);

void func_020d075c(u32 *param_1, u8 *param_2)
{
    s32 iVar1;
    s32 t;
    s64 v;
    u32 uVar3;

    *(T3 *)(param_2 + 0x30) = *(T3 *)param_1;
    *(T3 *)(param_2 + 0x3c) = *(T3 *)(param_1 + 3);
    func_020cd984(param_2 + 0x60, param_2 + 0x54, param_2 + 0x48, param_2 + 0x30, param_2 + 0x3c, param_1 + 6);
    uVar3 = param_1[9];
    v = (s64)(s32)uVar3 * (s64)0xB60B60B60BLL;
    t = (s32)((v + ((s64)0x800 << 32)) >> 32);
    iVar1 = (s32)((u32)(t * 16) >> 16) >> 4;
    *(u16 *)(param_2 + 0x6c) = data_02126868[iVar1 * 2];
    *(u16 *)(param_2 + 0x6e) = data_02126868[iVar1 * 2 + 1];
}
