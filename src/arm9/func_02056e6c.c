#include "ctx.h"

extern u32 *data_0214f464;
extern s32 func_0202775c(u8 *p, u32 b);
extern s32 func_02036578(u8 *p);
extern s32 func_020449bc(s32 a);
extern s32 func_0202fd7c(u8 *p);
extern void func_0203e908(u8 *p, u32 a);
extern s32 func_02027894(u8 *p, s32 a);
extern s32 func_0205807c(u8 *p, u32 a, u32 b);

s32 func_02056e6c(u8 *param_1, u32 param_2)
{
    s32 iVar1;
    s32 iv;
    s32 iv2;
    s32 fl;
    u32 nv;
    u32 t;
    u16 bit;

    iVar1 = func_0202775c(param_1, param_2);
    if (iVar1 == 0) goto R0;
    if (iVar1 == 1) goto R1;
    if (iVar1 != 2) goto RET0;
    nv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nv;
    t = (u16)((nv << 16) >> 30);
    switch (t) {
    case 0:
        goto C20;
    case 1:
        goto C21;
    case 2:
        goto C22;
    case 3:
        goto C23;
    default:
        goto RET0;
    }
C20:
    iv = func_02036578(param_1);
    fl = func_020449bc(iv);
    if ((fl & 1) != 0) goto NZa;
    return func_0202fd7c(param_1);
NZa:
    if (iv == 0) return 0;
    nv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nv;
    bit = (u16)((nv << 16) >> 31);
    if (bit == 0) goto Aa;
    if (bit != 1) goto RZa;
    goto Ba;
Aa:
    func_0203e908(param_1, 0x278);
    return 1;
Ba:
    func_0203e908(param_1, 0x279);
    return 1;
RZa:
    return 0;
C21:
    iv = func_02036578(param_1);
    fl = func_020449bc(iv);
    if ((fl & 8) != 0) goto NZa2;
    return func_0202fd7c(param_1);
NZa2:
    if (iv == 0) return 0;
    func_0203e908(param_1, 0x28f);
    return 1;
C22:
    iv = func_02036578(param_1);
    fl = func_020449bc(iv);
    if ((fl & 0x10) != 0) goto NZa3;
    return func_0202fd7c(param_1);
NZa3:
    if (iv == 0) return 0;
    iv2 = func_02027894(param_1, iv);
    *(s32 *)(param_1 + 0x484) = iv2;
    func_0203e908(param_1, 0x295);
    return 1;
C23:
    iv = func_02036578(param_1);
    fl = func_020449bc(iv);
    if ((fl & 0x40) != 0) goto NZa4;
    return func_0202fd7c(param_1);
NZa4:
    if (iv == 0) return 0;
    func_0203e908(param_1, 0x2fd);
    return 1;
R1:
    nv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nv;
    t = (u16)((((u32)(u16)nv) * 3u) >> 16);
    if (t == 0) goto T0b;
    if (t == 1) goto T1b;
    if (t != 2) goto RET0;
    goto T2b;
T0b:
    iv = func_02036578(param_1);
    fl = func_020449bc(iv);
    if ((fl & 1) != 0) goto NZb;
    return func_0202fd7c(param_1);
NZb:
    if (iv == 0) return 0;
    nv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nv;
    bit = (u16)((nv << 16) >> 31);
    if (bit == 0) goto Ab;
    if (bit != 1) goto RZb;
    goto Bb;
Ab:
    func_0203e908(param_1, 0x278);
    return 1;
Bb:
    func_0203e908(param_1, 0x279);
    return 1;
RZb:
    return 0;
T1b:
    iv = func_02036578(param_1);
    fl = func_020449bc(iv);
    if ((fl & 0x10) != 0) goto NZb1;
    return func_0202fd7c(param_1);
NZb1:
    if (iv == 0) return 0;
    iv2 = func_02027894(param_1, iv);
    *(s32 *)(param_1 + 0x484) = iv2;
    func_0203e908(param_1, 0x295);
    return 1;
T2b:
    return func_0205807c(param_1, param_2, 0);
R0:
    nv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nv;
    t = (u16)((((u32)(u16)nv) * 3u) >> 16);
    if (t == 0) goto T0c;
    if (t == 1) goto T1c;
    if (t != 2) goto RET0;
    goto T2c;
T0c:
    iv = func_02036578(param_1);
    fl = func_020449bc(iv);
    if ((fl & 1) != 0) goto NZc;
    return func_0202fd7c(param_1);
NZc:
    if (iv == 0) return 0;
    nv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nv;
    bit = (u16)((nv << 16) >> 31);
    if (bit == 0) goto Ac;
    if (bit != 1) goto RZc;
    goto Bc;
Ac:
    func_0203e908(param_1, 0x278);
    return 1;
Bc:
    func_0203e908(param_1, 0x279);
    return 1;
RZc:
    return 0;
T1c:
    iv = func_02036578(param_1);
    fl = func_020449bc(iv);
    if ((fl & 0x10) != 0) goto NZc1;
    return func_0202fd7c(param_1);
NZc1:
    if (iv == 0) return 0;
    iv2 = func_02027894(param_1, iv);
    *(s32 *)(param_1 + 0x484) = iv2;
    func_0203e908(param_1, 0x295);
    return 1;
T2c:
    iv = func_02036578(param_1);
    fl = func_020449bc(iv);
    if ((fl & 0x40) != 0) goto NZc2;
    return func_0202fd7c(param_1);
NZc2:
    if (iv == 0) return 0;
    func_0203e908(param_1, 0x2fd);
    return 1;
RET0:
    return 0;
}
