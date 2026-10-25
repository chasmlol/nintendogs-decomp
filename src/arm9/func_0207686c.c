#include "ctx.h"

typedef struct { u8 revision; u8 numEntry; u16 sizeDictBlk; u16 dummy_; u16 ofsEntry; } Dict;
typedef struct { u16 sizeUnit; u16 sizeSub; u8 data[4]; } DictEntryHdr;
typedef struct { u8 *c; u32 unk4; u32 flag; } RS;

typedef void (*SbcFunc)(RS *rs, u32 opt, u8 *data, u32 idx);
extern SbcFunc data_0213e5b0[];

static inline void *GetResDataByIdx(const Dict *dict, u32 idx)
{
    const DictEntryHdr *hdr = (const DictEntryHdr *)((u8 *)dict + dict->ofsEntry);
    return (void *)&hdr->data[hdr->sizeUnit * idx];
}

void func_0207686c(RS *rs, u32 opt)
{
    if (!(rs->flag & 0x200) && (rs->flag & 1) && !(rs->flag & 2)) {
        Dict *set = *(Dict **)((u8 *)rs + 0xdc);
        u32 idx = rs->c[1];
        u8 *data = (u8 *)set + *(u32 *)GetResDataByIdx(set, idx);
        data_0213e5b0[*(u16 *)data](rs, opt, data, idx);
    }
    rs->c += 2;
}
