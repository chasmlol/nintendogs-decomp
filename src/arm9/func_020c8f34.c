#include "ctx.h"

extern int func_01ffdb08(int a);
extern int func_020341fc(int a);
extern void func_02027668(int a, int *b);
extern u32 func_02028130(int a);
extern void func_02067e34(int *a, u32 *b, int *c);
extern u32 func_02067df0(int *a, u32 *b);
extern int func_02067898(u32 a, u32 b);

typedef struct {
    int aiStack_3c[3];
    int iStack_30;
    int local_2c;
} Loc;

void func_020c8f34(u16 *param_1, u16 *param_2, u32 *param_3, u32 *param_4, u32 * volatile param_5)
{
    int iVar7;
    int iVar6;
    int iVar5;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    Loc L;

    iVar6 = 0x64000;
    *(s16 *)param_2 = -1;
    *(s16 *)param_1 = -1;
    iVar5 = -0x64000;
    iVar7 = 0;
    do {
        iVar2 = func_01ffdb08(iVar7);
        if (iVar2 != 0 && func_020341fc(iVar2) == 0) {
            func_02027668(iVar2, &L.iStack_30);
            uVar3 = func_02028130(iVar2);
            L.local_2c += (s32)((((s64)(s32)uVar3) * 0x2000 + 0x800) >> 12);
            func_02067e34(&L.iStack_30, param_3, L.aiStack_3c);
            uVar3 = func_02067df0(L.aiStack_3c, param_5);
            uVar4 = func_02067df0(L.aiStack_3c, param_4);
            iVar2 = func_02067898(uVar3, uVar4);
            if (iVar2 < iVar6) {
                *param_1 = (u16)iVar7;
                iVar6 = iVar2;
            }
            if (iVar2 > iVar5) {
                *param_2 = (u16)iVar7;
                iVar5 = iVar2;
            }
        }
        iVar7 = (s16)(iVar7 + 1);
    } while (iVar7 < 3);
}
