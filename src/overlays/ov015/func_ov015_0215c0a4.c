#pragma opt_common_subs off
#include "ctx.h"

typedef s32 fx32;
typedef struct { fx32 x; fx32 y; fx32 z; } VecFx32;
typedef struct { u8 pad[0x30]; VecFx32 pos; VecFx32 target; VecFx32 dir; VecFx32 up; VecFx32 side; } Cam;

typedef struct { s32 a; s32 b; s32 c; } V3;

static inline void VEC_Set(VecFx32 *a, fx32 x, fx32 y, fx32 z)
{
    a->x = x;
    a->y = y;
    a->z = z;
}

static inline fx32 FX_Mul(fx32 v1, fx32 v2)
{
    return (fx32)(((s64)v1 * v2 + 0x800LL) >> 12);
}

extern s32 *data_ov015_0215caec;
extern s32 *data_ov015_0215cae8;
extern V3 data_ov015_0215cabc;
extern u16 data_0214efdc[];
extern s16 data_02126868[];
extern s32 *data_0215be34;
extern s32 data_ov015_0215cae0;
extern s16 data_ov015_0215caa0[];
extern s16 data_ov015_0215caa8[];

void func_0208f6ac(s32 a);
s32 func_0208f698(s32 a);
void func_0206a6f8(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020e9004(s32 a);
void func_02067288(s32 a, s32 b, s32 c, s32 d);
void func_01ff8058(s32 a, s32 b, s32 c);
void func_02067af0(s32 a, s32 b);
void func_02067d04(s32 a, s32 b, s32 c);
void func_02067e34(s32 a, s32 b, s32 c);
s32 func_02067c30(s32 a);
void func_01ff832c(s32 a, s32 b, s32 c, s32 d);
void func_020810c0(s32 a);
s32 func_0208122c(s32 a, s32 b, s32 c);
void func_020810a8(s32 a, s32 b);
void func_020e9040(void);
void func_0208f680(s32 a, s32 b);
void func_0206799c(s32 a, s32 b);

void func_ov015_0215c0a4(void)
{
    u16 uVar1;
    Cam *o;
    s32 iVar7;
    s32 jj;
    s32 t0;
    s32 t1;
    s32 *piVar8;
    u32 uVar9;
    u32 uVar10;
    u16 auStack_d4[3];
    u16 auStack_ce[3];
    u32 auStack_c8[12];
    s32 aiStack_98[12];
    s32 aiStack_68[12];
    s32 aiStack_38[3];
    V3 local_2c;
    s32 local_20[4];

    func_0208f6ac(*data_ov015_0215caec);
    {
        Cam *o1;
        o1 = (Cam *)func_0208f698((s32)data_ov015_0215cae8);
        func_0206a6f8((s32)&o1->pos, (s32)&o1->up, (s32)&o1->target, 1, (s32)auStack_c8);
    }
    func_020e9004((s32)auStack_c8);
    o = (Cam *)func_0208f698((s32)data_ov015_0215cae8);
    uVar9 = 0;
    local_2c = data_ov015_0215cabc;
    uVar10 = 0;
    uVar1 = data_0214efdc[1];
    if ((u16)(uVar1 & 0x20) != 0) {
        uVar10 = 0xffffff00;
    }
    if ((u16)(uVar1 & 0x10) != 0) {
        uVar10 = 0x100;
    }
    if ((u16)(uVar1 & 0x40) != 0) {
        uVar9 = 0x100;
    }
    if ((u16)(uVar1 & 0x80) != 0) {
        uVar9 = 0xffffff00;
    }
    iVar7 = (s32)(u16)uVar9 >> 4;
    jj = iVar7 * 2;
    t1 = data_02126868[jj + 1];
    t0 = data_02126868[jj];
    func_02067288((s32)aiStack_98, (s32)&o->side, t0, t1);
    iVar7 = (s32)(u16)uVar10 >> 4;
    jj = iVar7 * 2;
    t1 = data_02126868[jj + 1];
    t0 = data_02126868[jj];
    func_02067288((s32)aiStack_68, (s32)&local_2c, t0, t1);
    func_01ff8058((s32)&o->side, (s32)((u8 *)aiStack_68 + 0), (s32)&o->side);
    func_01ff8058((s32)&o->up, (s32)((u8 *)aiStack_98 + 0), (s32)&o->up);
    func_02067af0((s32)&o->side, (s32)&o->side);
    func_02067af0((s32)&o->up, (s32)&o->up);
    func_02067d04((s32)&o->side, (s32)&o->up, (s32)&o->dir);
    func_02067d04((s32)&o->dir, (s32)&o->side, (s32)&o->up);
    func_02067e34((s32)&o->pos, (s32)&o->target, (s32)((u8 *)aiStack_38 + 0));
    iVar7 = func_02067c30((s32)((u8 *)aiStack_38 + 0));
    func_01ff832c(-iVar7, (s32)&o->dir, (s32)&o->target, (s32)&o->pos);
    {
        Cam *q;
        s32 k1;

        q = (Cam *)func_0208f698((s32)data_ov015_0215cae8);
        k1 = 0;
        uVar1 = data_0214efdc[1];
        if ((u16)(uVar1 & 2) != 0) {
            k1 = -0x333;
        }
        if ((u16)(uVar1 & 0x400) != 0) {
            k1 = 0x333;
        }
        q->pos.y += k1;
        q->target.y += k1;
    }
    {
        Cam *q;
        fx32 k2;

        q = (Cam *)func_0208f698((s32)data_ov015_0215cae8);
        k2 = 0;
        uVar1 = data_0214efdc[1];
        if ((u16)(uVar1 & 0x200) != 0) {
            k2 = -0x333;
        }
        if ((u16)(uVar1 & 0x100) != 0) {
            k2 = 0x333;
        }
        VEC_Set(&q->pos, q->pos.x + FX_Mul(k2, q->dir.x), q->pos.y + FX_Mul(k2, q->dir.y), q->pos.z + FX_Mul(k2, q->dir.z));
    }
    iVar7 = 0;
    if ((u16)(data_0214efdc[0] & 1) != 0) {
        s32 *pz;

        pz = local_20;
        if (data_0215be34 != 0) {
            iVar7 = *data_0215be34;
        }
        pz[0] = 0;
        pz[1] = 0;
        pz[2] = 0;
        func_020810c0(iVar7);
        piVar8 = (s32 *)func_0208122c(iVar7, data_ov015_0215cae0, (s32)((u8 *)local_20 + 0));
        if (piVar8 != 0) {
            func_020810a8(iVar7, (s32)piVar8);
        }
    }
    func_020e9040();
    func_0208f680((s32)data_ov015_0215cae8, 0);
    func_0208f680((s32)data_ov015_0215cae8, 1);
    if (data_ov015_0215caa0[0] != 0 || data_ov015_0215caa0[1] != 0 || data_ov015_0215caa0[2] != 0) {
        func_0206799c((s32)data_ov015_0215caa0, (s32)auStack_d4);
    }
    if (data_ov015_0215caa8[0] == 0 && data_ov015_0215caa8[1] == 0 && data_ov015_0215caa8[2] == 0) {
        return;
    }
    func_0206799c((s32)data_ov015_0215caa8, (s32)auStack_ce);
}
