#include "ctx.h"

typedef struct {
    u8 pad[0xd0];
    u32 a[3];
    u32 b[3];
} Tbl;

u32 *func_020038b8(u32 *p, s32 size);
void func_ov009_0215cb20(u32 *p);

u32 *func_ov009_0215ca60(u32 *param_1)
{
    Tbl *t;
    s32 i;
    u32 *puVar3;

    puVar3 = func_020038b8(param_1, 0x100);
    puVar3[0] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0x800;
    puVar3[3] = 0x00000ddb;
    puVar3[4] = 0x00001555;
    puVar3[5] = 0x1000;
    puVar3[6] = 0x190000;
    puVar3[10] = 0;
    puVar3[0xb] = 0x1000;
    puVar3[0xc] = 0;
    *(u16 *)(puVar3 + 0x1d) = 0x1400;
    *(u16 *)((u8 *)puVar3 + 0x76) = 0;
    *(u16 *)(puVar3 + 0x1e) = 0;
    puVar3[0x1c] = 0x5000;
    func_ov009_0215cb20(puVar3 + 2);
    t = (Tbl *)puVar3;
    i = 0;
    do {
        t->a[i] = 0;
        t->b[i] = 0;
        i = i + 1;
    } while (i < 3);
    puVar3[0x3a] = 0;
    puVar3[0x3b] = 0;
    *(u16 *)(puVar3 + 0x3c) = 0;
    *(u16 *)((u8 *)puVar3 + 0xf2) = 0;
    puVar3[0x3d] = 0;
    puVar3[0x3e] = 0;
    puVar3[0x3f] = 0;
    return puVar3;
}
