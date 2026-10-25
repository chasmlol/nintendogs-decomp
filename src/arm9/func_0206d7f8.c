#include "ctx.h"
extern void func_0206fd70(void);
extern u8 func_0206fd98(void);
extern void func_0206c804(void *a, void *b, s32 c);
extern u32 func_0206fd3c(void);
extern u32 func_0206fd4c(void);
extern u32 func_0206f0a0(u16 *a, u16 b, u32 c, u32 d, u32 e);
extern void func_0206e90c(void *a, s32 b, void *c, s32 d);
extern u32 func_0206ef64(u16 *a, u16 b, u32 c, s32 d, u32 e);
extern u32 func_0206ee08(u16 *a, u16 b, u32 c, s32 d, u32 e);
extern u32 func_0206eba8(u16 *a, u16 b, u32 c, u16 *d, u32 e);

u32 func_0206d7f8(s32 *param_1, u16 *param_2)
{
    u8 uVar1;
    s32 iVar2;
    struct { u32 v; } rv;
    u32 e5;
    u32 *puVar4;
    s32 *piVar5;

    rv.v = 0;
    piVar5 = param_1 + 0x27;
    if (param_1[0] != 0) {
        return 0;
    }
    if (*piVar5 == 0) {
        return 0;
    }
    func_0206fd70();
    uVar1 = func_0206fd98();
    switch (*piVar5) {
    case 2:
        func_0206c804(piVar5, param_1, 0x9c);
        *(u8 *)(param_1 + 3) = uVar1;
        iVar2 = (s32)func_0206fd3c();
        e5 = func_0206fd4c();
        rv.v = func_0206f0a0(param_2, *(u16 *)(param_1 + 2), *(u8 *)(param_1 + 3), iVar2, e5);
        break;
    case 6:
        func_0206c804(piVar5, param_1, 0x9c);
        *(u8 *)(param_1 + 3) = uVar1;
        {
            u32 k = 0;
            u32 *q = (u32 *)(param_1 + 0x7e);
            do {
                if (((*(u16 *)(param_1 + 2) >> k) & 1) != 0) {
                    func_0206e90c(q, param_1[6], q + 7, (param_1 + k)[7]);
                }
                k = k + 1;
                q = q + 0x1a;
            } while ((s32)k < 16);
        }
        if (*piVar5 == 4) {
            rv.v = func_0206ef64(param_2, *(u16 *)(param_1 + 2), *(u8 *)(param_1 + 3), param_1[5], 0);
        } else {
            rv.v = func_0206ee08(param_2, *(u16 *)(param_1 + 2), *(u8 *)(param_1 + 3), param_1[5], 0);
        }
        break;
    case 4:
        func_0206c804(piVar5, param_1, 0x9c);
        *(u8 *)(param_1 + 3) = uVar1;
        puVar4 = (u32 *)(param_1 + 0x7e);
        do {
            if (((*(u16 *)(param_1 + 2) >> rv.v) & 1) != 0) {
                func_0206e90c(puVar4, param_1[6], (u32 *)(param_1 + rv.v)[0x17], (param_1 + rv.v)[7]);
            }
            rv.v = rv.v + 1;
            puVar4 = puVar4 + 0x1a;
        } while ((s32)rv.v < 16);
        if (*piVar5 == 4) {
            rv.v = func_0206ef64(param_2, *(u16 *)(param_1 + 2), *(u8 *)(param_1 + 3), param_1[5], 0);
        } else {
            rv.v = func_0206ee08(param_2, *(u16 *)(param_1 + 2), *(u8 *)(param_1 + 3), param_1[5], 0);
        }
        break;
    case 10:
        func_0206c804(piVar5, param_1, 0x9c);
        *(u8 *)(param_1 + 3) = uVar1;
        rv.v = func_0206eba8(param_2, *(u16 *)(param_1 + 2), *(u8 *)(param_1 + 3), (u16 *)(param_1 + 5), *(u8 *)((u8 *)param_1 + 0x1d));
        break;
    default:
        break;
    }
    *piVar5 = 0;
    return rv.v;
}
