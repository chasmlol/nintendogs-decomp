#include "ctx.h"

extern u32 data_0215be3c;
extern void func_020ecbec(s32 a);
extern s32 func_020eb780(s32 a);

s32 func_020ec510(s32 p1)
{
    s32 iVar3;
    s16 v;

    v = ((s16 *)*(u8 **)&data_0215be3c)[p1];
    if (v == 0) {
        return 1;
    }
    if (v == 2) {
        ((u16 *)*(u8 **)&data_0215be3c)[p1] = 0;
        iVar3 = *(s32 *)((u8 *)*(u8 **)&data_0215be3c + p1 * 4 + 8);
        if (iVar3 != 0) {
            func_020ecbec(iVar3);
            *(s32 *)((u8 *)*(u8 **)&data_0215be3c + 8 + ((u32)p1 << 2)) = 0;
        }
        iVar3 = func_020eb780(p1);
        if (iVar3 != 0) {
            return 1;
        }
    }
    return 0;
}
