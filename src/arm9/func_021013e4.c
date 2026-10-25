#include "ctx.h"
#pragma opt_strength_reduction off

typedef struct {
    u32 pad0;
    u32 base;
    u16 uVar2;
    u16 uVar6;
    u8 pad1[0x10];
    u16 sVar3;
    u16 uVar1;
    u32 flag;
    u16 hx;
} Q;

extern s32 data_0215be4c;
extern void func_020864fc(u32 *p, u32 a, u32 b, u32 c, u32 d, u32 e);

void func_021013e4(u32 unused, u8 *o)
{
    Q *q;
    u32 rows;
    u32 zero;
    s32 row;
    s32 i;
    u32 uVar9;
    u32 base;
    s32 col;
    u32 uVar6;
    u32 sVar3;
    u32 hi;
    u32 uVar2;
    u32 uVar1;
    u32 uVar5;
    s32 iVar8;

    q = (Q *)(o + 0x18);
    uVar1 = q->uVar1;
    hi = (uVar1 << 28) >> 16;
    uVar5 = *(u16 *)(o + 0xe);
    uVar9 = *(u16 *)(o + 0xc);
    uVar2 = q->uVar2;
    uVar6 = q->uVar6;
    base = q->base;
    sVar3 = q->sVar3;
    rows = uVar5;
    row = 0;
    if ((s32)uVar5 > 0) {
        col = row;
        zero = row;
        do {
            i = zero;
            if ((s32)uVar9 > 0) {
                do {
                    *(u16 *)(base + (uVar2 + i + (uVar6 * 32)) * 2) = (u16)(hi | ((i + col + sVar3) & 0x3ff));
                    i++;
                } while (i < (s32)uVar9);
            }
            row++;
            col += uVar9;
            uVar6++;
        } while (row < (s32)rows);
    }
    iVar8 = data_0215be4c + 0x2948;
    if (iVar8 != 0) {
        iVar8 = iVar8 + ((s32)(q->hx << 5) / 2) * 2;
    }
    *(u32 *)(o + 0x10) = iVar8;
    func_020864fc((u32 *)&q->pad1[0], *(u32 *)(o + 0x10), (uVar9 << 19) >> 16, (rows << 19) >> 16, 0, 0);
    q->flag = 1;
}
