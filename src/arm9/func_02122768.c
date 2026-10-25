#include "ctx.h"

typedef struct Obj {
    void (*func)(s32 idx, s32 y);  /* 0x00 */
    u32 pad04[4];           /* 0x04 */
    s32 count;              /* 0x14 */
    u16 ids[18];            /* 0x18 */
    s32 height;             /* 0x3c */
    s32 pad40;              /* 0x40 */
    s32 limit;              /* 0x44 */
    s32 pos;                /* 0x48 */
    s32 lower;              /* 0x4c */
    s32 cursor;             /* 0x50 */
} Obj;

extern s32 func_02112bc0(int a, u32 b);
extern s32 func_02112bf0(int a, u32 b);
extern void func_021129b4(int a, u32 b, u32 c, u32 d);

void func_02122768(Obj *P)
{
    int iVar1;
    int i;
    u32 uVar6;
    int iVar7;
    u32 uVar5;
    int two;
    int iVar4;
    int iVar2;
    int iVar3;

    i = 0;
    if (P->count > 0) {
        do {
            two = 2;
            uVar6 = P->ids[i];
            iVar4 = P->height;
            iVar1 = func_02112bc0(two, (u16)(uVar6 + iVar4 - 1));
            iVar7 = iVar4 - 1;
            if (iVar7 >= 1) {
                uVar5 = uVar6 + iVar7;
                do {
                    iVar2 = func_02112bf0(two, (u16)uVar5);
                    iVar3 = func_02112bc0(two, (u16)(uVar5 - 1));
                    func_021129b4(two, (u16)(s32)uVar5, iVar2, iVar3);
                    uVar5 = uVar5 - 1;
                    iVar7 = iVar7 - 1;
                } while (iVar7 >= 1);
            }
            iVar4 = func_02112bf0(two, uVar6);
            func_021129b4(two, uVar6, iVar4, iVar1);
            i = i + 1;
        } while (i < P->count);
    }
    P->cursor = P->cursor + 1;
    if (P->cursor >= P->height) {
        P->cursor = 0;
    }
    iVar7 = P->cursor;
    if (iVar7 == 0) {
        iVar7 = P->height - 1;
    } else {
        iVar7 = iVar7 - 1;
    }
    if (P->pos + P->height - 2 >= P->limit) {
        return;
    }
    if (P->pos + P->height <= P->lower) {
        return;
    }
    P->func(iVar7, P->pos + P->height - 2);
}
