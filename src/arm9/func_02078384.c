#include "ctx.h"

typedef struct { u8 refBit; u8 idxLeft; u8 idxRight; u8 idxEntry; } NNSG3dResDictTreeNode;
typedef struct {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy_;
    u16 ofsEntry;
    NNSG3dResDictTreeNode node[1];
} NNSG3dResDict;
typedef struct { u16 sizeUnit; u16 ofsName; u8 data[4]; } NNSG3dResDictEntryHeader;
typedef union { char name[16]; u32 val[4]; } NNSG3dResName;

static inline void *GetResDataByIdx(const NNSG3dResDict *dict, u32 idx)
{
    const NNSG3dResDictEntryHeader *hdr = (const NNSG3dResDictEntryHeader *)((const u8 *)dict + dict->ofsEntry);
    return (void *)((u32)&hdr->data[0] + hdr->sizeUnit * idx);
}

static inline const NNSG3dResName *GetResNameByIdx(const NNSG3dResDict *dict, u32 idx)
{
    const NNSG3dResDictEntryHeader *hdr = (const NNSG3dResDictEntryHeader *)((const u8 *)dict + dict->ofsEntry);
    const NNSG3dResName *pName = (const NNSG3dResName *)((const u8 *)hdr + hdr->ofsName);
    return pName + idx;
}

void *func_02078384(const NNSG3dResDict *dict, const NNSG3dResName *name)
{
    if (dict->numEntry < 16) {
        u32 i;
        const u32 val0 = name->val[0];
        const u32 val1 = name->val[1];
        const u32 val2 = name->val[2];
        const u32 val3 = name->val[3];

        for (i = 0; i < dict->numEntry; ++i) {
            const NNSG3dResName *p = GetResNameByIdx(dict, i);
            if (p->val[0] == val0 && p->val[1] == val1 && p->val[2] == val2 && p->val[3] == val3) {
                return GetResDataByIdx(dict, i);
            }
        }
    } else {
        const NNSG3dResDictTreeNode *base = &dict->node[0];
        const NNSG3dResDictTreeNode *x;
        const NNSG3dResDictTreeNode *xn;

        if (base->idxLeft != 0) {
            x = base;
            xn = base + base->idxLeft;
            while (x->refBit > xn->refBit) {
                x = xn;
                xn = base + (&xn->idxLeft)[(name->val[xn->refBit >> 5] >> (xn->refBit & 31)) & 1];
            }
            {
                const NNSG3dResName *p = GetResNameByIdx(dict, xn->idxEntry);
                if (p->val[0] == name->val[0] && p->val[1] == name->val[1] &&
                    p->val[2] == name->val[2] && p->val[3] == name->val[3]) {
                    return GetResDataByIdx(dict, xn->idxEntry);
                }
            }
        }
    }
    return NULL;
}
