#pragma avoid_byte strb
#include "ctx.h"

void func_0202d6ec(u8 *param_1)
{
    s16 sVar2;
    s32 iv5;
    s32 g;
    u8 st;

    st = *(u8 *)(param_1 + 0xa5);
    if (st == 0) goto arm0;
    if (st == 1) goto arm1;
    if (st != 2) return;

arm2:
    sVar2 = *(s16 *)(param_1 + 0xf0);
    if (sVar2 < 4) goto g2a;
    if (sVar2 <= 8) { g = 1; goto g2b; }
g2a:
    if (sVar2 == 0x57) { g = 1; goto g2b; }
    iv5 = *(s16 *)(param_1 + 0xea);
    if (iv5 < 15) goto g2c;
    if (iv5 <= 75) { g = 1; goto g2b; }
g2c:
    if (iv5 < 0x119) goto g2d;
    if (iv5 <= 0x13c) { g = 1; goto g2b; }
g2d:
    g = 0;
g2b:
    if (g != 0) { g = 0; goto g2e; }
    iv5 = *(s16 *)(param_1 + 0xea);
    if (iv5 < 0x478) goto g2f;
    if (iv5 <= 0x47e) { g = 0; goto g2e; }
g2f:
    if (iv5 < 0x4c7) goto g2g;
    if (iv5 <= 0x4ca) { g = 0; goto g2e; }
g2g:
    if (sVar2 == 0x53) { g = 0; goto g2e; }
    if (sVar2 == 0x54) g = 0; else g = 1;
g2e:
    if (g == 0) return;
    *(u8 *)(param_1 + 0xa8) = 0;
    *(u16 *)(param_1 + 0x112) = 0;
    *(s16 *)(param_1 + 0xf0) = 13;
    *(u8 *)(param_1 + 0xa5) = 3;
    return;

arm1:
    sVar2 = *(s16 *)(param_1 + 0xf0);
    if (sVar2 < 4) goto g1a;
    if (sVar2 <= 8) { g = 1; goto g1b; }
g1a:
    if (sVar2 == 0x57) { g = 1; goto g1b; }
    iv5 = *(s16 *)(param_1 + 0xea);
    if (iv5 < 15) goto g1c;
    if (iv5 <= 75) { g = 1; goto g1b; }
g1c:
    if (iv5 < 0x119) goto g1d;
    if (iv5 <= 0x13c) { g = 1; goto g1b; }
g1d:
    g = 0;
g1b:
    if (g != 0) { g = 0; goto g1e; }
    iv5 = *(s16 *)(param_1 + 0xea);
    if (iv5 < 0x478) goto g1f;
    if (iv5 <= 0x47e) { g = 0; goto g1e; }
g1f:
    if (iv5 < 0x4c7) goto g1g;
    if (iv5 <= 0x4ca) { g = 0; goto g1e; }
g1g:
    if (sVar2 == 0x53) { g = 0; goto g1e; }
    if (sVar2 == 0x54) g = 0; else g = 1;
g1e:
    if (g == 0) return;
    *(u8 *)(param_1 + 0xa8) = 0;
    *(u16 *)(param_1 + 0x112) = 0;
    *(s16 *)(param_1 + 0xf0) = 13;
    *(u8 *)(param_1 + 0xa5) = 2;
    return;

arm0:
    sVar2 = *(s16 *)(param_1 + 0xf0);
    if (sVar2 < 4) goto g0a;
    if (sVar2 <= 8) { g = 1; goto g0b; }
g0a:
    if (sVar2 == 0x57) { g = 1; goto g0b; }
    iv5 = *(s16 *)(param_1 + 0xea);
    if (iv5 < 15) goto g0c;
    if (iv5 <= 75) { g = 1; goto g0b; }
g0c:
    if (iv5 < 0x119) goto g0d;
    if (iv5 <= 0x13c) { g = 1; goto g0b; }
g0d:
    g = 0;
g0b:
    if (g != 0) { g = 0; goto g0e; }
    iv5 = *(s16 *)(param_1 + 0xea);
    if (iv5 < 0x478) goto g0f;
    if (iv5 <= 0x47e) { g = 0; goto g0e; }
g0f:
    if (iv5 < 0x4c7) goto g0g;
    if (iv5 <= 0x4ca) { g = 0; goto g0e; }
g0g:
    if (sVar2 == 0x53) { g = 0; goto g0e; }
    if (sVar2 == 0x54) g = 0; else g = 1;
g0e:
    if (g == 0) return;
    *(u8 *)(param_1 + 0xa8) = 0;
    *(u16 *)(param_1 + 0x112) = 0;
    *(s16 *)(param_1 + 0xf0) = 13;
    *(u8 *)(param_1 + 0xa5) = 1;
    return;
}
