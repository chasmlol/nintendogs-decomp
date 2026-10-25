#include "ctx.h"

typedef struct { u32 w[12]; } Q48;

extern u32 data_ov006_021661c0;
extern u8 *func_0200c498(u32 n, u8 *p);

u32 *func_ov006_02163288(u8 *param_1)
{
    u8 *r12;
    u8 *d;
    u8 *src;
    u32 v2, v3, v1;

    r12 = func_0200c498(4, param_1);
    d = *(u8 **)(*(u8 **)(data_ov006_021661c0 + (u32)param_1 * 4 + 0xe0) + 0x2c);
    src = *(u8 **)(d + 0x5c);
    *(Q48 *)(d + 0x28) = *(Q48 *)(src + 0x3c);
    v3 = *(u32 *)(r12 + 0x10);
    v2 = *(u32 *)(r12 + 0xc) + 0x3000;
    v1 = *(u32 *)(r12 + 0x8);
    *(u32 *)(d + 0x4c) = v1;
    *(u32 *)(d + 0x50) = v2;
    *(u32 *)(d + 0x54) = v3;
    return (u32 *)(d + 0x28);
}
