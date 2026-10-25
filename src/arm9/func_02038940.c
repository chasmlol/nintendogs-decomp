#include "ctx.h"

extern u8 data_02142f0c[];
extern s32 func_020c1f34(u8 *);

s32 func_02038940(u8 *param_1, u8 *param_2)
{
    s32 iVar1;
    s32 iVar2;
    s32 iVar3;

    iVar3 = 0;
    if (*(s16 *)(param_2 + 0x96) == 0) {
        iVar1 = func_020c1f34(param_2);
        if (iVar1 == 0 || *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x1e) <= 0x12c) {
            return 0;
        }
    }
    if (*(s16 *)(param_2 + 0x96) == 1) {
        iVar1 = func_020c1f34(param_2);
        if (iVar1 == 0 || *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x20) <= 0x96) {
            return 0;
        }
    }
    iVar1 = *(s8 *)(data_02142f0c + *(s16 *)(param_2 + 0x94) * 12 + *(s8 *)(param_1 + 0x8e));
    if (iVar1 != 0) {
        iVar3 = iVar3 + iVar1 * 0x29 * *(s16 *)(*(u8 **)(param_1 + 0x9e8) + ((*(s8 *)(param_1 + 0x8e) << 16) >> 15) + 0x50);
    }
    {
        s16 i;
        s8 *tb;
        s32 h;
        tb = (s8 *)(data_02142f0c + *(volatile s16 *)(param_2 + 0x94) * 12);
        i = 5;
        do {
            iVar2 = tb[i];
            if (iVar2 != 0) {
                switch (i) {
                case 0:
                    break;
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    h = iVar2 * 0x29;
                    iVar3 = h * *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x5a) + iVar3;
                    break;
                case 6:
                    h = iVar2 * 0x29;
                    iVar3 = h * *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x5c) + iVar3;
                    break;
                case 7:
                    h = iVar2 * 0x29;
                    iVar3 = h * *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x5e) + iVar3;
                    break;
                case 8:
                    h = iVar2 * 0x29;
                    iVar3 = h * *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x60) + iVar3;
                    break;
                case 9:
                    h = iVar2 * 0x29;
                    iVar3 = h * *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x1e) + iVar3;
                    break;
                case 10:
                    h = iVar2 * 0x29;
                    iVar3 = h * *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x20) + iVar3;
                    break;
                case 11:
                    h = iVar2 * 0x29;
                    iVar3 = h * (*(s32 *)(param_2 + 0xa8) >> 12) + iVar3;
                }
            }
            i = i + 1;
        } while (i < 12);
    }
    return iVar3;
}
