#include "ctx.h"

extern u32 data_02159034;
extern s32 func_020bcf08(s32 x);

u32 func_02094628(void)
{
    u32 r6 = 0;
    s16 r5 = 0;
    u32 r4 = 0;
    u32 base;
    u32 iVar2;
    u32 iVar3;
    s32 a;
    s32 h;
    s32 c;
    do {
        base = data_02159034;
        base += 0x1000;
        iVar2 = *(u32 *)(base + 0x41c);
        iVar2 += 0x248;
        iVar3 = iVar2 + r4;
        a = *(s8 *)(iVar3 + 3);
        h = *(s16 *)(iVar2 + r4);
        c = *(s8 *)(iVar3 + 2);
        if (a > 0 && c == 0 && func_020bcf08(h) == 5) {
            r6 = 1;
            break;
        }
        r5 = (s16)(r5 + 1);
        r4 += 4;
    } while (r5 < 200);
    return r6;
}
