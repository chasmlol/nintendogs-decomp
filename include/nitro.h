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
