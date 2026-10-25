#include "ctx.h"

extern u8 *func_02036578(u8 *obj);
extern BOOL func_0202e304(u8 *obj);
extern s32 func_02027894(u8 *obj, u8 *b);
extern u32 func_02050fdc(u8 *obj, u8 *b);
extern u32 func_020512d8(u8 *obj, u8 *b);

u32 func_02050f1c(u8 *param_1)
{
    u8 *iVar2;
    BOOL bVar1;
    s32 iVar4;

    iVar2 = func_02036578(param_1);
    if (iVar2 == NULL) {
        return 0;
    }
    bVar1 = func_0202e304(param_1);
    if (bVar1) {
        *(s32 *)(param_1 + 0x484) = 1;
        return func_02050fdc(param_1, iVar2);
    }
    iVar4 = func_02027894(param_1, iVar2);
    switch (iVar4) {
    case 1:
    case 2:
        *(s32 *)(param_1 + 0x484) = iVar4;
        return func_020512d8(param_1, iVar2);
    case 0:
        *(s32 *)(param_1 + 0x484) = iVar4;
        return func_02050fdc(param_1, iVar2);
    default:
        return 0;
    }
}
