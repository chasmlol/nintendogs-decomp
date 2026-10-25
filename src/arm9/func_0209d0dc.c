#include "ctx.h"

typedef struct {
    s32 count;
    u16 used;
    u16 flags6;
    u16 flags8;
    u16 pad0a;
    s16 kind[3];
    s16 key[3];
    s32 slot[3];
    u16 index;
    u16 flags26;
    s32 arr28[3];
} Obj;

extern void *data_0214204c[];
extern s16 data_02159148[];
extern s32 data_02159198[];
extern s32 func_020a18d0(void *e);
extern s32 func_0209b878(Obj *p);
extern s32 func_020bc14c(void);
extern s32 func_01ffdb08(s32 i);
extern s32 func_02027060(s32 v);
extern void func_020a2fc0(s32 v, s32 k);
extern void func_020a2a70(s32 k, s32 i);
extern void func_0209edc4(s32 v);

s32 func_0209d0dc(Obj *param_1, s32 param_2)
{
    Obj *p = param_1;
    s16 *e;
    s16 uVar8;
    s32 uVar5;
    s32 i;
    u32 n;
    u16 bit;
    s32 iVar4;
    s32 iVar6;
    s32 iVar7;

    e = data_0214204c[p->index];
    uVar8 = e[1];
    if (func_020a18d0(e) != 0) {
        return -1;
    }
    n = p->count;
    i = 0;
    if ((s32)n > 0) {
        do {
            bit = (u16)(1 << i);
            if ((*(u16 *)((u8 *)p + 4) & bit) != 0 && param_2 == p->key[i] && p->slot[i] != 0) {
                *(u16 *)((u8 *)p + 6) |= bit;
                return i;
            }
            i = (s16)(i + 1);
        } while (i < (s32)n);
    }
    uVar5 = func_0209b878(p);
    if (uVar5 != -1) {
        p->key[uVar5] = (s16)param_2;
        bit = (u16)(1 << uVar5);
        *(u16 *)((u8 *)p + 4) |= bit;
        *(u16 *)((u8 *)p + 6) |= bit;
        *(u16 *)((u8 *)p + 8) |= bit;
        p->arr28[uVar5] = 0;
        *(u16 *)((u8 *)p + 0x26) &= ~bit;
        if (p->kind[uVar5] == 0x1f && data_02159148[1] != 4 && data_02159148[1] != 5) {
            iVar6 = func_020bc14c();
            iVar4 = 0;
            do {
                iVar7 = func_01ffdb08(iVar4);
                if (iVar7 != 0) {
                    if (iVar6 == -1) {
                        func_020a2fc0(iVar7, param_2);
                    } else {
                        if (func_02027060(iVar7) != 0 && iVar6 == iVar4) {
                            func_020a2fc0(iVar7, param_2);
                            func_020a2a70(param_2, iVar4);
                        }
                    }
                }
                iVar4 = (s16)(iVar4 + 1);
            } while (iVar4 < 3);
        }
    }
    if (data_02159198[1] == 0) {
        if (uVar8 == 8 || uVar8 == 26 || uVar8 == 32) {
            func_0209edc4(uVar8);
        }
    }
    return uVar5;
}
