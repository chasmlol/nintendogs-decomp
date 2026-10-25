#include "ctx.h"

typedef struct {
    u32 w[15];
} Tbl15;

extern s64 data_02126728;
extern u32 data_02142b88[15];

extern void func_02027668(int a, int *b);
extern void func_02067e34(int *a, int *b, int *c);
extern int func_02006a30(int *a, int *b);
extern u32 func_02067df0(int *a, int *b);
extern int func_020bcd88(int a);
extern void func_020c7df0(u8 *a, int b, u32 c);

void func_020c7ec8(int param_1, u8 *param_2)
{
    s64 lVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;
    int a3[3];
    Tbl15 tbl;
    u32 *row;

    func_02027668(param_1, a3);
    func_02067e34(a3, (int *)(param_2 + 0xbc), a3);
    lVar1 = (s64)a3[0] * a3[0] + (s64)a3[1] * a3[1] + (s64)a3[2] * a3[2];
    if (lVar1 < data_02126728) {
        iVar5 = 0;
    } else {
        iVar5 = func_02006a30(a3, a3);
    }
    if (iVar5 == 0) {
        return;
    }
    uVar3 = func_02067df0(a3, (int *)(param_2 + 0xb0));
    if ((s32)uVar3 < 410) {
        uVar4 = 0;
    } else {
        tbl = *(Tbl15 *)data_02142b88;
        if ((s32)uVar3 < 0x4cd) {
            iVar5 = 0;
        } else if ((s32)uVar3 < 0x800) {
            iVar5 = 1;
        } else {
            iVar5 = 2;
        }
        iVar2 = func_020bcd88(*(s16 *)(param_2 + 0x94));
        row = (u32 *)((u8 *)tbl.w + iVar2 * 12);
        uVar4 = row[iVar5];
    }
    func_020c7df0(param_2, param_1, uVar4);
}
