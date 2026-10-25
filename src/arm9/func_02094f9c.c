#include "ctx.h"

extern u32 func_02080858(void);

s32 func_02094f9c(u8 *param_1, u8 *param_2)
{
    s32 found;
    u8 *pb;
    u8 *pa;
    s32 cnt;
    s32 iVar1;
    u32 uVar5;

    pa = param_1;
    pb = param_2;
    found = -1;
    cnt = 0;
    uVar5 = func_02080858();
    iVar1 = 0;
    do {
        if (*(u16 *)(pb + 0x7e8 + iVar1 * 2) != 0 && *(u16 *)(pa + 0x7e8 + iVar1 * 2) == 0) {
            cnt = (s16)(cnt + 1);
        }
        iVar1 = (s16)(iVar1 + 1);
    } while (iVar1 < 8);
    if (cnt > 0) {
        s32 thr;
        s32 iVar3;
        thr = (s16)(u16)(((u32)(u16)cnt * (u32)(u16)(uVar5 * 0x10dcd + 1)) >> 16);
        iVar3 = 0;
        iVar1 = 0;
        do {
            if (*(u16 *)(pb + 0x7e8 + iVar1 * 2) != 0 && *(u16 *)(pa + 0x7e8 + iVar1 * 2) == 0) {
                if (iVar3 == thr) {
                    found = iVar1;
                    break;
                }
                iVar3 = (s16)(iVar3 + 1);
            }
            iVar1 = (s16)(iVar1 + 1);
        } while (iVar1 < 8);
        *(u16 *)(pa + 0x7e8 + found * 2) = *(u16 *)(pb + 0x7e8 + found * 2);
    }
    return found;
}
