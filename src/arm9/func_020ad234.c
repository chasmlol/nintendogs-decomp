#include "ctx.h"

extern s32 func_01ffdb08(s32 a);
extern s32 func_02026fd8(void);
extern s32 func_02027000(s32 a);
extern u8 *data_02159444;
extern u8 *data_02159468;

void func_020ad234(u8 *param_1)
{
    s32 iVar2;
    s32 iVar3;
    u8 *iVar4;

    *(u16 *)(param_1 + 0x24) = 0;
    iVar3 = 0;
    do {
        iVar2 = func_01ffdb08(iVar3);
        if (iVar2 != 0) {
            if (func_02026fd8() != 0) {
                *(u16 *)(param_1 + 0x24) = 1;
                return;
            }
        }
        iVar3 = (s16)(iVar3 + 1);
    } while (iVar3 < 3);
    iVar3 = 0;
    do {
        iVar2 = func_01ffdb08(iVar3);
        if (iVar2 != 0) {
            if (func_02027000(iVar2) != 0) {
                *(u16 *)(param_1 + 0x24) = 2;
                return;
            }
        }
        iVar3 = (s16)(iVar3 + 1);
    } while (iVar3 < 3);
    iVar3 = *(s16 *)(data_02159444 + 0x7a);
    if (iVar3 < 0 || *(s16 *)(data_02159468 + 0x20) <= iVar3) {
        iVar4 = NULL;
    } else {
        iVar4 = *(u8 **)(data_02159468 + iVar3 * 4 + 4);
    }
    if (iVar4 != NULL) {
        s32 v = *(s16 *)(iVar4 + 0x90);
        if (v == 2) {
            goto store;
        }
        if (v != 3) {
            return;
        }
store:
        *(u16 *)(param_1 + 0x24) = 2;
    }
}
