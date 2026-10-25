#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))
#define GET(p, o) (*(u8 **)((u8 *)(p) + (o)))

typedef struct { s32 x, y, z; } VecFx32;
typedef struct { s32 m[3][3]; } MtxFx33;
typedef struct { s32 m[4][3]; } MtxFx43;

extern void func_02067d04(VecFx32 *, VecFx32 *, VecFx32 *);
extern void func_02067af0(VecFx32 *, VecFx32 *);
extern void func_0206c8b8(MtxFx43 *, MtxFx33 *);
extern void func_02066444(VecFx32 *, MtxFx33 *, VecFx32 *);
extern void func_02066c20(VecFx32 *, MtxFx43 *, VecFx32 *);
extern void func_0206a0a4(MtxFx43 *);
extern void func_02083d74(u8, u8);

typedef struct {
    u16 a : 5;
    u16 b : 5;
    u16 c : 6;
} Attr;

typedef struct {
    u32 pad : 24;
    u32 f24 : 2;
    u32 f26 : 2;
    u32 rest : 4;
} Bits;

void func_020831c8(u8 *param_1, u8 *param_2)
{
    VecFx32 vel;
    VecFx32 pos;
    VecFx32 dir;
    VecFx32 look;
    MtxFx33 rot;
    MtxFx43 mtx;
    s16 sVar1;
    s64 lVar2;
    u32 uVar8, uVar7, uSel;
    s32 iTop, iVar6, iVar9;
    MtxFx43 *piVar8;
    s32 uVar5;

    sVar1 = *(s16 *)(GET(GET(GET(param_1, 0x34), 0x18), 0) + 0x30);
    iTop = (s32)(((Attr *)(param_2 + 0x40))->a * (((Attr *)(param_2 + 0x40))->b + 1)) >> 5;
    piVar8 = (MtxFx43 *)GET(param_1, 0x38);
    *(vu32 *)0x040004a4 = ((Attr *)(param_2 + 0x40))->c << 24 | (*(u32 *)(param_1 + 0x30) | 0xc0) | iTop << 16;
    (void)*(vu32 *)0x040004a4;
    if (iTop == 0) {
        return;
    }
    uVar7 = *(u32 *)(param_2 + 0x30);
    lVar2 = (s64)(s32)uVar7 * (s64)sVar1 + 0x800;
    uVar8 = (u32)(lVar2 >> 12);
    uSel = ((*(u32 *)(GET(GET(GET(param_1, 0x34), 0x18), 0) + 0x44)) << 1) >> 29;
    if (uSel == 0) goto c0;
    if (uSel == 1) goto c1;
    if (uSel != 2) goto end;
    goto c2;
c0:
    iVar9 = (s32)*(s16 *)(param_2 + 0x34);
    lVar2 = (s64)(s32)uVar8 * (s64)iVar9 + 0x800;
    uVar8 = (u32)(lVar2 >> 12);
    lVar2 = (s64)(s32)uVar7 * (s64)iVar9 + 0x800;
    uVar7 = (u32)(lVar2 >> 12);
    goto end;
c1:
    lVar2 = (s64)(s32)uVar8 * (s64)*(s16 *)(param_2 + 0x34) + 0x800;
    uVar8 = (u32)(lVar2 >> 12);
    goto end;
c2:
    lVar2 = (s64)(s32)uVar7 * (s64)*(s16 *)(param_2 + 0x34) + 0x800;
    uVar7 = (u32)(lVar2 >> 12);
end:
    pos.x = *(s32 *)(param_2 + 0x14) + *(s32 *)(param_2 + 8);
    pos.y = *(s32 *)(param_2 + 0x18) + *(s32 *)(param_2 + 0xc);
    pos.z = *(s32 *)(param_2 + 0x1c) + *(s32 *)(param_2 + 0x10);
    dir = *(VecFx32 *)(param_2 + 0x20);
    look.x = piVar8->m[0][2];
    look.y = piVar8->m[1][2];
    look.z = piVar8->m[2][2];
    func_02067d04(&dir, &look, &dir);
    if (dir.x == 0 && dir.y == 0 && dir.z == 0) {
        return;
    }
    func_02067af0(&dir, &dir);
    func_0206c8b8(piVar8, &rot);
    func_02066444(&dir, &rot, &dir);
    func_02066c20(&pos, piVar8, &pos);
    vel = *(VecFx32 *)(param_2 + 0x20);
    func_02067af0(&vel, &vel);
    iVar6 = FX_Mul(vel.z, -piVar8->m[2][2]) +
            (FX_Mul(vel.x, -piVar8->m[0][2]) + FX_Mul(vel.y, -piVar8->m[1][2]));
    if (iVar6 < 0) {
        iVar6 = -iVar6;
    }
    uVar5 = FX_Mul(0x1000 - iVar6, (s32)((u32)(*(u32 *)(GET(GET(GET(param_1, 0x34), 0x18), 0) + 0x44) << 8) >> 16));
    uVar5 = FX_Mul((s32)uVar7, uVar5 + 0x1000);
    mtx.m[0][0] = FX_Mul(dir.x, (s32)uVar8);
    mtx.m[1][0] = FX_Mul(-dir.y, uVar5);
    mtx.m[2][0] = 0;
    mtx.m[3][0] = pos.x;
    mtx.m[0][1] = FX_Mul(dir.y, (s32)uVar8);
    mtx.m[1][1] = FX_Mul(dir.x, uVar5);
    mtx.m[2][1] = 0;
    mtx.m[3][1] = pos.y;
    mtx.m[0][2] = 0;
    mtx.m[1][2] = 0;
    mtx.m[2][2] = 0x1000;
    mtx.m[3][2] = pos.z;
    *(vu32 *)0x04000454 = 0;
    func_0206a0a4(&mtx);
    *(vu32 *)0x04000480 = (u16)(((s32)((*(u16 *)(param_2 + 0x3a) & 0x1f) * ((uSel = *(u16 *)(GET(param_1, 0x34) + 0x5a)) & 0x1f)) >> 5) |
                                (((s32)((*(u16 *)(param_2 + 0x3a) & 0x3e0) * (uSel & 0x3e0)) >> 15) << 5) |
                                (((s32)((*(u16 *)(param_2 + 0x3a) & 0x7c00) * (uSel & 0x7c00)) >> 25) << 10));
    func_02083d74((u8)((Bits *)(GET(GET(GET(param_1, 0x34), 0x18), 0) + 0x44))->f24,
                  (u8)((Bits *)(GET(GET(GET(param_1, 0x34), 0x18), 0) + 0x44))->f26);
}
