#pragma avoid_byte strb
#include "ctx.h"

void func_020292c4(u8 *param_1, u16 param_2, u8 param_3)
{
    s32 s;
    s32 i;
    s32 b;

    s = *(s16 *)(param_1 + 0xf0);
    if (s < 4) goto L20;
    if (s <= 8) {
        b = 1;
        goto L60;
    }
L20:
    if (s == 87) {
        b = 1;
        goto L60;
    }
    i = *(s16 *)(param_1 + 0xea);
    if (i < 15) goto L44;
    if (i <= 75) {
        b = 1;
        goto L60;
    }
L44:
    if (i < 0x119) goto L5c;
    if (i <= 316) {
        b = 1;
        goto L60;
    }
L5c:
    b = 0;
L60:
    if (b != 0) {
        b = 0;
        goto Lc0;
    }
    i = *(s16 *)(param_1 + 0xea);
    if (i < 0x478) goto L8c;
    if (i <= 0x47e) {
        b = 0;
        goto Lc0;
    }
L8c:
    if (i < 0x4c7) goto La8;
    if (i <= 0x4ca) {
        b = 0;
        goto Lc0;
    }
La8:
    if (s == 83) {
        b = 0;
        goto Lc0;
    }
    if (s == 84) {
        b = 0;
    } else {
        b = 1;
    }
Lc0:
    if (b == 0) return;
    *(u8 *)(param_1 + 168) = 1;
    *(u16 *)(param_1 + 256 + 18) = 0;
    *(s16 *)(param_1 + 240) = param_2;
    *(u8 *)(param_1 + 165) = param_3;
}
