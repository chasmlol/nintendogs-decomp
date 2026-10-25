#include "ctx.h"

typedef struct {
    u16 flags;
    s16 idx;
    u8 pad[16];
} Entry;

typedef struct {
    u8 pad0[4];
    u16 f4;
    u8 pad1[8];
    u16 f14;
    u16 f16;
    u8 pad2[14];
    Entry entries[16];
} Obj;

extern Obj *data_0215942c;
extern void func_020a85c4(Obj *obj, u32 n);

void func_020a7dd4(u32 *param_1, u16 param_2, u16 param_3)
{
    Obj *puVar5;
    s16 sVar2;
    u32 uVar4;
    u16 uVar1;
    Entry *e;

    puVar5 = data_0215942c;
    func_020a85c4(puVar5, 0x10);
    puVar5->f4 = 0;
    puVar5->f14 = param_2;
    puVar5->f16 = param_3;
    sVar2 = puVar5->f14;
    e = &puVar5->entries[sVar2];
    uVar1 = e->flags;
    e->flags = uVar1 | 1;
    uVar4 = uVar1 | 1;
    e->idx = sVar2;
    if (param_1 != 0) {
        uVar4 = 0x42415448;
        *param_1 = uVar4;
        *(u16 *)(param_1 + 1) = 0;
    }
}
