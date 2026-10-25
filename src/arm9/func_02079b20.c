#include "ctx.h"

typedef struct { u8 revision; u8 numEntry; u16 sizeDictBlk; u16 dummy_; u16 ofsEntry; } Dict;
typedef struct { u16 sizeUnit; u16 sizeSub; u8 data[4]; } DictEntryHdr;
typedef void (*JntFunc)(void *result, const u8 *p, const u8 *c, u32 flag);

typedef struct {
    u8 *c;
    u8 pad[0xd0];
    Dict *pResNodeInfo;
    u8 pad2[0x10];
    JntFunc funcJnt;
} RS;

extern RS *data_02152f3c;

static inline void *GetResDataByIdx(const Dict *dict, u32 idx)
{
    const DictEntryHdr *hdr = (const DictEntryHdr *)((u8 *)dict + dict->ofsEntry);
    return (void *)&hdr->data[hdr->sizeUnit * idx];
}

void func_02079b20(void *result)
{
    RS *rs = data_02152f3c;
    Dict *jnt = rs->pResNodeInfo;
    const u8 *c = rs->c;
    const u8 *data = (u8 *)jnt + *(u32 *)GetResDataByIdx(jnt, c[1]);
    u32 flag = *(u16 *)data;
    const u8 *p = data + 4;

    if (!(flag & 1)) {
        p += 12;
    }
    if (!(flag & 2)) {
        if (flag & 8) {
            p += 4;
        } else {
            p += 16;
        }
    }
    rs->funcJnt(result, p, c, flag);
}
