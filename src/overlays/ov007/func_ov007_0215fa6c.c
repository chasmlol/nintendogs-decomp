#include "ctx.h"
#pragma opt_strength_reduction off

typedef struct { s16 x; s16 y; } Pos;

typedef struct {
    u32 state;
    u32 tick;
    void *heap;
    Pos pos0;
    Pos pos1;
    Pos pos2;
    Pos posA[8];
    Pos posB[8];
    Pos pos3;
    void *res;
    void *objChr;
    void *posData;
} Work;

typedef struct { s16 x; s16 y; u32 attr; } Entry;
typedef struct { s32 v[8]; } Idx8;

typedef struct { u16 H; u16 W; u32 pixelFmt; u32 mapingType; u32 characterFmt; u32 szByte; void *pRawData; } CharData;
typedef struct { u32 fmt; u32 bExtendedPlt; u32 szByte; void *pRawData; } PlttData;
typedef struct { u16 screenWidth; u16 screenHeight; u16 colorMode; u16 screenFormat; u32 szByte; u32 rawData[1]; } ScrnData;

extern Work *data_ov007_02160e5c;
extern const char *data_ov007_02160b98;
extern const char data_ov007_02160bf0[];
extern const char data_ov007_02160c00[];
extern const char data_ov007_02160c14[];
extern const char data_ov007_02160c30[];
extern const char data_ov007_02160c48[];
extern const char data_ov007_02160c5c[];
extern const char data_ov007_02160c70[];
extern const char data_ov007_02160c84[];
extern const char data_ov007_02160c9c[];
extern const char data_ov007_02160cb4[];
extern const Idx8 data_ov007_02160bb0;
extern const Idx8 data_ov007_02160bd0;

void *func_020038b8(void *heap, u32 size);
void *func_0208c720(void *heap, const char *lang, const char *name);
int func_0205f050(char *buf, u32 n, const char *fmt, ...);
void *func_0207df48(const char *path);
BOOL func_02073828(void *file, ScrnData **pp);
BOOL func_02073768(void *file, CharData **pp);
BOOL func_020737d8(void *file, PlttData **pp);
u32 func_02085cb8(void *file);
void *func_02085cc0(void *file);
BOOL func_0207c910(int type, u32 dst, const void *src, u32 size);
u32 func_02093790(void);

#define SX12(v) (s16)(((s32)(v) << 20) >> 20)

void func_ov007_0215fa6c(void *heap)
{
    PlttData *plttMain;
    PlttData *plttSub;
    PlttData *plttObj;
    CharData *charMain;
    CharData *charSub;
    ScrnData *scrnMain;
    ScrnData *scrnSub;
    char path[64];
    void *objChr;
    void *plttObjFile;
    void *scrnMainFile;
    void *charMainFile;
    void *plttMainFile;
    void *scrnSubFile;
    void *charSubFile;
    void *plttSubFile;
    u32 size;
    u8 *pos;

    data_ov007_02160e5c = func_020038b8(heap, sizeof(Work));
    data_ov007_02160e5c->heap = heap;
    data_ov007_02160e5c->res = func_0208c720(heap, data_ov007_02160b98, data_ov007_02160bf0);

    func_0205f050(path, 64, data_ov007_02160c00, data_ov007_02160b98);
    pos = func_0207df48(path);
    func_0205f050(path, 64, data_ov007_02160c14, data_ov007_02160b98);
    objChr = func_0207df48(path);
    func_0205f050(path, 64, data_ov007_02160c30, data_ov007_02160b98);
    plttObjFile = func_0207df48(path);
    data_ov007_02160e5c->objChr = objChr;
    data_ov007_02160e5c->posData = pos;
    func_0205f050(path, 64, data_ov007_02160c48, data_ov007_02160b98);
    scrnMainFile = func_0207df48(path);
    func_0205f050(path, 64, data_ov007_02160c5c, data_ov007_02160b98);
    charMainFile = func_0207df48(path);
    func_0205f050(path, 64, data_ov007_02160c70, data_ov007_02160b98);
    plttMainFile = func_0207df48(path);
    func_0205f050(path, 64, data_ov007_02160c84, data_ov007_02160b98);
    scrnSubFile = func_0207df48(path);
    func_0205f050(path, 64, data_ov007_02160c9c, data_ov007_02160b98);
    charSubFile = func_0207df48(path);
    func_0205f050(path, 64, data_ov007_02160cb4, data_ov007_02160b98);
    plttSubFile = func_0207df48(path);

    func_02073828(scrnMainFile, &scrnMain);
    func_02073768(charMainFile, &charMain);
    func_020737d8(plttMainFile, &plttMain);
    func_02073828(scrnSubFile, &scrnSub);
    func_02073768(charSubFile, &charSub);
    func_020737d8(plttSubFile, &plttSub);
    func_020737d8(plttObjFile, &plttObj);

    size = func_02085cb8(objChr);
    func_0207c910(35, 0, func_02085cc0(objChr), size);
    func_0207c910(30, 0, plttObj->pRawData, 0x1c0);
    func_0207c910(10, 0, scrnMain->rawData, 0x600);
    func_0207c910(6, 0, charMain->pRawData, charMain->szByte);
    func_0207c910(15, 0, plttMain->pRawData, 0x1c0);
    func_0207c910(25, 0, scrnSub->rawData, 0x600);
    func_0207c910(21, 0, charSub->pRawData, charSub->szByte);
    func_0207c910(31, 0, plttSub->pRawData, 0x1c0);

    data_ov007_02160e5c->state = 0;
    data_ov007_02160e5c->tick = func_02093790();
    {
        Idx8 idxA = data_ov007_02160bb0;
        Idx8 idxB = data_ov007_02160bd0;
        const Entry *e;
        s32 i;

        pos += 8;
        e = (const Entry *)pos;
        data_ov007_02160e5c->pos0.x = SX12(e->x);
        data_ov007_02160e5c->pos0.y = SX12(e->y);
        e = &((const Entry *)pos)[2];
        data_ov007_02160e5c->pos1.x = SX12(e->x);
        data_ov007_02160e5c->pos1.y = SX12(e->y);
        e = &((const Entry *)pos)[1];
        data_ov007_02160e5c->pos2.x = SX12(e->x);
        data_ov007_02160e5c->pos2.y = SX12(e->y);
        e = &((const Entry *)pos)[31];
        data_ov007_02160e5c->pos3.x = SX12(e->x);
        data_ov007_02160e5c->pos3.y = SX12(e->y);
        for (i = 0; i < 8; i++) {
            e = &((const Entry *)pos)[idxA.v[i]];
            data_ov007_02160e5c->posA[i].x = SX12(e->x);
            data_ov007_02160e5c->posA[i].y = SX12(e->y);
            e = &((const Entry *)pos)[idxB.v[i]];
            data_ov007_02160e5c->posB[i].x = SX12(e->x);
            data_ov007_02160e5c->posB[i].y = SX12(e->y);
        }
    }

    *(vu16 *)0x0400000c = (u16)((*(vu16 *)0x0400000c & ~3) | 1);
    *(vu16 *)0x0400100a = (u16)((*(vu16 *)0x0400100a & ~3) | 1);
    *(vu32 *)0x04000000 |= 0x400;
    *(vu32 *)0x04001000 |= 0x1200;
    *(vu16 *)0x04000050 = 0;
    *(vu16 *)0x04001050 = 0;
}
