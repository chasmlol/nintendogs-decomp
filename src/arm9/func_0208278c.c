#include "ctx.h"

typedef s32 fx32;
#define FX32_SHIFT 12

typedef enum {
    GX_TEXFMT_NONE = 0, GX_TEXFMT_A3I5 = 1, GX_TEXFMT_PLTT4 = 2, GX_TEXFMT_PLTT16 = 3,
    GX_TEXFMT_PLTT256 = 4, GX_TEXFMT_COMP4x4 = 5, GX_TEXFMT_A5I3 = 6, GX_TEXFMT_DIRECT = 7
} GXTexFmt;
typedef enum { GX_TEXGEN_NONE = 0, GX_TEXGEN_TEXCOORD = 1, GX_TEXGEN_NORMAL = 2, GX_TEXGEN_VERTEX = 3 } GXTexGen;
typedef enum { GX_TEXSIZE_S8 = 0 } GXTexSizeS;
typedef enum { GX_TEXSIZE_T8 = 0 } GXTexSizeT;
typedef enum { GX_TEXREPEAT_NONE = 0 } GXTexRepeat;
typedef enum { GX_TEXFLIP_NONE = 0 } GXTexFlip;
typedef enum { GX_TEXPLTTCOLOR0_USE = 0, GX_TEXPLTTCOLOR0_TRNS = 1 } GXTexPlttColor0;
typedef enum {
    GX_MTXMODE_PROJECTION = 0, GX_MTXMODE_POSITION = 1, GX_MTXMODE_POSITION_VECTOR = 2, GX_MTXMODE_TEXTURE = 3
} GXMtxMode;

/* texture attributes packed in one word */
typedef struct {
    u32 fmt : 4;
    u32 sizeS : 4;
    u32 sizeT : 4;
    u32 repeat : 2;
    u32 flip : 2;
    u32 pltt0 : 1;
    u32 pad : 15;
} TexAttr;

typedef struct {
    u32 pad0;
    u32 vramAddr;
    u32 plttAddr;
    TexAttr attr;
    u16 width;
    u16 height;
} TexInfo;

#define reg_G3_MTX_MODE        (*(vu32 *)0x04000440)
#define reg_G3_MTX_IDENTITY    (*(vu32 *)0x04000454)
#define reg_G3_MTX_SCALE       (*(vu32 *)0x0400046c)
#define reg_G3_TEXIMAGE_PARAM  (*(vu32 *)0x040004a8)
#define reg_G3_TEXPLTT_BASE    (*(vu32 *)0x040004ac)

#define GX_PACK_TEXIMAGE_PARAM(texFmt, texGen, s, t, repeat, flip, pltt0, addr) \
    ((u32)((addr) >> 3) |              \
     ((texFmt) << 26) |                \
     ((texGen) << 30) |                \
     ((s) << 20) |                     \
     ((t) << 23) |                     \
     ((repeat) << 16) |                \
     ((flip) << 18) |                  \
     ((pltt0) << 29))

#define GX_PACK_TEXPLTTBASE_PARAM(addr, texFmt) ((u32)((addr) >> (4 - ((texFmt) == GX_TEXFMT_PLTT4))))

static inline void G3_TexImageParam(GXTexFmt texFmt, GXTexGen texGen, GXTexSizeS s, GXTexSizeT t,
                                    GXTexRepeat repeat, GXTexFlip flip, GXTexPlttColor0 pltt0, u32 addr)
{
    reg_G3_TEXIMAGE_PARAM = GX_PACK_TEXIMAGE_PARAM(texFmt, texGen, s, t, repeat, flip, pltt0, addr);
}

static inline void G3_TexPlttBase(u32 addr, GXTexFmt texfmt)
{
    reg_G3_TEXPLTT_BASE = GX_PACK_TEXPLTTBASE_PARAM(addr, texfmt);
}

static inline void G3_MtxMode(GXMtxMode mode)
{
    reg_G3_MTX_MODE = (u32)mode;
}

static inline void G3_Identity(void)
{
    reg_G3_MTX_IDENTITY = 0;
}

static inline void G3_Scale(fx32 x, fx32 y, fx32 z)
{
    reg_G3_MTX_SCALE = (u32)x;
    reg_G3_MTX_SCALE = (u32)y;
    reg_G3_MTX_SCALE = (u32)z;
}

void func_0208278c(const TexInfo *tex)
{
    TexAttr attr = tex->attr;

    G3_TexImageParam((GXTexFmt)attr.fmt, GX_TEXGEN_TEXCOORD, (GXTexSizeS)attr.sizeS, (GXTexSizeT)attr.sizeT,
                     (GXTexRepeat)attr.repeat, (GXTexFlip)attr.flip, (GXTexPlttColor0)attr.pltt0, tex->vramAddr);
    G3_TexPlttBase(tex->plttAddr, (GXTexFmt)attr.fmt);
    G3_MtxMode(GX_MTXMODE_TEXTURE);
    G3_Identity();
    G3_Scale(tex->width << FX32_SHIFT, tex->height << FX32_SHIFT, 0);
    G3_MtxMode(GX_MTXMODE_POSITION);
}
