#include "ctx.h"
/* Library types for the Nintendogs ARM9 binary: NitroSDK, NitroSystem (NNS) and the RFC 3174 SHA-1 code.
 * Every layout here was checked against matched code (the function named in each group compiles to the original
 * bytes with it). Library functions live at 0x0205e400-0x020b0000; library.md lists the ones identified so far.
 * Include it after ctx.h:   #include "ctx.h"   #include "nitro.h"
 * Names follow the libraries where known; a field you need that isn't here, add in your own file. */
#ifndef NITRO_H
#define NITRO_H

/* ---- fixed point (NitroSDK fx) ---------------------------------------------------------------------- */
typedef s16 fx16;
typedef s32 fx32;
typedef s64 fx64;
#define FX32_SHIFT 12
#define FX32_ONE   4096
#define FX16_ONE   4096

/* ---- vectors and matrices (MTX_Concat33 func_020664c8, MTX_Inverse33 func_02066664, MTX_Concat43 func_02066cd4,
 *      MTX_Inverse43 func_02066ef4, MTX_Concat44 func_02067404; VecFx32 func_020678b4; VecFx16 func_0206799c) -- */
typedef struct { fx32 x, y, z; } VecFx32;
typedef struct { fx16 x, y, z; } VecFx16;
typedef struct { fx32 _00, _01, _10, _11; } MtxFx22;
typedef struct {
    fx32 _00, _01, _02;
    fx32 _10, _11, _12;
    fx32 _20, _21, _22;
} MtxFx33;
typedef struct {
    fx32 _00, _01, _02;
    fx32 _10, _11, _12;
    fx32 _20, _21, _22;
    fx32 _30, _31, _32;
} MtxFx43;
typedef struct {
    fx32 _00, _01, _02, _03;
    fx32 _10, _11, _12, _13;
    fx32 _20, _21, _22, _23;
    fx32 _30, _31, _32, _33;
} MtxFx44;
/* The SDK's MTX source keeps the inputs in `register fx32` locals, uses `if (ab == b) p = &tmp;` for in-place
 * products and finishes with a struct copy `*ab = tmp;`; a matrix indexed by element number is `(&m->_00)[i]`. */

/* ---- graphics -------------------------------------------------------------------------------------------- */
typedef u16 GXRgb;                     /* 5-5-5 colour: R 0x001f, G 0x03e0, B 0x7c00 */

/* ---- MI / OS (MI_SendGXCommandAsync func_0206c4ac/func_0206c6a8; OS IRQ func_0207ec80) ----------------- */
typedef void (*MIDmaCallback)(void *arg);
typedef struct {
    volatile BOOL isBusy;
    u32 dmaNo;
    u32 src;
    u32 length;
    MIDmaCallback callback;
    void *arg;
    u32 fifoCond;
    void (*fifoFunc)(void);
} MIiGXDmaParams;
typedef struct {
    void (*func)(void *);
    u32 enable;
    void *arg;
} OSIrqCallbackInfo;

/* ---- NitroSystem FND expanded heap (NNS_FndResizeForMBlockExpHeap func_0207d394) ---------------------- */
typedef struct { void *prevObject; void *nextObject; } NNSFndLink;
typedef struct { void *headObject; void *tailObject; u16 numObjects; u16 offset; } NNSFndList;
typedef struct NNSiFndHeapHead {
    u32 signature;
    NNSFndLink link;
    NNSFndList childList;
    void *heapStart;
    void *heapEnd;
    u32 attribute;                     /* low 8 bits: options; bit 0 = clear allocations to zero */
} NNSiFndHeapHead;                     /* 0x24 bytes; the expanded-heap head follows it */
typedef NNSiFndHeapHead *NNSFndHeapHandle;
typedef struct NNSiFndExpHeapMBlockHead {
    u16 signature;                     /* 'UD' used, 'FR' free (0x4652) */
    u16 attribute;
    u32 blockSize;
    struct NNSiFndExpHeapMBlockHead *pMBHeadPrev;
    struct NNSiFndExpHeapMBlockHead *pMBHeadNext;
} NNSiFndExpHeapMBlockHead;            /* 16 bytes, just before each block */
typedef struct { NNSiFndExpHeapMBlockHead *head; NNSiFndExpHeapMBlockHead *tail; } NNSiFndExpMBlockList;
typedef struct {
    NNSiFndExpMBlockList mbFreeList;
    NNSiFndExpMBlockList mbUsedList;
    u16 groupID;
    u16 feature;
} NNSiFndExpHeapHead;                  /* at (u8 *)heap + sizeof(NNSiFndHeapHead) */
typedef struct { void *start; void *end; } NNSiMemRegion;
/* NitroSystem does its pointer arithmetic through these inlines; writing a plain cast instead swaps the
 * operands of the generated add (func_0207d394 matched only with them). */
