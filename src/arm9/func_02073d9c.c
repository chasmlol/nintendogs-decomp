#include "ctx.h"

typedef struct {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy_;
    u16 ofsEntry;
} NNSG3dResDict;

typedef struct {
    u16 sizeUnit;
    u16 ofsName;
    u8 data[4];
} NNSG3dResDictEntryHeader;

typedef struct {
    u32 offset;
} NNSG3dResDictMatData;

typedef struct {
    u8 pad[28];
    u16 texPlttBase;
} NNSG3dResMatData;

typedef struct {
    u16 offsetFuncData;
    u16 dummy;
    NNSG3dResDict dict;
} NNSG3dResMat;

typedef struct {
    u16 offset;
    u8 numIdx;
    u8 flag;
} NNSG3dResDictPlttToMatIdxData;

typedef struct {
    u16 offset;
    u16 flag;
} NNSG3dResDictPlttData;

typedef struct {
    u8 pad[0x2c];
    u32 vramKey;
} NNSG3dResTex;

static inline void *NNSi_G3dGetResDataByIdx(const NNSG3dResDict *dict, u32 idx)
{
    const NNSG3dResDictEntryHeader *header = (const NNSG3dResDictEntryHeader *)((u8 *)dict + dict->ofsEntry);
    return (void *)((u8 *)&header->data[0] + header->sizeUnit * idx);
}

static inline NNSG3dResMatData *NNS_G3dGetMatDataByIdx(const NNSG3dResMat *mat, u32 idx)
{
    const NNSG3dResDictMatData *data = (const NNSG3dResDictMatData *)NNSi_G3dGetResDataByIdx(&mat->dict, idx);
    return (NNSG3dResMatData *)((u8 *)mat + data->offset);
}

void func_02073d9c(NNSG3dResMat *pMat, NNSG3dResDictPlttToMatIdxData *pBindData, const NNSG3dResTex *pTex,
                   const NNSG3dResDictPlttData *pPlttData)
{
    u8 *base = (u8 *)pMat + pBindData->offset;
    u16 vramOffset = (u16)pTex->vramKey;
    u16 plttBase = pPlttData->offset;
    u32 j;

    if (!(pPlttData->flag & 1)) {
        plttBase >>= 1;
        vramOffset >>= 1;
    }
    for (j = 0; j < pBindData->numIdx; ++j) {
        NNSG3dResMatData *matData = NNS_G3dGetMatDataByIdx(pMat, *(base + j));
        matData->texPlttBase = (u16)(plttBase + vramOffset);
    }
    pBindData->flag |= 1;
}
