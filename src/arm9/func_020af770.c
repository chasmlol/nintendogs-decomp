#include "ctx.h"

extern u8 *data_02159468;
extern s32 func_020c1f34(u32 p);
extern void func_020942c0(s16 *p, s32 v);

s32 func_020af770(u8 *param_1)
{
    s16 local[2];
    s32 iVar1;
    s32 iVar2;
    u8 *b;
    s16 t;

    iVar1 = *(s16 *)(param_1 + 0x7a);
    iVar2 = 0;
    if (iVar1 < 0) goto zero;
    b = data_02159468;
    if (*(s16 *)(b + 0x20) > iVar1) goto body;
zero:
    iVar1 = 0;
    goto check;
body:
    iVar1 = *(u32 *)(b + iVar1 * 4 + 4);
check:
    if (iVar1 != 0) {
        iVar2 = func_020c1f34(iVar1);
        iVar2 = (iVar2 << 4) >> 16;
        t = *(s16 *)(param_1 + 0x7c);
        local[0] = 0;
        local[1] = t;
        func_020942c0(local, iVar2);
    }
    return iVar2;
}
