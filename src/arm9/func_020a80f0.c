#include "ctx.h"

typedef struct {
    u16 flags;
    s16 idx;
    u8 pad[16];
} Entry;

typedef struct {
    u8 pad0[4];
    u16 f4;
    u16 f6;
    u16 f8;
    u8 pad1[4];
    u16 f14;
    u8 pad2[16];
    Entry entries[16];
} Obj;

extern Obj *data_0215942c;
extern void func_020a85c4(Obj *obj, u32 n);
extern void func_020a8328(u32 *p);

void func_020a80f0(u32 *param_1, u16 param_2, u16 param_3)
{
    Obj *puVar3;
    s16 sVar1;
    u16 uVar1;
    Entry *e;

    puVar3 = data_0215942c;
    func_020a85c4(puVar3, 4);
    puVar3->f4 = 3;
    puVar3->f6 = 2;
    puVar3->f8 = param_3;
    puVar3->f14 = param_2;
    sVar1 = puVar3->f14;
    e = &puVar3->entries[sVar1];
    uVar1 = e->flags;
    e->flags = uVar1 | 1;
    e->idx = sVar1;
    if (param_1 != 0) {
        func_020a8328(param_1);
    }
}
