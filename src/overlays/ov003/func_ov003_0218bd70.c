#pragma avoid_byte strb
#include "ctx.h"

extern s8 data_0213c42d[];
extern u32 *data_0214f464;
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_0203560c(u8 *p, s32 a, s32 b);



u32 func_ov003_0218bd70(u8 *param_1, u32 param_2, u32 param_3, u32 param_4, u16 param_5)
{
    s16 sVar1;
    s32 iVar2;
    u32 uVar3;
    u32 uVar4;

    uVar4 = 0;
    if (*(u16 *)(param_1 + 0x11e) > 60) {
        func_0203e8cc(param_1, 3, (s16)(data_0213c42d[**(u16 **)(param_1 + 0x9e8) * 100] + 2));
        param_1[0x97] = 4;
        sVar1 = *(s16 *)(param_1 + 0x156);
        if (sVar1 > 18) goto a4;
        if (sVar1 >= 18) goto be30;
        if (sVar1 > 4) goto done1;
        if (sVar1 < 0) goto done1;
        if (sVar1 == 0 || sVar1 == 3) goto blk10c;
        if (sVar1 != 4) goto done1;
        goto be30;
    a4:
        if (sVar1 > 20) goto b8;
        if (sVar1 != 20) goto done1;
        goto be30;
    b8:
        if (sVar1 != 21) goto done1;
    be30:
        uVar3 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar3;
        if ((u16)(param_3 * (u16)uVar3 >> 16) == 0) {
            func_0203e8cc(param_1, 2, 3);
        }
        goto done1;
    blk10c:
        iVar2 = func_0203560c(param_1, 2, 10);
        if (iVar2 != 0) {
            uVar3 = *data_0214f464 * 0x10dcd + 1;
            *data_0214f464 = uVar3;
            iVar2 = param_5 + (u16)(param_4 * (u16)uVar3 >> 16);
            switch (iVar2) {
            case 0:
                func_0203e8cc(param_1, 2, 0x15);
                break;
            case 1:
                func_0203e8cc(param_1, 2, 0x12);
                break;
            case 2:
                func_0203e8cc(param_1, 2, 0x14);
                break;
            default:
                func_0203e8cc(param_1, 2, 4);
                break;
            }
        }
    done1:
        uVar4 = 1;
        goto common;
    } else {
        if (*(u16 *)(param_1 + 0x11e) > 20) {
            func_0203e8cc(param_1, 2, 4);
            param_1[0x97] = 4;
            uVar4 = 1;
        }
    }
common:
    if (data_0213c42d[**(u16 **)(param_1 + 0x9e8) * 100] == 3) {
        switch (param_2) {
        case 5:
        case 7:
            if (*(s32 *)(param_1 + 0x2f8) < 0) {
                func_0203e8cc(param_1, 3, 6);
            } else {
                func_0203e8cc(param_1, 3, 0);
            }
            break;
        case 6:
        case 8:
            if (*(s32 *)(param_1 + 0x304) < 0) {
                func_0203e8cc(param_1, 3, 7);
            } else {
                func_0203e8cc(param_1, 3, 0);
            }
            break;
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            break;
        }
    } else {
        if (param_2 == 7) goto Lcall;
        if (param_2 != 8) goto Lend;
    Lcall:
        func_0203e8cc(param_1, 3, 0);
    }
Lend:
    return uVar4;
}
