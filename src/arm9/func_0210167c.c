#include "ctx.h"

extern u8 *data_0215be4c;
extern u8 *data_0215be48;
extern void func_0207c910(int a, int b, int c, int d);

void func_0210167c(void)
{
    s32 iVar3;
    int *piVar2;
    u8 *rec;
    s32 z;
    s32 k19;
    s32 z2;
    s32 k35;

    iVar3 = 0;
    piVar2 = (int *)(data_0215be4c + 4);
    z = 0;
    k35 = 35;
    z2 = 0;
    k19 = 19;
    do {
        rec = (u8 *)piVar2 + 24;
        if (((piVar2[1] != 0) && (piVar2[2] != 0)) && (*(int *)(rec + 0x194) != 0)) {
            if (piVar2[0] == 0) {
                goto case0;
            }
            if (piVar2[0] != 1) {
                goto next;
            }
            if (*(int *)(*(u8 **)&data_0215be48 + 0x1dec) != 0) {
                goto next;
            }
            func_0207c910(k19, *(int *)(rec + 0x19c), piVar2[4], piVar2[5]);
            *(int *)(rec + 0x194) = z2;
            goto next;
case0:
            if (*(int *)(*(u8 **)&data_0215be48 + 0x2314) != 0) {
                goto next;
            }
            func_0207c910(k35, *(int *)(rec + 0x19c), piVar2[4], piVar2[5]);
            *(int *)(rec + 0x194) = z;
        }
next:
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 0x6e;
    } while (iVar3 < 0x18);
}
