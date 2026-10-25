#include "ctx.h"

typedef s32 fx32;
typedef struct { fx32 _00, _01, _10, _11; } MtxFx22;

typedef enum { GX_BG_SCRSIZE_TEXT_256x256 = 0 } GXBGScrSizeText;
typedef enum { GX_BG_COLORMODE_16 = 0 } GXBGColorMode;
typedef enum { GX_BG_SCRBASE_0x0000 = 0 } GXBGScrBase;
typedef enum { GX_BG_CHARBASE_0x00000 = 0 } GXBGCharBase;
typedef enum { GX_BG_SCRSIZE_AFFINE_128x128 = 0 } GXBGScrSizeAffine;
typedef enum { GX_BG_AREAOVER_XLU = 0 } GXBGAreaOver;
typedef enum { GX_BG_SCRSIZE_256x16PLTT_128x128 = 0 } GXBGScrSize256x16Pltt;
typedef enum { GX_BG_SCRSIZE_256BMP_128x128 = 0 } GXBGScrSize256Bmp;
typedef enum { GX_BG_SCRSIZE_DCBMP_128x128 = 0 } GXBGScrSizeDcBmp;
typedef enum { GX_BG_BMPSCRBASE_0x00000 = 0 } GXBGBmpScrBase;

#define reg_G2_BG2CNT (*(vu16 *)0x0400000c)
#define reg_G2S_DB_BG2CNT (*(vu16 *)0x0400100c)

extern void func_02069fd4(vu16 *reg, const MtxFx22 *mtx, int centerX, int centerY, int x1, int y1);

static inline void G2x_SetBGyPriority_(vu16 *reg, int priority)
{
    *reg = (u16)((*reg & ~3) | priority);
}

static inline void G2x_BGyMosaic_(vu16 *reg, BOOL enable)
{
    if (enable) {
        *reg |= 0x40;
    } else {
        *reg &= ~0x40;
    }
}

static inline void G2x_SetBGyControlText_(vu16 *reg, GXBGScrSizeText screenSize, GXBGColorMode colorMode, GXBGScrBase screenBase, GXBGCharBase charBase)
{
    *reg = (u16)((*reg & 0x43) | (screenSize << 14) | (colorMode << 7) | (screenBase << 8) | (charBase << 2));
}

static inline void G2x_SetBGyControlAffine_(vu16 *reg, GXBGScrSizeAffine screenSize, GXBGAreaOver areaOver, GXBGScrBase screenBase, GXBGCharBase charBase)
{
    *reg = (u16)((*reg & 0x43) | (screenSize << 14) | (screenBase << 8) | (charBase << 2) | (areaOver << 13));
}

static inline void G2x_SetBGyControl256x16Pltt_(vu16 *reg, GXBGScrSize256x16Pltt screenSize, GXBGAreaOver areaOver, GXBGScrBase screenBase)
{
    *reg = (u16)((*reg & 0x43) | (screenSize << 14) | (screenBase << 8) | (areaOver << 13));
}

static inline void G2x_SetBGyControl256Bmp_(vu16 *reg, GXBGScrSize256Bmp screenSize, GXBGAreaOver areaOver, GXBGBmpScrBase screenBase)
{
    *reg = (u16)((*reg & 0x43) | (screenSize << 14) | 0x80 | (screenBase << 8) | (areaOver << 13));
}

static inline void G2x_SetBGyControlDCBmp_(vu16 *reg, GXBGScrSizeDcBmp screenSize, GXBGAreaOver areaOver, GXBGBmpScrBase screenBase)
{
    *reg = (u16)((*reg & 0x43) | (screenSize << 14) | 0x84 | (screenBase << 8) | (areaOver << 13));
}

typedef struct {
    u16 priority;
    u16 mosaic;
    u16 screenSize;
    u16 areaOver;
    u16 screenBase;
    u16 charBase;
} BGCtl;

typedef struct {
    s32 mode;
    BGCtl ctl;
} BGParam;

