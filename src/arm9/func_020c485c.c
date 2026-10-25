#pragma avoid_byte strb
#include "ctx.h"
extern u32 *func_02066b80(u8 *p);
static inline u32 SwapByte(u32 v, u8 *p)
{
    u32 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
void func_020c485c(u8 *param_1)
{
    u32 *puVar2 = (u32 *)param_1;
    u8 *iVar3;
    u32 bVar1;
    if (param_1 != 0) {
        *(u32 *)(param_1 + 0x30) = 0;
        *(u32 *)(param_1 + 0x34) = 0;
        *(u32 *)(param_1 + 0x38) = 0;
        puVar2 = func_02066b80(param_1 + 0x3c);
    }
    iVar3 = *(u8 **)(param_1 + 0x18c);
    if (iVar3 != NULL) {
        *(u16 *)(iVar3 + 0x20) = *(u16 *)(iVar3 + 0x20) | 1;
        iVar3 = *(u8 **)(param_1 + 0x18c);
        bVar1 = SwapByte((*(u8 *)(iVar3 + 1)) | 1, iVar3 + 1);
        (u32 *)bVar1; return;
    }
    return;
}
