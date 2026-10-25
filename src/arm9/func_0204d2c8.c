#include "ctx.h"

extern u32 data_0214f464;

typedef struct {
    u32 w[3];
} T12;

extern void func_02039448(u8 *p);
extern void func_02027654(u32 a, u8 *b);
extern s32 func_02035744(u8 *p, u32 a);
extern void func_02037450(u8 *p, u32 a);
extern s32 func_0203567c(u8 *p);
extern void func_0204d72c(u8 *p);
extern s32 func_02035770(u8 *p, u32 a);
extern s32 func_0203579c(u8 *p, u32 a);
extern s32 func_02028124(u8 *p);
extern void func_02024d40(u8 *p, u32 a, u32 b, s32 c);
extern void func_02024f18(u8 *p, u32 a, s32 b);

#define FX(a, b) ((s32)((((s64)(a)) * ((s64)(b)) + 0x800) >> 12))

static inline void CopyCfg(u8 *p)
{
    *(T12 *)(p + 0x3b4) = *(T12 *)(p + 0x278);
}

u32 func_0204d2c8(u8 *param_1, u32 param_2)
{
    u32 iVar1;
    u16 t;
    int v;
    u32 v2;

    if (param_2 == 0) {
        goto RET0;
    }
    switch (*(u32 *)(0x46c + param_1)) {
    case 0:
    default:
        func_02039448(param_1);
        func_02027654(param_2, 0x278 + param_1);
        CopyCfg(param_1);
        if (func_02035744(param_1, 13) != 0) {
            func_02037450(param_1, 768);
        }
        iVar1 = func_0203567c(param_1);
        if (iVar1 != 0) {
            func_0204d72c(param_1);
        }
        return 0;
    case 1:
    case 2:
    case 9:
        func_02027654(param_2, 0x3b4 + param_1);
        v = *(s32 *)&data_0214f464;
        v2 = *(u32 *)v * 0x10dcd + 1;
        t = (u16)((((u32)(u16)v2) * 80u) >> 16);
        *(u32 *)v = v2;
        if (t != 0) {
            goto ret1;
        }
        func_0204d72c(param_1);
ret1:
        return 1;
    case 3:
        func_02039448(param_1);
        func_02027654(param_2, param_1 + 0x278);
        CopyCfg(param_1);
        iVar1 = func_02035770(param_1, 20);
        if (0 != iVar1) {
            iVar1 = func_02035744(param_1, 40);
            if (iVar1 != 0) {
                func_02037450(param_1, 768);
            }
        }
        iVar1 = func_0203567c(param_1);
        if (0 != iVar1) {
            func_0204d72c(param_1);
        }
        return 0;
    case 4:
    case 5:
        func_02039448(param_1);
        func_02027654(param_2, 0x278 + param_1);
        CopyCfg(param_1);
        func_02037450(param_1, 768);
        iVar1 = func_0203579c(param_1, 8);
        if (iVar1 != 0) {
            v = func_02028124(param_1);
            *(s32 *)(param_1 + 0x25c) = FX(v, -49);
            *(s32 *)(param_1 + 0x264) = *(s32 *)(0x25c + param_1) * -5;
        }
        if (*(u32 *)(0x46c + param_1) == 4) {
            v = func_02028124(param_1);
            func_02024d40(param_1, 8, 26, FX(v, 0x13e));
        } else {
            v = func_02028124(param_1);
            func_02024d40(param_1, 8, 26, -FX(v, 0x13e));
        }
        iVar1 = func_0203567c(param_1);
        if (0 != iVar1) {
            func_0204d72c(param_1);
        }
        return 0;
    case 6:
        func_02039448(param_1);
        func_02027654(param_2, param_1 + 0x278);
        CopyCfg(param_1);
        iVar1 = func_02035770(param_1, 3);
        if (iVar1 != 0) {
            func_02037450(param_1, 768);
        }
        iVar1 = func_0203567c(param_1);
        if (0 != iVar1) {
            func_0204d72c(param_1);
        }
        return 0;
    case 7:
    case 8:
        func_02039448(param_1);
        func_02027654(param_2, 0x278 + param_1);
        CopyCfg(param_1);
        iVar1 = func_02035770(param_1, 3);
        if (0 != iVar1) {
            func_02037450(param_1, 768);
        }
        if (*(u32 *)(0x46c + param_1) == 7) {
            v = func_02028124(param_1);
            func_02024f18(param_1, 1, FX(v, 0x1eb));
        } else {
            v = func_02028124(param_1);
            func_02024f18(param_1, 1, -FX(v, 0x1eb));
        }
        iVar1 = func_0203567c(param_1);
        if (iVar1 != 0) {
            func_0204d72c(param_1);
        }
        return 0;
    }
RET0:
    return 0;
}
