#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

typedef struct { s32 v[3]; } T3;
extern u8 *data_02159444;
extern u32 *data_0214f464;

s32 func_02026e68(u8 *p);
void func_02027ee0(u8 *p, s32 a, s32 b);
s64 func_0202c110(u8 *p, u32 a, s32 b);
s32 func_0203646c(u8 *p);
s32 func_0202a7dc(u8 *p);
s32 func_ov003_0218e360(u8 *p, u32 a);
void func_0203e908(u8 *p, s32 a);

s32 func_ov003_0217fe80(u8 *param_1, u32 param_2, s32 param_3)
{
    s32 iVar2;
    s32 iVar3;
    u32 uVar6;
    s64 lVar7;
    s32 uVar4;
    s32 uVar5;
    u8 bVar1;

    if (*(s8 *)(param_1 + 0x93) != 0) {
        switch (param_2) {
        case 7:
        case 8:
            if (*(s32 *)(param_1 + 0x484) == 0) {
                *(u16 *)(param_1 + 0x12e) = 0x5000;
            } else {
                *(u16 *)(param_1 + 0x12e) = 0xb000;
            }
            break;
        case 5:
        case 6:
            if (*(s32 *)(param_1 + 0x484) == 0) {
                *(u16 *)(param_1 + 0x12e) = 0x2000;
            } else {
                *(u16 *)(param_1 + 0x12e) = 0xe000;
            }
            break;
        }
        *(T3 *)(param_1 + 0x3b4) = *(T3 *)(data_02159444 + 0x9c);
    }
    if (((*(vu16 *)0x04000304 & 0x8000) >> 15) == 0 &&
        (*(u16 *)(data_02159444 + 0x84) & 1) != 0) {
        iVar3 = *(s32 *)(data_02159444 + 0x98);
        iVar2 = *(s32 *)(data_02159444 + 0x94);
        if (iVar3 <= 0) {
            iVar3 = -iVar3;
        }
        if (iVar2 <= 0) {
            iVar2 = -iVar2;
        }
        if (iVar2 + iVar3 > 10) {
            func_02027ee0(param_1, 5, 30);
        } else {
            func_02027ee0(param_1, 5, -10);
        }
    }
    iVar2 = func_02026e68(param_1);
    if (iVar2 != 0) {
        *(u16 *)(param_1 + 0x11c) = 0;
    } else {
        *(u16 *)(param_1 + 0x11c) = *(u16 *)(param_1 + 0x11c) + 1;
    }
    iVar2 = *(s32 *)(data_02159444 + 0x98);
    iVar3 = *(s32 *)(data_02159444 + 0x94);
    if (iVar2 <= 0) {
        iVar2 = -iVar2;
    }
    if (iVar3 <= 0) {
        iVar3 = -iVar3;
    }
    if (iVar3 + iVar2 > 2) {
        *(u16 *)(param_1 + 0x11e) = *(u16 *)(param_1 + 0x11e) + 1;
    } else {
        if (*(u16 *)(param_1 + 0x11e) != 0) {
            *(u16 *)(param_1 + 0x11e) = *(u16 *)(param_1 + 0x11e) - 1;
        }
    }
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)(param_1 + 0x11c) == 0) {
        SwapByte(1, (vu8 *)(param_1 + 0xb9));
    } else {
        SwapByte(0, (vu8 *)(param_1 + 0xb9));
    }
    lVar7 = func_0202c110(param_1, param_2, param_3);
    if ((s32)lVar7 != 0) {
        return 1;
    }
    if (func_0203646c(param_1) == 0) {
        goto TAIL;
    }
    if (func_0202a7dc(param_1) == 0) {
        goto SEED;
    }
TAIL:
    return func_ov003_0218e360(param_1, param_2);
SEED:
    uVar6 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar6;
    if ((u16)(((u32)(u16)uVar6 * 400u) >> 16) != 0) {
        return 0;
    }
    func_0203e908(param_1, (s16)(*(s32 *)(param_1 + 0x484) + 0x222));
    return 1;
}