static inline u32 NNSiGetUIntPtr(const void *ptr) { return (u32)ptr; }
static inline void *AddU32ToPtr(void *ptr, u32 val) { return (void *)(NNSiGetUIntPtr(ptr) + val); }
static inline u32 GetOffsetFromPtr(const void *start, const void *end) { return NNSiGetUIntPtr(end) - NNSiGetUIntPtr(start); }

/* ---- NitroSystem G3D resources (NNS_G3dGetResDictIdxByName func_02078224, ...DataByName func_02078384) -- */
typedef struct { u8 refBit; u8 idxLeft; u8 idxRight; u8 idxEntry; } NNSG3dResDictTreeNode;
typedef struct {
    u8 revision;
    u8 numEntry;                       /* < 16: linear search, else Patricia tree */
    u16 sizeDictBlk;
    u16 dummy_;
    u16 ofsEntry;                      /* NNSG3dResDictEntryHeader at (u8 *)dict + ofsEntry */
    NNSG3dResDictTreeNode node[1];
} NNSG3dResDict;
typedef struct { u16 sizeUnit; u16 ofsName; u8 data[4]; } NNSG3dResDictEntryHeader;
typedef union { char name[16]; u32 val[4]; } NNSG3dResName;

/* ---- NitroSystem G3D animation (joint decoders func_020785f4, func_02078794, func_02078ee8, func_020792d0;
 *      Maya texture matrix func_0207ba6c) -------------------------------------------------------------- */
typedef struct {
    u32 anmHeader;
    u16 numFrame;
    u16 numNode;
    u32 flag;                          /* bit 1: interpolate the last frame back to frame 0 */
    u32 ofsRot3;                       /* pivot-compressed rotations, 3 x s16 each */
    u32 ofsRot5;                       /* basic-compressed rotations, 5 x s16 each */
} NNSG3dResJntAnm;
/* Joint/material track info word (seen in all the decoders): */
#define NNS_G3D_ANM_STEP_MASK        0xc0000000   /* 0: every frame stored */
#define NNS_G3D_ANM_STEP_2           0x40000000   /* every 2nd frame stored */
#define NNS_G3D_ANM_STEP_4           0x80000000   /* every 4th frame stored */
#define NNS_G3D_ANM_FX16             0x20000000   /* values are fx16 pairs, else fx32 */
#define NNS_G3D_ANM_LAST_INTERP_MASK 0x1fff0000   /* >> 16: last frame that is interpolated */
typedef struct {
    u32 flag;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 prmTexImage;
    u32 prmTexPltt;
    fx32 scaleS, scaleT;
    fx16 sinR, cosR;
    fx32 transS, transT;
    u16 origWidth, origHeight;
    fx32 magW, magH;
} NNSG3dMatAnmResult;

/* ---- RFC 3174 SHA-1 (SHA1ProcessMessageBlock func_0207e4e8) ---------------------------------------- */
typedef struct SHA1Context {
    u32 Intermediate_Hash[5];
    u32 Length_Low;
    u32 Length_High;
    int Message_Block_Index;
    u8 Message_Block[64];
} SHA1Context;
#define SHA1CircularShift(bits, word) (((word) << (bits)) | ((word) >> (32 - (bits))))

#endif

#define FX_MUL(v1, v2) ((fx32)(((fx64)(v1) * (v2) + 0x800LL) >> FX32_SHIFT))

#define reg_G3_MTX_IDENTITY (*(vu32 *)0x04000454)
#define reg_G3_COLOR        (*(vu32 *)0x04000480)
#define reg_G3_POLYGON_ATTR (*(vu32 *)0x040004a4)

typedef struct {
    u8 pad00[0x30];
    fx16 aspectRatio;      /* 0x30 */
    u8 pad32[0x44 - 0x32];
    u32 pad0 : 8;          /* 0x44 */
    u32 dbbScale : 16;
    u32 pad1 : 4;
    u32 scaleAnimDir : 3;
    u32 pad2 : 1;
} SPLResourceHeader;

typedef struct {
    u8 pad[0x10];
    u32 repeat : 2;        /* 0x10 */
    u32 flip : 2;
    u32 rest : 28;
} SPLTexture;

typedef struct {
    SPLResourceHeader *header;  /* 0x00 */
    u8 pad04[0x10];
    SPLTexture *tex;            /* 0x14 */
} SPLResource;

typedef struct {
    u8 pad00[0x18];
    SPLResource *resource;  /* 0x18 */
    u8 pad1c[0x5a - 0x1c];
    GXRgb color;            /* 0x5a */
} SPLEmitter;

