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

typedef struct { fx32 x, y; } NNSG2dFVec2;

typedef struct {
    u16 attr0;
    u16 attr1;
    u16 attr2;
} NNSG2dCellOAMAttrData;

typedef struct {
    u16 numOAMAttrs;
    u16 cellAttr;
    NNSG2dCellOAMAttrData *pOamAttrArray;
} NNSG2dCellData;

typedef union {
    u32 attr01;
    struct {
        u16 attr0;
        u16 attr1;
        u16 attr2;
        u16 _3;
    } s;
} GXOamAttr;

#define GX_OAM_EFFECT_AFFINE        0x100
#define GX_OAM_EFFECT_AFFINE_DOUBLE 0x300

extern const u16 data_0212aaf0[3][4];
extern const u16 data_0212aad8[3][4];

static inline void CopyCellAsOamAttr(const NNSG2dCellData *pCell, u16 idx, GXOamAttr *pDst)
{
    const NNSG2dCellOAMAttrData *pSrc = &pCell->pOamAttrArray[idx];
    pDst->s.attr0 = pSrc->attr0;
    pDst->s.attr1 = pSrc->attr1;
    pDst->s.attr2 = pSrc->attr2;
}

static inline void GetOamTransFx32(const GXOamAttr *pOam, NNSG2dFVec2 *pTrans)
{
    s16 x = (s16)((pOam->attr01 & 0x01ff0000) >> 16);
    s16 y;
    if (x > 255) {
        x = (s16)(x | 0xff00);
    }
    pTrans->x = x << FX32_SHIFT;
    y = (s16)(pOam->attr01 & 0xff);
    if (y > 127) {
        y = (s16)(y | 0xff00);
    }
    pTrans->y = y << FX32_SHIFT;
}

static inline void MultVec22(const MtxFx22 *m, const NNSG2dFVec2 *pSrc, NNSG2dFVec2 *pDst)
{
    NNSG2dFVec2 tmp;
    NNSG2dFVec2 *p = pDst;
    if (pSrc == pDst) {
        p = &tmp;
    }
    p->x = (fx32)(((fx64)m->_10 * pSrc->y + 0x1000 + (fx64)m->_00 * pSrc->x) >> FX32_SHIFT);
    p->y = (fx32)(((fx64)m->_11 * pSrc->y + 0x1000 + (fx64)m->_01 * pSrc->x) >> FX32_SHIFT);
    if (p == &tmp) {
        *pDst = tmp;
    }
}

static inline u32 GetOBJEffect(GXOamAttr *oam)
{
    u32 effect = oam->attr01 & 0x300;
    if (effect == GX_OAM_EFFECT_AFFINE || effect == GX_OAM_EFFECT_AFFINE_DOUBLE) {
        return effect;
    } else {
        return effect | (oam->attr01 & 0x30000000);
    }
}

static inline void SetOBJEffect(GXOamAttr *oam, u32 effect, int rsParam)
{
    if (effect != GX_OAM_EFFECT_AFFINE && effect != GX_OAM_EFFECT_AFFINE_DOUBLE) {
        oam->attr01 = (oam->attr01 & 0xc1fffcff) | effect;
    } else {
        oam->attr01 = (rsParam << 25) | ((oam->attr01 & 0xc1fffcff) | effect);
    }
}

u16 func_020738bc(GXOamAttr *pDstOams, u16 numDstOams, const NNSG2dCellData *pCell, const MtxFx22 *pMtxSR,
                  const NNSG2dFVec2 *pBaseTrans, u16 affineIndex, BOOL bDoubleAffine)
{
    u16 i;
    NNSG2dFVec2 objTrans;
    GXOamAttr *pDstOam;

    if (numDstOams >= pCell->numOAMAttrs) {
        numDstOams = pCell->numOAMAttrs;
    }
    for (i = 0; i < numDstOams; i++) {
        pDstOam = &pDstOams[i];
        CopyCellAsOamAttr(pCell, i, pDstOam);
        if (pMtxSR != NULL || pBaseTrans != NULL) {
            GetOamTransFx32(pDstOam, &objTrans);
            if (pMtxSR != NULL) {
                u32 effect;
                BOOL bDouble;
                u32 cur = GetOBJEffect(pDstOam);
                if (cur == GX_OAM_EFFECT_AFFINE_DOUBLE) {
                    u32 sz = pDstOam->attr01 & 0xc000c000;
                    s32 shape = (s32)(sz & 0xc000) >> 14;
                    u32 size = (sz & 0xc0000000) >> 30;
                    objTrans.x += data_0212aaf0[shape][size] << 11;
                    objTrans.y += data_0212aad8[shape][size] << 11;
                }
                effect = bDoubleAffine ? GX_OAM_EFFECT_AFFINE_DOUBLE : GX_OAM_EFFECT_AFFINE;
                bDouble = (effect == GX_OAM_EFFECT_AFFINE_DOUBLE) ? 1 : 0;
                MultVec22(pMtxSR, &objTrans, &objTrans);
                SetOBJEffect(pDstOam, effect, affineIndex);
                {
                    u32 sz = pDstOam->attr01 & 0xc000c000;
                    s32 shape = (s32)(sz & 0xc000) >> 14;
                    u32 size = (sz & 0xc0000000) >> 30;
                    s32 hw = data_0212aaf0[shape][size] >> 1;
                    s32 hh = data_0212aad8[shape][size] >> 1;
                    fx32 x, y, tx, ty;
                    tx = hw << FX32_SHIFT;
                    x = objTrans.x;
                    tx = -tx;
                    tx = tx + pMtxSR->_00 * hw + pMtxSR->_10 * hh;
                    x += tx;
                    objTrans.x = x;
                    ty = hh << FX32_SHIFT;
                    y = objTrans.y;
                    ty = -ty;
                    ty = ty + pMtxSR->_01 * hw + pMtxSR->_11 * hh;
                    y += ty;
                    objTrans.y = y;
                    if (bDouble) {
                        objTrans.x -= hw << FX32_SHIFT;
                        objTrans.y -= hh << FX32_SHIFT;
                    }
                }
            }
            if (pBaseTrans != NULL) {
                objTrans.x += pBaseTrans->x;
                objTrans.y += pBaseTrans->y;
            }
            pDstOam->attr01 = (pDstOam->attr01 & 0xfe00ff00) | (((objTrans.y + 0x800) >> FX32_SHIFT) & 0xff) |
                              ((((objTrans.x + 0x800) >> FX32_SHIFT) & 0x1ff) << 16);
        }
    }
    return numDstOams;
}
