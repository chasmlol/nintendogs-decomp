#include "ctx.h"

#define FX10(x) ((u32)((((s64)(s32)(x) << 10) + 0x800) >> 12))

typedef struct { s32 a; s32 b; s32 c; } V3;

extern s32 func_02036578(u8 *p);
extern s32 func_0203579c(u8 *p, s32 v);
extern void func_02025548(u8 *p);
extern s32 func_02035770(u8 *p, s32 v);
extern s32 func_02035744(u8 *p, s32 v);
extern u32 func_02027708(s32 a);
extern BOOL func_02032aac(u8 *p, u32 v);
extern void func_02027668(s32 a, s32 *b);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_0202707c(s32 a, s32 b);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 v);
extern void func_0201409c(u8 *p, u32 v);
extern void func_020393d8(u8 *p, s32 v);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);

void func_02046d24(u8 *param_1, s32 param_2, s32 param_3, s32 param_4)
{
    s32 iVar3;
    u32 uVar4;
    BOOL bVar1;
    s32 loc[3];
    s32 iVar2;
    u32 b;

    if (*(s16 *)(param_1 + 0x152) == 0x113) {
        iVar2 = func_02036578(param_1);
        b = 0;
        iVar3 = func_0203579c(param_1, 6);
        if (iVar3 != 0) {
            func_02025548(param_1);
        }
        if (iVar2 != 0) {
            iVar3 = func_02035770(param_1, 0x12);
            if (iVar3 != 0) {
                iVar3 = func_02035744(param_1, 0x1c);
                if (iVar3 != 0) {
                    uVar4 = func_02027708(iVar2);
                    bVar1 = func_02032aac(param_1, uVar4);
                    if (bVar1 && *(s32 *)(param_1 + 0x464) == 0) {
                        *(s32 *)(param_1 + 0x464) = 1;
                        func_02027668(iVar2, loc);
                        func_02067e34(loc, (s32 *)(param_1 + 0x2a0), loc);
                        loc[0] = FX10(loc[0]);
                        loc[1] = FX10(loc[1]);
                        loc[2] = FX10(loc[2]);
                        *(V3 *)(iVar2 + 0x260) = *(V3 *)loc;
                        func_0202707c(iVar2, 0x1e);
                    }
                }
            }
        }
        iVar2 = func_0203567c(param_1);
        if (iVar2 != 0) {
            b = 1;
            func_0203e908(param_1, 0x2e3);
        }
        func_0201409c(param_1, b);
        return;
    }
    iVar2 = func_02035744(param_1, param_3);
    if (iVar2 != 0) {
        func_020393d8(param_1, param_2);
    }
    iVar2 = func_02035770(param_1, param_4);
    if (iVar2 != 0) {
        func_0203e8cc(param_1, 0, 0x113);
        return;
    }
}
