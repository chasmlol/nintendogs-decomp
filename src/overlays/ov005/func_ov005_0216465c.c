#include "ctx.h"

extern u8 *data_ov005_02167f04;
extern void func_ov005_02160dd8(u32 p);

void func_ov005_0216465c(u32 param_1)
{
    s16 uVar4;
    s32 iVar2;

    if (param_1 == 0) {
        return;
    }
    uVar4 = 0;
    iVar2 = 0;
    do {
        if ((param_1 & (1u << uVar4)) != 0) {
            u8 *pv = data_ov005_02167f04 + 0x60;
            *(s32 *)(pv + iVar2) = *(s32 *)(pv + iVar2) - 82;
            if (*(s32 *)(pv + iVar2) < 0) {
                *(s32 *)(pv + iVar2) = 0;
                *(s16 *)(data_ov005_02167f04 + uVar4 * 2 + 0x48) += 2;
                goto clamp;
            }
            *(s16 *)(data_ov005_02167f04 + uVar4 * 2 + 0x48) += 2;
clamp:
            if (*(s16 *)(data_ov005_02167f04 + uVar4 * 2 + 0x48) > *(s16 *)(data_ov005_02167f04 + uVar4 * 2 + 0x54)) {
                *(s16 *)(data_ov005_02167f04 + uVar4 * 2 + 0x48) = *(s16 *)(data_ov005_02167f04 + uVar4 * 2 + 0x54);
            }
        }
        uVar4 = (s16)(uVar4 + 1);
        iVar2 = iVar2 + 4;
    } while (uVar4 < 6);
    func_ov005_02160dd8(param_1);
}
