#include "ctx.h"
#pragma opt_loop_invariants off
#pragma opt_propagation off

typedef struct { s32 x, y, z; } Vec3;
typedef struct { u8 _0[0x1e]; s16 v1e; } Sub;
typedef struct { u8 _0[8]; Vec3 pos; } Ent;
typedef struct { u8 _0[0x2e]; s16 count; } Lst;
typedef struct { u8 _0[0x20]; Lst *lst; } Mgr;

typedef struct Obj {
    u8 _0[0x8d];
    s8 f8d;
    u8 _8e[0x13e - 0x8e];
    s16 idx;
    s16 list[2];
    u8 _144[0x29c - 0x144];
    s32 off29c;
    Vec3 pos2a0;
    u8 _2ac[0x3b4 - 0x2ac];
    Vec3 out3b4;
    u8 _3c0[0x9e8 - 0x3c0];
    Sub *sub9e8;
} Obj;

extern Mgr *data_0214f45c;
Ent *func_0200c498(u32 a, s32 b);
s32 func_02009bd0(Vec3 *a, Vec3 *b);

void func_02035e64(Obj *p, s32 *best, s32 flagA, s32 flagB)
{
    s32 iVar7;
    s32 iVar5;
    s32 d;
    Ent *e;
    s32 bVar1;
    Mgr *dd;
    s32 k11;
    Vec3 *pv;
    s32 t13;
    s32 uStack_30;
    s32 vf;
    s32 vt;

    iVar7 = 0;
    if (data_0214f45c->lst->count <= 0) return;
    uStack_30 = 0;
    vf = 0;
    pv = &p->pos2a0;
    vt = 1;
    k11 = 11;
    do {
        e = func_0200c498(k11, iVar7);
        if (e != 0) {
            d = func_02009bd0(&e->pos, pv);
            if (p->f8d == 1 && p->sub9e8->v1e == 10000) {
                d -= 4096000;
            } else {
                d -= p->off29c;
            }
            if (d < *best) {
                if (flagA == 0) goto LAB_store;
                t13 = (s16)(iVar7 + 13);
                iVar5 = uStack_30;
                do {
                    if (t13 == p->list[iVar5]) {
                        bVar1 = vf;
                        goto LAB_found;
                    }
                    iVar5 = (s16)(iVar5 + 1);
                } while (iVar5 < 2);
                bVar1 = vt;
            LAB_found:
                if (bVar1) goto LAB_store;
                goto LAB_param4;
            LAB_store:
                *best = d;
                p->idx = (s16)(iVar7 + 13);
            LAB_param4:
                if (flagB != 0) {
                    p->out3b4 = e->pos;
                }
            }
        }
        dd = data_0214f45c;
        iVar7 = (s16)(iVar7 + 1);
    } while (iVar7 < dd->lst->count);
}