typedef struct {
    u8 pad00[0x30];
    u32 polygonAttr;        /* 0x30 */
    SPLEmitter *emitter;    /* 0x34 */
    const MtxFx43 *camera;  /* 0x38 */
} SPLManager;

typedef struct {
    u8 pad00[0x08];
    VecFx32 position;       /* 0x08 */
    VecFx32 emitterPos;     /* 0x14 */
    VecFx32 velocity;       /* 0x20 */
    u8 pad2c[0x30 - 0x2c];
    fx32 baseScale;         /* 0x30 */
    fx16 animScale;         /* 0x34 */
    u8 pad36[0x3a - 0x36];
    GXRgb color;            /* 0x3a */
    u8 pad3c[0x40 - 0x3c];
    u16 alpha : 5;          /* 0x40 */
    u16 baseAlpha : 5;
    u16 polygonID : 6;
} SPLParticle;

extern void func_02067d04(const VecFx32 *a, const VecFx32 *b, VecFx32 *axb);
extern void func_02067af0(const VecFx32 *src, VecFx32 *dst);
extern void func_0206c8b8(const MtxFx43 *src, MtxFx33 *dst);
extern void func_02066444(const VecFx32 *vec, const MtxFx33 *m, VecFx32 *dst);
extern void func_02066c20(const VecFx32 *vec, const MtxFx43 *m, VecFx32 *dst);
extern void func_0206a0a4(const MtxFx43 *m);
extern void func_02083d74(u8 s, u8 t);


void func_02082d98(SPLManager *mgr, SPLParticle *ptcl)
{
    VecFx32 dir;
    VecFx32 pos;
    VecFx32 vel;
    VecFx32 look;
    MtxFx33 rot;
    MtxFx43 mtx;
    fx16 aspect;
    fx32 sclX, sclY;
    s32 alpha;
    fx32 dot, s;
    const MtxFx43 *cmr;

    aspect = mgr->emitter->resource->header->aspectRatio;
    alpha = (ptcl->alpha * (ptcl->baseAlpha + 1)) >> 5;
    cmr = mgr->camera;
    reg_G3_POLYGON_ATTR = ptcl->polygonID << 24 | (mgr->polygonAttr | 0xc0) | alpha << 16;
    (void)reg_G3_POLYGON_ATTR;
    if (alpha == 0) {
        return;
    }

    sclY = ptcl->baseScale;
    sclX = FX_MUL(sclY, aspect);
    switch (mgr->emitter->resource->header->scaleAnimDir) {
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

    pos.x = ptcl->emitterPos.x + ptcl->position.x;
    pos.y = ptcl->emitterPos.y + ptcl->position.y;
    pos.z = ptcl->emitterPos.z + ptcl->position.z;
    vel = ptcl->velocity;
    look.x = cmr->_02;
    look.y = cmr->_12;
    look.z = cmr->_22;
    func_02067d04(&vel, &look, &vel);
    if (vel.x == 0 && vel.y == 0 && vel.z == 0) {
        return;
    }
    func_02067af0(&vel, &vel);
    func_0206c8b8(cmr, &rot);
    func_02066444(&vel, &rot, &vel);
    func_02066c20(&pos, cmr, &pos);

    dir = ptcl->velocity;
    func_02067af0(&dir, &dir);
    dot = FX_MUL(dir.x, -cmr->_02) + FX_MUL(dir.y, -cmr->_12) + FX_MUL(dir.z, -cmr->_22);
    if (dot < 0) {
        dot = -dot;
    }
    s = FX_MUL(FX32_ONE - dot, (fx32)mgr->emitter->resource->header->dbbScale);
    sclY = FX_MUL(sclY, s + FX32_ONE);

    mtx._00 = FX_MUL(vel.x, sclX);
    mtx._10 = FX_MUL(-vel.y, sclY);
    mtx._20 = 0;
    mtx._30 = pos.x;
    mtx._01 = FX_MUL(vel.y, sclX);
    mtx._11 = FX_MUL(vel.x, sclY);
    mtx._21 = 0;
    mtx._31 = pos.y;
    mtx._02 = 0;
    mtx._12 = 0;
    mtx._22 = FX32_ONE;
    mtx._32 = pos.z;
    reg_G3_MTX_IDENTITY = 0;
    func_0206a0a4(&mtx);

    reg_G3_COLOR = (GXRgb)((((ptcl->color & 0x1f) * (mgr->emitter->color & 0x1f)) >> 5) |
                           ((((ptcl->color & 0x3e0) * (mgr->emitter->color & 0x3e0)) >> 15) << 5) |
                           ((((ptcl->color & 0x7c00) * (mgr->emitter->color & 0x7c00)) >> 25) << 10));

    func_02083d74(mgr->emitter->resource->tex->repeat, mgr->emitter->resource->tex->flip);
}
