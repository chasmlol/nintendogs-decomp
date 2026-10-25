#include "ctx.h"

extern u8 *data_02159444;
extern u8 *data_02159468;

extern u32 func_020ad77c(u8 *p);
extern u32 func_020ad690(u8 *p);
extern u32 func_020ad8f0(u8 *p);
extern u32 func_02107f8c(u32 a);

u32 func_020af890(u8 *param_1)
{
    s16 sVar1;
    int bVar2;
    u32 uVar3;
    int iVar4;
    u32 t;

    sVar1 = *(s16 *)(param_1 + 0x2e);
    switch (sVar1) {
    case 0:
        return func_020ad77c(param_1);
    case 1:
        uVar3 = (u32)data_02159444;
        iVar4 = *(s16 *)(data_02159444 + 0x7a);
        if (iVar4 >= 0) {
            uVar3 = (u32)*(s16 *)(data_02159468 + 0x20);
            if ((s32)uVar3 > iVar4) {
                goto found;
            }
        }
        iVar4 = 0;
        goto LAB;
    found:
        uVar3 = (u32)data_02159468 + iVar4 * 4;
        iVar4 = *(int *)(uVar3 + 4);
    LAB:
        if (iVar4 == 0) {
            return uVar3;
        }
        if (*(s16 *)(iVar4 + 0x92) == 3 && *(s16 *)(iVar4 + 0x90) == 1) {
            bVar2 = 1;
        } else {
            bVar2 = 0;
        }
        if (!bVar2) {
            return bVar2;
        }
        *(s16 *)(param_1 + 0x58) = -2;
        if (*(s16 *)(param_1 + 0x5a) < 1000) {
            *(s16 *)(param_1 + 0x5a) = *(s16 *)(param_1 + 0x5a) + 1;
        }
        *(s16 *)(param_1 + 0x5c) = 0;
        *(u32 *)(param_1 + 0x60) = 0;
        *(s16 *)(param_1 + 0x5e) = 1;
        return func_02107f8c(8);
    case 4:
        t = func_020ad690(param_1);
        if (t == 0) {
            return t;
        }
        return func_020ad8f0(param_1);
    }
    return (u32)param_1;
}
