#include "ctx.h"

extern u8 *data_02159444;
extern u8 *data_02159468;
extern void func_02026bac(u8 *p);
extern void func_02025a84(u8 *p);

void func_0201dc28(u8 *param_1)
{
    u8 *g;
    s32 iVar1;
    u8 *b;

    *(u16 *)(param_1 + 0x152) = 206;
    func_02026bac(param_1);
    func_02025a84(param_1);
    g = data_02159444;
    iVar1 = *(s16 *)(g + 0x7a);
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
        if (*(s8 *)(param_1 + 0x88) == *(s16 *)(iVar1 + 0x98)) {
            *(u16 *)(param_1 + 0x156) = 1;
        }
    }
}
