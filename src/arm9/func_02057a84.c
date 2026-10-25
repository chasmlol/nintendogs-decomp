#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0214f464[];
extern s32 func_0202775c(u8 *p, u8 *q);
extern u32 func_02027708(u8 *p);
extern void func_02027668(u8 *p, u32 *a);
extern void func_0203e908(u8 *p, u32 n);
extern s32 func_020385e4(u8 *p);
extern s32 func_0202de0c(u8 *p);
extern s32 func_0203945c(u8 *p, u32 *a, u32 v);

static inline void SwapB(register u32 v, register vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

s32 func_02057a84(u8 *param_1, u8 *param_2, u32 param_3)
{
    s32 iVar1;
    u16 uVar3;
    u32 nv;
    u8 *Q;
    u32 F[10];

    iVar1 = func_0202775c(param_1, param_2);
    if (iVar1 == 0) goto caseZ;
    if (iVar1 == 1) goto case1;
    if (iVar1 != 2) goto ret0;
    Q = *(u8 **)data_0214f464;
    nv = *(u32 *)Q * 0x10dcd + 1;
    *(u32 *)Q = nv;
    uVar3 = ((u32)(u16)(param_3 + 1u) * (u16)nv) >> 16;
    switch (uVar3) {
    case 0: goto A0;
    case 1: goto A1;
    }
    goto AD;
A0:
    if (param_2 == 0) return 0;
    iVar1 = func_02027708(param_2);
    SwapB(iVar1, param_1 + 0x8a);
    func_0203e908(param_1, 0x304);
    return 1;
A1:
    if (param_2 != 0) {
        iVar1 = func_02027708(param_2);
        SwapB(iVar1, param_1 + 0x8a);
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
AD:
    if (param_2 == 0) return 0;
    func_02027668(param_2, F);
    iVar1 = func_02027708(param_2);
    return func_0203945c(param_1, F, iVar1);
case1:
    Q = *(u8 **)data_0214f464;
    nv = *(u32 *)Q * 0x10dcd + 1;
    *(u32 *)Q = nv;
    uVar3 = ((u32)(u16)(param_3 + 2u) * (u16)nv) >> 16;
    switch (uVar3) {
    case 0: goto B0;
    case 1: goto B1;
    case 2: goto B2;
    }
    goto BD;
B0:
    if (param_2 == 0) return 0;
    iVar1 = func_02027708(param_2);
    SwapB(iVar1, param_1 + 0x8a);
    func_0203e908(param_1, 0x304);
    return 1;
B1:
    if (param_2 != 0 && func_0202de0c(param_1) == 0) {
        iVar1 = func_02027708(param_2);
        SwapB(iVar1, param_1 + 0x8a);
        func_0203e908(param_1, 0x305);
        return 1;
    }
    return 0;
B2:
    if (param_2 != 0) {
        iVar1 = func_02027708(param_2);
        SwapB(iVar1, param_1 + 0x8a);
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
BD:
    if (param_2 == 0) return 0;
    func_02027668(param_2, F + 3);
    iVar1 = func_02027708(param_2);
    return func_0203945c(param_1, F + 3, iVar1);
caseZ:
    Q = *(u8 **)data_0214f464;
    nv = *(u32 *)Q * 0x10dcd + 1;
    *(u32 *)Q = nv;
    uVar3 = ((u32)(u16)(param_3 + 3u) * (u16)nv) >> 16;
    switch (uVar3) {
    case 0:
        if (param_2 == 0) return 0;
        iVar1 = func_02027708(param_2);
        SwapB(iVar1, param_1 + 0x8a);
        func_0203e908(param_1, 0x304);
        return 1;
    case 1:
        if (param_2 == 0) return 0;
        iVar1 = func_02027708(param_2);
        SwapB(iVar1, param_1 + 0x8a);
        func_0203e908(param_1, 0x306);
        return 1;
    case 2:
        if (param_2 == 0) return 0;
        iVar1 = func_02027708(param_2);
        SwapB(iVar1, param_1 + 0x8a);
        func_0203e908(param_1, 0x307);
        return 1;
    case 3:
        if (param_2 != 0) {
            iVar1 = func_02027708(param_2);
            SwapB(iVar1, param_1 + 0x8a);
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
    }
    if (param_2 == 0) return 0;
    func_02027668(param_2, F + 6);
    iVar1 = func_02027708(param_2);
    return func_0203945c(param_1, F + 6, iVar1);
ret0:
    return 0;
}
