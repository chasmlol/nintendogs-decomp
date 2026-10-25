#include "ctx.h"

extern s32 data_02159404[];
extern void func_020a4410(void);
extern void func_020a37d0(s32 a, s32 b, s32 c);
extern void func_020a4368(void);

void func_020a39c0(void)
{
    s32 *piVar1;
    s32 *piVar2;
    s32 iVar3;
    u32 *puVar4;

    piVar1 = data_02159404;
    if (piVar1[1] != 0) {
        piVar2 = piVar1 + 1;
        piVar1[2] = piVar1[2] + 1;
        iVar3 = piVar1[0];
        puVar4 = (u32 *)(piVar1 + 2);
        if (iVar3 == 0) {
            goto c0;
        }
        if (iVar3 == 1) {
            goto c1;
        }
        if (iVar3 != 2) {
            goto dispatch2;
        }
        goto c2;
        goto dispatch2;
c0:
        if (*puVar4 > 5400 && *piVar2 != 0) {
            *piVar2 = 0;
        } else if (*puVar4 > 600 && *piVar2 != 1) {
            *piVar2 = 1;
        }
        goto dispatch2;
c1:
        if (*puVar4 > 5400 && *piVar2 != 0) {
            *piVar2 = 0;
        } else if (*puVar4 > 1200 && *piVar2 != 1) {
            *piVar2 = 1;
        }
        goto dispatch2;
c2:
        if (*puVar4 > 5400 && *piVar2 != 0) {
            *piVar2 = 0;
        } else if (*puVar4 > 1800 && *piVar2 != 1) {
            *piVar2 = 1;
        }
    }
dispatch2:
    if (piVar1[3] == 0) {
        return;
    }
    piVar1[4] = piVar1[4] - 1;
    if (piVar1[4] > 0) {
        return;
    }
    switch (piVar1[5]) {
    case 0x1e:
        break;
    case 0x1f:
        func_020a4410();
        break;
    case 0x20:
        func_020a37d0(0x32, 1, piVar1[6]);
        break;
    case 0x21:
        func_020a37d0(0x34, 1, piVar1[6]);
        break;
    case 0x22:
        func_020a4368();
        break;
    case 0x23:
        break;
    case 0x24:
        func_020a37d0(0x22, 1, piVar1[6]);
        break;
    }
    piVar1[3] = 0;
}
