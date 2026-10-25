#include "ctx.h"

/* particle billboard draw: polygon attr, scale animation, view transform, 4x3 matrix, colour modulation */

typedef s32 fx32;
typedef s16 fx16;
typedef s64 fx64;
typedef u16 GXRgb;

typedef struct { fx32 x, y, z; } VecFx32;
typedef struct { fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22, _30, _31, _32; } MtxFx43;

#define FX_MUL(v1, v2) ((fx32)(((fx64)(v1) * (v2) + 0x800LL) >> 12))
#define FX_SinIdx(idx) (data_02126868[((idx) >> 4) << 1])
#define FX_CosIdx(idx) (data_02126868[(((idx) >> 4) << 1) + 1])

#define reg_G3_POLYGON_ATTR (*(vu32 *)0x040004a4)
#define reg_G3_MTX_IDENTITY (*(vu32 *)0x04000454)
#define reg_G3_COLOR (*(vu32 *)0x04000480)

extern fx16 data_02126868[];

typedef struct ResHeader {
    u8 pad00[0x30];
    fx16 aspectRatio;       /* 0x30 */
    u8 pad32[0x12];
    struct {
        u32 pad : 24;
        u32 texS : 2;       /* bits 24-25 */
        u32 texT : 2;       /* bits 26-27 */
        u32 scaleAnimDir : 3; /* bits 28-30 */
        u32 pad31 : 1;
    } misc;                 /* 0x44 */
} ResHeader;

typedef struct Resource {
    ResHeader *header;
} Resource;

typedef struct Emitter {
    u8 pad00[0x18];
    Resource *resource;     /* 0x18 */
    u8 pad1c[0x3e];
    GXRgb color;            /* 0x5a */
} Emitter;

typedef struct Manager {
    u8 pad00[0x30];
    u32 polygonAttr;        /* 0x30 */
    Emitter *emitter;       /* 0x34 */
    const MtxFx43 *viewMtx; /* 0x38 */
} Manager;

typedef struct Visibility {
    u16 baseAlpha : 5;
    u16 animAlpha : 5;
    u16 polygonID : 6;
} Visibility;

typedef struct Particle {
    u8 pad00[8];
    VecFx32 position;       /* 0x08 */
    VecFx32 emitterPos;     /* 0x14 */
    u8 pad20[0x10];
    fx32 baseScale;         /* 0x30 */
    fx16 animScale;         /* 0x34 */
    u16 rotation;           /* 0x36 */
    u16 pad38;
    GXRgb color;            /* 0x3a */
    u8 pad3c[4];
    Visibility visibility;  /* 0x40 */
} Particle;

extern void func_02066c20(const VecFx32 *src, const MtxFx43 *m, VecFx32 *dst);
extern void func_0206a0a4(const MtxFx43 *m);
extern void func_02083d74(u8 s, u8 t);

static inline void G3_PolygonAttr(int light, int polyMode, int cullMode, int polygonID, int alpha, int misc)
{
    reg_G3_POLYGON_ATTR = (u32)(((light) << 0) | ((polyMode) << 4) | ((cullMode) << 6) | (misc) |
                                ((polygonID) << 24) | ((alpha) << 16));
}

void func_020838e4(Manager *mgr, Particle *ptcl)
{
    VecFx32 vec;
    MtxFx43 mtx;
    fx32 sclX, sclY;
    fx16 sin, cos;
    fx16 aspect = mgr->emitter->resource->header->aspectRatio;
    const MtxFx43 *cmr = mgr->viewMtx;
    int alpha = ptcl->visibility.baseAlpha * (ptcl->visibility.animAlpha + 1) >> 5;

    G3_PolygonAttr(0, 0, 3, ptcl->visibility.polygonID, alpha, mgr->polygonAttr);
    reg_G3_POLYGON_ATTR;
    if (alpha == 0) {
        return;
    }

    sclY = ptcl->baseScale;
    sclX = FX_MUL(sclY, aspect);
    switch (mgr->emitter->resource->header->misc.scaleAnimDir) {
    case 0:
        sclX = FX_MUL(sclX, ptcl->animScale);
        sclY = FX_MUL(sclY, ptcl->animScale);
        break;
    case 1:
        sclX = FX_MUL(sclX, ptcl->animScale);
        break;
    case 2:
        sclY = FX_MUL(sclY, ptcl->animScale);
        break;
    }

    vec.x = ptcl->emitterPos.x + ptcl->position.x;
    vec.y = ptcl->emitterPos.y + ptcl->position.y;
    vec.z = ptcl->emitterPos.z + ptcl->position.z;
    func_02066c20(&vec, cmr, &vec);

    sin = FX_SinIdx(ptcl->rotation);
    cos = FX_CosIdx(ptcl->rotation);

    mtx._00 = FX_MUL(cos, sclX);
    mtx._10 = FX_MUL(-sin, sclY);
    mtx._20 = 0;
    mtx._30 = vec.x;
    mtx._01 = FX_MUL(sin, sclX);
    mtx._11 = FX_MUL(cos, sclY);
    mtx._21 = 0;
    mtx._31 = vec.y;
    mtx._02 = 0;
    mtx._12 = 0;
    mtx._22 = 0x1000;
    mtx._32 = vec.z;

    reg_G3_MTX_IDENTITY = 0;
    func_0206a0a4(&mtx);

    {
        GXRgb c1 = ptcl->color;
        GXRgb c2 = mgr->emitter->color;
        reg_G3_COLOR = (GXRgb)(((c1 & 0x1f) * (c2 & 0x1f) >> 5) |
                               (((c1 & 0x3e0) * (c2 & 0x3e0) >> 15) << 5) |
                               (((c1 & 0x7c00) * (c2 & 0x7c00) >> 25) << 10));
    }

    func_02083d74(mgr->emitter->resource->header->misc.texS, mgr->emitter->resource->header->misc.texT);
}
