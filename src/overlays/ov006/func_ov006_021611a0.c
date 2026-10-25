#include "ctx.h"

extern u32 *data_0214f464;
extern u8 *func_020364a8(u8 *p);
extern u16 *func_0200c498(s32 a, s32 b);
extern s32 func_02027e4c(u8 *p, s32 a);

u32 func_ov006_021611a0(u8 *param_1)
{
    u8 *p2;
    u16 *psVar3;
    s32 iVar2;
    u32 uVar5;
    u16 rv;

    p2 = func_020364a8(param_1);
    if (p2 == NULL) {
        goto ret1252;
    }
    psVar3 = func_0200c498(*(s32 *)(p2 + 0x30), (s16)*(s32 *)(p2 + 0x2c));
    if (psVar3 == NULL) {
        goto ret1252;
    }
    iVar2 = func_02027e4c(param_1, 0);
    if (*psVar3 == 2) {
        if (iVar2 > 5000) {
            uVar5 = *data_0214f464 * 69069 + 1;
            rv = (u32)(u16)uVar5 * 50000u >> 16;
            *data_0214f464 = uVar5;
            return (iVar2 + 40000 >= rv) ? 1254 : 1253;
        }
        uVar5 = *data_0214f464 * 69069 + 1;
        rv = (u32)(u16)uVar5 * 10000u >> 16;
        *data_0214f464 = uVar5;
        return (iVar2 + 4000 >= rv) ? 1254 : 1253;
    }
    if (iVar2 >= 3000) {
        return 1253;
    }
    uVar5 = *data_0214f464 * 69069 + 1;
    rv = (u32)(u16)uVar5 * 10000u >> 16;
    *data_0214f464 = uVar5;
    return (iVar2 + 7000 >= rv) ? 1253 : 1252;
ret1252:
    return 1252;
}
