#include "ctx.h"

extern void func_0208f8f8(u8 *p, u32 a, u32 *b);

void func_0208f884(u8 *param_1, s16 param_2, s16 param_3)
{
    s32 iVar2;
    s32 iVar1;

    iVar2 = 0;
    *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x1c) + 0x5c) + param_3 * 12) =
        param_2 * 36 + *(s32 *)(param_1 + 0x74);
    if (*(s16 *)(param_1 + 0x6c) > 0) {
        iVar1 = 0;
        do {
            *(u32 *)(*(u8 **)(param_1 + 0x74) + iVar1) = 0;
            iVar2 = (s16)(iVar2 + 1);
            iVar1 = iVar1 + 36;
        } while (iVar2 < *(s16 *)(param_1 + 0x6c));
    }
    func_0208f8f8(param_1, 0, *(u32 **)(param_1 + 0x74));
}
