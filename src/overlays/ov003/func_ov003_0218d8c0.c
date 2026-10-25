#include "ctx.h"

extern u8 *data_0215942c;
extern u8 *data_0214f464;
extern void func_0203e908(u8 *p, s32 v);
extern s32 func_ov003_0218dcbc(u8 *p);
extern s32 func_0202e304(u8 *p);

s32 func_ov003_0218d8c0(u8 *param_1)
{
    s32 v;
    u16 u;

    if (*(u16 *)data_0215942c == 1) goto GATE;
    if (*(u16 *)data_0215942c != 4) goto SW;
GATE:
    v = *(s32 *)data_0214f464 * 0x10dcd + 1;
    *(s32 *)data_0214f464 = v;
    u = (u16)(((u32)(v << 16)) >> 31);
    if (u == 0) goto G0;
    if (u != 1) goto SW;
    goto G1;
G0:
    func_0203e908(param_1, 0x387);
    return 1;
G1:
    func_0203e908(param_1, 0x394);
    return 1;
SW:
    switch (*(s8 *)(param_1 + 0x8b)) {
    case 0:
        return func_ov003_0218dcbc(param_1);
    case 1:
        goto C1;
    case 2:
        goto C2;
    case 3:
        goto C3;
    case 4:
        goto C4;
    case 5:
        goto C5;
    default:
        goto RD;
    }
C1:
    if (func_0202e304(param_1) != 0) goto O1;
    v = *(s32 *)data_0214f464 * 0x10dcd + 1;
    *(s32 *)data_0214f464 = v;
    u = (u16)(((u32)(v << 16)) >> 30);
    switch (u) {
    case 0:
        func_0203e908(param_1, 0x388);
        return 1;
    case 1:
        func_0203e908(param_1, 0x398);
        return 1;
    case 2:
        func_0203e908(param_1, 0x393);
        return 1;
    case 3:
        func_0203e908(param_1, 0x38e);
        return 1;
    default:
        goto R0;
    }
O1:
    return func_ov003_0218dcbc(param_1);
R0:
    return 0;
C2:
    if (func_0202e304(param_1) != 0) goto O2;
    v = *(s32 *)data_0214f464 * 0x10dcd + 1;
    *(s32 *)data_0214f464 = v;
    u = (u16)((((u32)(u16)v) * 3) >> 16);
    if (u == 0) goto B20;
    if (u == 1) goto B21;
    if (u != 2) goto R2;
    goto B22;
B20:
    func_0203e908(param_1, 0x392);
    return 1;
B21:
    func_0203e908(param_1, 0x38d);
    return 1;
B22:
    func_0203e908(param_1, 0x396);
    return 1;
O2:
    return func_ov003_0218dcbc(param_1);
R2:
    return 0;
C3:
    if (func_0202e304(param_1) != 0) goto O3;
    func_0203e908(param_1, 0x38c);
    return 1;
O3:
    return func_ov003_0218dcbc(param_1);
C4:
    if (func_0202e304(param_1) != 0) goto O4;
    v = *(s32 *)data_0214f464 * 0x10dcd + 1;
    *(s32 *)data_0214f464 = v;
    u = (u16)(((u32)(v << 16)) >> 31);
    if (u == 0) goto B40;
    if (u != 1) goto R4;
    goto B41;
B40:
    func_0203e908(param_1, 0x38c);
    return 1;
B41:
    func_0203e908(param_1, 0x38b);
    return 1;
O4:
    return func_ov003_0218dcbc(param_1);
R4:
    return 0;
C5:
    if (func_0202e304(param_1) != 0) goto O5;
    v = *(s32 *)data_0214f464 * 0x10dcd + 1;
    *(s32 *)data_0214f464 = v;
    u = (u16)(((u32)(v << 16)) >> 31);
    if (u == 0) goto B50;
    if (u != 1) goto R5;
    goto B51;
B50:
    func_0203e908(param_1, 0x38c);
    return 1;
B51:
    func_0203e908(param_1, 0x38b);
    return 1;
O5:
    return func_ov003_0218dcbc(param_1);
R5:
    return 0;
RD:
    return 0;
}
