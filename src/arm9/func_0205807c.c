#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;

extern s32 func_0202775c(u8 *p, s32 a);
extern s32 func_02027708(s32 a);
extern void func_0203e908(u8 *p, s32 a);
extern s32 func_0202de0c(u8 *p);
extern s32 func_020385e4(u8 *p);
extern void func_02027668(s32 a, s32 *b);
extern u32 func_0203945c(u8 *p, s32 *a, s32 b);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

#define STEP(uv) do { uv = *data_0214f464 * 0x10dcd + 1; *data_0214f464 = uv; } while (0)

u32 func_0205807c(u8 *param_1, s32 param_2, s32 param_3)
{
    s32 iVar1;
    u32 uVar2;
    u32 uVar3;
    s32 aiStack_38[3];
    s32 aiStack_2c[3];
    s32 aiStack_20[4];

    iVar1 = func_0202775c(param_1, param_2);
    switch (iVar1) {
    case 2:
        STEP(uVar3);
        uVar3 = (u16)(((u32)(u16)(param_3 + 2) * (u32)(u16)uVar3) >> 16);
        switch (uVar3) {
        case 0:
            if (param_2 == 0) {
                return 0;
            }
            iVar1 = func_02027708(param_2);
            SwapByte((u32)iVar1, (vu8 *)(param_1 + 0x8a));
            func_0203e908(param_1, 0x304);
            return 1;
        case 1:
            if (param_2 != 0 && (iVar1 = func_0202de0c(param_1), iVar1 == 0)) {
                iVar1 = func_02027708(param_2);
                SwapByte((u32)iVar1, (vu8 *)(param_1 + 0x8a));
                func_0203e908(param_1, 0x305);
                return 1;
            }
            return 0;
        case 2:
            if (param_2 != 0) {
                iVar1 = func_02027708(param_2);
                SwapByte((u32)iVar1, (vu8 *)(param_1 + 0x8a));
                iVar1 = func_020385e4(param_1);
                switch (iVar1) {
                case 0:
                    func_0203e908(param_1, 0x274);
                    return 1;
                case 1:
                    func_0203e908(param_1, 0x275);
                    return 1;
                case 2:
                    func_0203e908(param_1, 0x276);
                    return 1;
                case 3:
                    func_0203e908(param_1, 0x277);
                    return 1;
                }
            }
            return 0;
        default:
            if (param_2 == 0) {
                return 0;
            }
            func_02027668(param_2, aiStack_38);
            iVar1 = func_02027708(param_2);
            uVar2 = func_0203945c(param_1, aiStack_38, iVar1);
            return uVar2;
        }
    case 1:
        STEP(uVar3);
        uVar3 = (u16)(((u32)(u16)(param_3 + 2) * (u32)(u16)uVar3) >> 16);
        switch (uVar3) {
        case 0:
            if (param_2 == 0) {
                return 0;
            }
            iVar1 = func_02027708(param_2);
            SwapByte((u32)iVar1, (vu8 *)(param_1 + 0x8a));
            func_0203e908(param_1, 0x304);
            return 1;
        case 1:
            if (param_2 != 0 && (iVar1 = func_0202de0c(param_1), iVar1 == 0)) {
                iVar1 = func_02027708(param_2);
                SwapByte((u32)iVar1, (vu8 *)(param_1 + 0x8a));
                func_0203e908(param_1, 0x305);
                return 1;
            }
            return 0;
        case 2:
            if (param_2 != 0) {
                iVar1 = func_02027708(param_2);
                SwapByte((u32)iVar1, (vu8 *)(param_1 + 0x8a));
                iVar1 = func_020385e4(param_1);
                switch (iVar1) {
                case 0:
                    func_0203e908(param_1, 0x274);
                    return 1;
                case 1:
                    func_0203e908(param_1, 0x275);
                    return 1;
                case 2:
                    func_0203e908(param_1, 0x276);
                    return 1;
                case 3:
                    func_0203e908(param_1, 0x277);
                    return 1;
                }
            }
            return 0;
        default:
            if (param_2 == 0) {
                return 0;
            }
            func_02027668(param_2, aiStack_2c);
            iVar1 = func_02027708(param_2);
            uVar2 = func_0203945c(param_1, aiStack_2c, iVar1);
            return uVar2;
        }
    case 0:
        STEP(uVar3);
        uVar3 = (u16)(((u32)(u16)(param_3 + 4) * (u32)(u16)uVar3) >> 16);
        switch (uVar3) {
        case 0:
            if (param_2 == 0) {
                return 0;
            }
            iVar1 = func_02027708(param_2);
            SwapByte((u32)iVar1, (vu8 *)(param_1 + 0x8a));
            func_0203e908(param_1, 0x304);
            return 1;
        case 1:
            if (param_2 != 0 && (iVar1 = func_0202de0c(param_1), iVar1 == 0)) {
                iVar1 = func_02027708(param_2);
                SwapByte((u32)iVar1, (vu8 *)(param_1 + 0x8a));
                func_0203e908(param_1, 0x305);
                return 1;
            }
            return 0;
        case 2:
            if (param_2 == 0) {
                return 0;
            }
            iVar1 = func_02027708(param_2);
            SwapByte((u32)iVar1, (vu8 *)(param_1 + 0x8a));
            func_0203e908(param_1, 0x306);
            return 1;
        case 3:
            if (param_2 == 0) {
                return 0;
            }
            iVar1 = func_02027708(param_2);
            SwapByte((u32)iVar1, (vu8 *)(param_1 + 0x8a));
            func_0203e908(param_1, 0x307);
            return 1;
        case 4:
            if (param_2 != 0) {
                iVar1 = func_02027708(param_2);
                SwapByte((u32)iVar1, (vu8 *)(param_1 + 0x8a));
                iVar1 = func_020385e4(param_1);
                switch (iVar1) {
                case 0:
                    func_0203e908(param_1, 0x274);
                    return 1;
                case 1:
                    func_0203e908(param_1, 0x275);
                    return 1;
                case 2:
                    func_0203e908(param_1, 0x276);
                    return 1;
                case 3:
                    func_0203e908(param_1, 0x277);
                    return 1;
                }
            }
            return 0;
        default:
            if (param_2 == 0) {
                return 0;
            }
            func_02027668(param_2, aiStack_20);
            iVar1 = func_02027708(param_2);
            uVar2 = func_0203945c(param_1, aiStack_20, iVar1);
            return uVar2;
        }
    default:
        return 0;
    }
}
