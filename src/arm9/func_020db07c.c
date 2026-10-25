#include "ctx.h"

extern u8 *data_02159444;
extern u8 *data_02159468;
extern s32 func_020c8cd0(void);
extern void func_020cf9c8(u8 *p, s32 a, s32 b, s32 c);

void func_020db07c(u8 *param_1)
{
    s32 iVar1;
    s32 iVar2;

    iVar2 = *(s16 *)(data_02159444 + 0x7a);
    if (iVar2 < 0 || *(s16 *)(data_02159468 + 0x20) <= iVar2) {
        iVar2 = 0;
    } else {
        iVar2 = *(s32 *)(data_02159468 + iVar2 * 4 + 4);
    }
    iVar1 = func_020c8cd0();
    if (iVar2 == 0) {
        return;
    }
    if (iVar1 == -1) {
        return;
    }
    if (iVar1 == *(s16 *)(iVar2 + 0x98)) {
        func_020cf9c8(param_1, 0x12, *(s16 *)(iVar2 + 0x98), 4);
        return;
    }
}
