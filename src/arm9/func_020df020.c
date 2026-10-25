#include "ctx.h"

extern u8 data_0215ae10;
extern u32 data_0215ae34;
extern u32 data_0215ae60;
extern s8 data_0215ae0c;
extern s8 data_0215ae14;
extern u32 data_02144a4c;

u32 func_020df020(void)
{
    u8 c = data_0215ae10;
    s32 r;
    if (c == 5) {
        goto L28;
    }
    if (c == 6) {
        goto L28;
    }
    if (data_0215ae34 == 0) {
        goto L90;
    }
L28:
    if (data_0215ae60 != 0) {
        goto L48;
    }
    if (data_0215ae34 == 0) {
        goto L50;
    }
L48:
    return 0xfffffff6;
L50:
    if (c != 6) {
        goto L7c;
    }
    if (data_0215ae0c < 3) {
        goto L7c;
    }
    if (data_0215ae14 == 0) {
        r = 1;
        goto L80;
    }
L7c:
    r = 0;
L80:
    if (r == 0) {
        return 0xfffffff8;
    }
    return 0xfffffff7;
L90:
    return data_02144a4c;
}
