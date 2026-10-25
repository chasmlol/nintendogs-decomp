#include "ctx.h"

extern u8 *data_0215942c;
extern u8 *data_0214f464;
extern s32 func_020bc14c(void);

u32 func_0202a7dc(u8 *param_1)
{
    u16 sVar1;
    s8 cVar2;
    s32 iVar3;

    sVar1 = *(s16 *)data_0215942c;
    if (sVar1 == 1 || sVar1 == 4 || sVar1 == 0x11) {
        return 0;
    }
    cVar2 = (s8)param_1[0x88];
    iVar3 = func_020bc14c();
    if (cVar2 != iVar3) {
        return 1;
    }
    if ((s8)data_0214f464[7] != -1 && (s32)cVar2 != (s32)(s8)data_0214f464[7]) {
        return 1;
    }
    return 0;
}
