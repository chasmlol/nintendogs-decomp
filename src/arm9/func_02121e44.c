#include "ctx.h"

typedef struct Obj {
    void (*func)(s32 idx, s32 y);  /* 0x00 */
    s32 base;               /* 0x04 */
    u32 pad08;              /* 0x08 */
    s32 top;                /* 0x0c */
    s32 bottom;             /* 0x10 */
    s32 count;              /* 0x14 */
    u16 ids[16];            /* 0x18 */
    s32 f38;                /* 0x38 */
    s32 height;             /* 0x3c */
    s32 pad40;              /* 0x40 */
    s32 limit;              /* 0x44 */
    s32 pos;                /* 0x48 */
    s32 lower;              /* 0x4c */
    s32 cursor;             /* 0x50 */
    s32 pad54;              /* 0x54 */
    s32 f58;                /* 0x58 */
} Obj;

extern BOOL func_021225f0(Obj *p);
extern void func_02122768(Obj *p);
extern s32 func_02112bc0(int a, u32 b);
extern s32 func_02112bf0(int a, u32 b);
extern void func_021129b4(int a, u32 b, u32 c, u32 d);
extern void func_02112a50(int a, u32 b, u32 c, s32 d);

void func_02121e44(Obj *P)
{
    int i;
    int iVar4;
    int j;
    int iVar1;
    u32 uVar6;
    int two;
    u32 uVar5;
    int iVar2;
    int iVar3;
    s32 iVar8;

    if (!func_021225f0(P)) {
        return;
    }
    if (P->lower > P->pos) {
        P->pos = P->pos + 1;
        func_02122768(P);
    } else {
        P->pos = P->pos - 1;
        i = 0;
        if (P->count > 0) {
            do {
                two = 2;
                uVar6 = P->ids[i];
                iVar4 = P->height;
                iVar1 = func_02112bc0(two, uVar6);
                j = 0;
                if (iVar4 - 1 > 0) {
                    uVar5 = uVar6;
                    do {
                        iVar2 = func_02112bf0(two, (u16)uVar5);
                        iVar3 = func_02112bc0(two, (u16)(uVar5 + 1));
                        func_021129b4(two, (u16)(s32)uVar5, iVar2, iVar3);
                        uVar5 = uVar5 + 1;
                        j = j + 1;
                    } while (j < iVar4 - 1);
                }
                uVar5 = uVar6 + iVar4 - 1;
                iVar8 = func_02112bf0(two, (u16)uVar5);
                func_021129b4(two, (u16)(s32)uVar5, iVar8, iVar1);
                i = i + 1;
            } while (i < P->count);
        }
        P->cursor = P->cursor - 1;
        if (P->cursor < 0) {
            P->cursor = P->height - 1;
        }
        if (P->pos - 1 >= 0 && P->pos - P->height < P->lower) {
            P->func(P->cursor, P->pos - 1);
        }
    }
    iVar8 = P->base;
    {
        s32 h = P->limit - P->height + 2;
        s32 pos = P->pos;
        u32 id = (u16)(iVar8 + 7);
        s32 y = P->top * (h - pos) / h + P->bottom * pos / h;
        s32 bc = func_02112bc0(2, id);
        func_02112a50(2, id, 0, y - bc);
        func_02112a50(2, (u16)(iVar8 + 8), 0, y - bc);
    }
    P->f58 = 0;
    P->f38 = 0;
}
