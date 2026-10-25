#include "ctx.h"

extern char *data_ov004_02170320;
extern int func_02069d98(void);

int func_ov004_02162920(u32 param_1, u32 param_2)
{
    int iVar1;
    char *iVar2;
    int iVar5;
    s8 cVar4;
    int iVar3;
    int local_2c;

    cVar4 = -1;
    iVar5 = 1;
    local_2c = 5;
    do {
        if (param_1 < 0x20) {
            if (param_2 < 0x20) {
                iVar3 = (param_1 + param_2 * 0x20) * 2;
            } else {
                iVar3 = (param_1 + (param_2 - 0x20) * 0x20) * 2 + 0x1000;
            }
        } else {
            if (param_2 < 0x20) {
                iVar3 = ((param_1 - 0x20) + param_2 * 0x20) * 2 + 0x800;
            } else {
                iVar3 = ((param_1 - 0x20) + (param_2 - 0x20) * 0x20) * 2 + 0x1800;
            }
        }
        iVar1 = func_02069d98();
        iVar2 = data_ov004_02170320;
        if ((*(u16 *)(iVar2 + iVar5 * 2 + 0xf7a) & 0x3ff) == (*(u16 *)(iVar1 + iVar3) & 0x3ff)) {
            cVar4 = (s8)iVar5;
            iVar5 = local_2c;
        }
        iVar5 = iVar5 + 1;
    } while (iVar5 < 5);
    if (cVar4 != -1) {
        iVar5 = 0;
        do {
            if (cVar4 == *(s8 *)(iVar2 + 0x12dc) && (int)param_1 == *(s8 *)(iVar2 + 0x12da) &&
                (int)param_2 == *(s8 *)(iVar2 + 0x12db)) {
                return 0;
            }
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + 3;
        } while (iVar5 < 5);
    }
    return 1;
}
