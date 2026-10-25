#include "ctx.h"

extern u8 *data_02159444;
s32 func_020bcf08(s32 p);
s32 func_020946ac(s32 a, s32 b);

void func_020aace4(s32 param_1)
{
    s32 iVar1;

    iVar1 = func_020bcf08(param_1);
    if ((iVar1 == 2) || (iVar1 == 7) || (iVar1 == 15)) {
        iVar1 = func_020946ac(0, param_1);
        if (iVar1 > 0) {
            *(s16 *)(data_02159444 + 0x7e) = (s16)param_1;
        }
    }
    *(s16 *)(data_02159444 + 0x7c) = -1;
}
