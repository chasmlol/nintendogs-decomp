#include "ctx.h"

u32 *func_0208e7b4(void *a, s32 n, u32 b);
void func_0208f8f8(u8 *p, s32 a, u32 *b);

void func_0208fa4c(u8 *param_1, void *param_2, s16 param_3)
{
    s32 iVar3;
    s32 iVar2;
    u32 *puVar1;

    *(s16 *)(param_1 + 0x6c) = param_3;
    puVar1 = func_0208e7b4(param_2, param_3, *(u32 *)(param_1 + 0x1c) + 4);
    *(u32 **)(param_1 + 0x74) = puVar1;
    iVar3 = 0;
    **(u32 **)(*(u32 *)(param_1 + 0x1c) + 0x5c) = *(u32 *)(param_1 + 0x74);
    if (*(s16 *)(param_1 + 0x6c) > 0) {
        iVar2 = 0;
        do {
            *(u32 *)(*(u8 **)(param_1 + 0x74) + iVar2) = 0;
            iVar3 = (s16)(iVar3 + 1);
            iVar2 = iVar2 + 0x24;
        } while (iVar3 < *(s16 *)(param_1 + 0x6c));
    }
    func_0208f8f8(param_1, 0, *(u32 **)(param_1 + 0x74));
}
