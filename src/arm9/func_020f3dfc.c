#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_strength_reduction off

typedef struct Node {
    u8 b0;
    u8 flag;
    u8 mid[0x21];
    u8 b23;
    u8 pad24[0xc];
    s32 f30;
} Node;

typedef struct Gp {
    s32 f0;
    s32 f4;
    u8 pad8[8];
    u16 f10;
    s8 f12;
    u8 pad13;
    s32 f14;
    s32 f18;
    u8 pad1c[0x34];
    Node *tab[3][8][5];
    u8 pad230[0x24];
    s32 lcg;
} Gp;

extern Gp *data_0215be44;
extern u8 data_021330cc[];
extern s32 data_021330d8[];
extern void func_020f4a10(s32 a, s32 b, s32 *c, s32 *d);
extern void func_020a092c(s32 a);

#define FXM(a, b) ((u32)((((s64)(s32)(a) * (s64)(s32)(b)) + 0x800) >> 12))

void func_020f3dfc(s32 param_1)
{
    s32 v8;
    s32 off1;
    u32 off2;
    s32 v7;
    s32 v6;
    s32 v5;
    s32 v4;
    s32 bnd;
    s32 offq;
    s32 outer;
    s32 cnt;
    s32 iVar10;
    s32 iVar11;
    s32 st;
    Node *p;
    Gp *gp;
    u8 *local_30;
    s32 local_2c;
    s32 local_28;

    data_0215be44->f14 = param_1;
    data_0215be44->f18 = param_1;
    data_0215be44->f12 = -1;
    data_0215be44->f10 = 0;
    data_0215be44->f4 = 0;
    v8 = 0;
    v5 = v8;
    do {
        v7 = 0;
        v4 = 0;
        do {
            v6 = 0;
            do {
                off1 = v5 + v4;
                p = *(Node **)((u32)off1 + (u32)data_0215be44 + v6 * 4 + 0x50);
                v6 = v6 + 1;
                if (p != 0) {
                    p->flag = p->flag | 1;
                }
            } while (v6 < 5);
            v7 = v7 + 1;
            v4 = v4 + 20;
        } while (v7 < 8);
        v8 = v8 + 1;
        v5 = v5 + 160;
    } while (v8 < 3);

    outer = 0;
    local_30 = data_021330cc;
    offq = 0;
    v4 = 31;
    do {
        bnd = (s32)(*local_30) >> 1;
        cnt = -bnd;
        if (cnt <= bnd) {
            do {
                func_020f4a10(param_1, outer, &local_2c, &local_28);
                if (local_2c >= 0) {
                    off2 = (u32)offq + (u32)data_0215be44;
                    p = *(Node **)(off2 + local_2c * 20 + local_28 * 4 + 0x50);
                    p->flag = p->flag & ~1;
                    gp = data_0215be44;
                    st = gp->lcg * 69069 + 1;
                    gp->lcg = st;
                    iVar11 = data_021330d8[outer];
                    iVar10 = iVar11 >> 1;
                    p->f30 = cnt * (iVar11 + FXM((s16)(u16)(st & 0xfff), iVar10) + iVar10);
                    p->b23 = (u8)v4;
                }
                cnt = cnt + 1;
            } while (cnt <= bnd);
        }
        outer = outer + 1;
        local_30 = local_30 + 1;
        offq = offq + 160;
    } while (outer < 3);
    func_020a092c(data_0215be44->f14);
}
