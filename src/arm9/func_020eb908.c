#include "ctx.h"

typedef u32 NNSGfdTexKey;
typedef u32 NNSGfdPlttKey;
typedef struct NNSG3dResFileHeader NNSG3dResFileHeader;
typedef struct NNSG3dResTex NNSG3dResTex;
typedef struct NNSG3dResMdlSet NNSG3dResMdlSet;

typedef struct {
    u8 pad[8];
    NNSG3dResFileHeader *resFile;
} Res;

typedef struct {
    Res *res;
    u32 f4;
    u32 f8;
} Slot;

typedef struct {
    u16 f0;
    s16 cur;                    /* 0x002 */
    u8 pad4[0x130];
    Slot slots[3];              /* 0x134 */
    u8 pad158[0x44];
    NNSGfdTexKey texKey[3];     /* 0x19c */
    NNSGfdPlttKey plttKey[3];   /* 0x1a8 */
} Mgr;

extern Mgr *data_0215be38;
extern NNSG3dResTex *func_020781d4(NNSG3dResFileHeader *resFile);
extern u32 func_02074184(const NNSG3dResTex *tex);
extern u32 func_0207407c(const NNSG3dResTex *tex);
extern void func_02074164(NNSG3dResTex *tex, NNSGfdTexKey key, NNSGfdTexKey key4x4);
extern void func_02074074(NNSG3dResTex *tex, NNSGfdPlttKey key);
extern void func_02074088(NNSG3dResTex *tex, BOOL exec);
extern void func_02074008(NNSG3dResTex *tex, BOOL exec);
extern NNSG3dResMdlSet *func_02078214(NNSG3dResFileHeader *resFile);
extern BOOL func_02073c6c(NNSG3dResMdlSet *mdlSet, NNSG3dResTex *tex);

static inline u32 NNS_GfdGetTexKeyAddr(NNSGfdTexKey memKey)
{
    return (u32)((0x0000FFFF & memKey) << 3);
}

static inline NNSGfdPlttKey NNS_GfdMakePlttKey(u32 addr, u32 size)
{
    return ((size >> 3) << 16) | (0x0000FFFF & (addr >> 3));
}

static inline u32 NNS_GfdGetPlttKeyAddr(NNSGfdPlttKey plttKey)
{
    return (u32)((0x0000FFFF & plttKey) << 3);
}

void func_020eb908(void)
{
    s16 idx;
    Res *res;
    NNSG3dResFileHeader *resFile;
    NNSG3dResTex *tex;

    idx = data_0215be38->cur;
    if (idx < 0) {
        return;
    }
    res = data_0215be38->slots[idx].res;
    if (res != NULL) {
        resFile = res->resFile;
        tex = func_020781d4(resFile);
        if (tex != NULL) {
            u32 texSize = func_02074184(tex);
            u32 plttSize = func_0207407c(tex);
            u32 texSizeKey = texSize >> 4;
            u32 texAddr = NNS_GfdGetTexKeyAddr(data_0215be38->texKey[idx]);
            u32 plttAddr = NNS_GfdGetPlttKeyAddr(data_0215be38->plttKey[idx]);
            data_0215be38->texKey[idx] = (texSizeKey << 16) | (0x0000FFFF & (texAddr >> 3));
            data_0215be38->plttKey[idx] = NNS_GfdMakePlttKey(plttAddr, plttSize);
            func_02074164(tex, data_0215be38->texKey[idx], 0);
            func_02074074(tex, data_0215be38->plttKey[idx]);
            func_02074088(tex, TRUE);
            func_02074008(tex, TRUE);
            func_02073c6c(func_02078214(resFile), tex);
        }
    }
    data_0215be38->cur = -1;
}