void func_02004f10(BGParam *p, BOOL main)
{
    MtxFx22 mtx;
    BGCtl *c;

    mtx._00 = 0x1000;
    mtx._01 = 0;
    mtx._10 = 0;
    mtx._11 = 0x1000;
    c = &p->ctl;
    switch (p->mode) {
    case 0:
        break;
    case 1:
        if (main) {
            *(vu32 *)0x04000018 = 0;
            G2x_SetBGyPriority_(&reg_G2_BG2CNT, c->priority);
            G2x_BGyMosaic_(&reg_G2_BG2CNT, c->mosaic);
            G2x_SetBGyControlText_(&reg_G2_BG2CNT, (GXBGScrSizeText)c->screenSize, (GXBGColorMode)c->areaOver, (GXBGScrBase)c->screenBase, (GXBGCharBase)c->charBase);
        } else {
            *(vu32 *)0x04001018 = 0;
            G2x_SetBGyPriority_(&reg_G2S_DB_BG2CNT, c->priority);
            G2x_BGyMosaic_(&reg_G2S_DB_BG2CNT, c->mosaic);
            G2x_SetBGyControlText_(&reg_G2S_DB_BG2CNT, (GXBGScrSizeText)c->screenSize, (GXBGColorMode)c->areaOver, (GXBGScrBase)c->screenBase, (GXBGCharBase)c->charBase);
        }
        break;
    case 2:
        if (main) {
            func_02069fd4((vu16 *)0x04000020, &mtx, 0, 0, 0, 0);
            G2x_SetBGyPriority_(&reg_G2_BG2CNT, c->priority);
            G2x_BGyMosaic_(&reg_G2_BG2CNT, c->mosaic);
            G2x_SetBGyControlAffine_(&reg_G2_BG2CNT, (GXBGScrSizeAffine)c->screenSize, (GXBGAreaOver)c->areaOver, (GXBGScrBase)c->screenBase, (GXBGCharBase)c->charBase);
        } else {
            func_02069fd4((vu16 *)0x04001020, &mtx, 0, 0, 0, 0);
            G2x_SetBGyPriority_(&reg_G2S_DB_BG2CNT, c->priority);
            G2x_BGyMosaic_(&reg_G2S_DB_BG2CNT, c->mosaic);
            G2x_SetBGyControlAffine_(&reg_G2S_DB_BG2CNT, (GXBGScrSizeAffine)c->screenSize, (GXBGAreaOver)c->areaOver, (GXBGScrBase)c->screenBase, (GXBGCharBase)c->charBase);
        }
        break;
    case 3:
        if (main) {
            func_02069fd4((vu16 *)0x04000020, &mtx, 0, 0, 0, 0);
            G2x_SetBGyPriority_(&reg_G2_BG2CNT, c->priority);
            G2x_BGyMosaic_(&reg_G2_BG2CNT, c->mosaic);
            G2x_SetBGyControl256x16Pltt_(&reg_G2_BG2CNT, (GXBGScrSize256x16Pltt)c->screenSize, (GXBGAreaOver)c->areaOver, (GXBGScrBase)c->screenBase);
        } else {
            func_02069fd4((vu16 *)0x04001020, &mtx, 0, 0, 0, 0);
            G2x_SetBGyPriority_(&reg_G2S_DB_BG2CNT, c->priority);
            G2x_BGyMosaic_(&reg_G2S_DB_BG2CNT, c->mosaic);
            G2x_SetBGyControl256x16Pltt_(&reg_G2S_DB_BG2CNT, (GXBGScrSize256x16Pltt)c->screenSize, (GXBGAreaOver)c->areaOver, (GXBGScrBase)c->screenBase);
        }
        break;
    case 4:
        if (main) {
            func_02069fd4((vu16 *)0x04000020, &mtx, 0, 0, 0, 0);
            G2x_SetBGyPriority_(&reg_G2_BG2CNT, c->priority);
            G2x_BGyMosaic_(&reg_G2_BG2CNT, c->mosaic);
            G2x_SetBGyControl256Bmp_(&reg_G2_BG2CNT, (GXBGScrSize256Bmp)c->screenSize, (GXBGAreaOver)c->areaOver, (GXBGBmpScrBase)c->screenBase);
        } else {
            func_02069fd4((vu16 *)0x04001020, &mtx, 0, 0, 0, 0);
            G2x_SetBGyPriority_(&reg_G2S_DB_BG2CNT, c->priority);
            G2x_BGyMosaic_(&reg_G2S_DB_BG2CNT, c->mosaic);
            G2x_SetBGyControl256Bmp_(&reg_G2S_DB_BG2CNT, (GXBGScrSize256Bmp)c->screenSize, (GXBGAreaOver)c->areaOver, (GXBGBmpScrBase)c->screenBase);
        }
        break;
    case 5:
        if (main) {
            func_02069fd4((vu16 *)0x04000020, &mtx, 0, 0, 0, 0);
            G2x_SetBGyPriority_(&reg_G2_BG2CNT, c->priority);
            G2x_BGyMosaic_(&reg_G2_BG2CNT, c->mosaic);
            G2x_SetBGyControlDCBmp_(&reg_G2_BG2CNT, (GXBGScrSizeDcBmp)c->screenSize, (GXBGAreaOver)c->areaOver, (GXBGBmpScrBase)c->screenBase);
        } else {
            func_02069fd4((vu16 *)0x04001020, &mtx, 0, 0, 0, 0);
            G2x_SetBGyPriority_(&reg_G2S_DB_BG2CNT, c->priority);
            G2x_BGyMosaic_(&reg_G2S_DB_BG2CNT, c->mosaic);
            G2x_SetBGyControlDCBmp_(&reg_G2S_DB_BG2CNT, (GXBGScrSizeDcBmp)c->screenSize, (GXBGAreaOver)c->areaOver, (GXBGBmpScrBase)c->screenBase);
        }
        break;
    }
}
