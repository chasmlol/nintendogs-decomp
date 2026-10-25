#pragma avoid_byte strb
#include "ctx.h"

/* 2-byte coordinate passed by value */
typedef struct { u16 v; } S2;

/* NitroSDK GXOamAttr */
typedef struct {
    union {
        u32 attr01;
        struct {
            u16 attr0;
            u16 attr1;
        };
        struct {
            u32 y:8;
            u32 rsMode:2;
            u32 objMode:2;
            u32 mosaic:1;
            u32 colorMode:1;
            u32 shape:2;
            u32 x:9;
            u32 rsParam:5;
            u32 size:2;
        };
    };
    union {
        struct {
            u16 attr2;
            u16 attr3;
        };
        u32 attr23;
        struct {
            u32 charNo:10;
            u32 priority:2;
            u32 cParam:4;
            u32 _2:16;
        };
    };
} GXOamAttr;

typedef struct {
    GXOamAttr oam;
    u16 charName;
    u16 pad;
} CellOam;

typedef struct {
    u16 max;
    u16 count;
} OamBuf;

extern u8 *func_02085ca4(u32 a, u32 b);
extern s32 func_02085c30(S2 a, u32 b);
extern s32 func_02085be8(S2 a, u32 b);
extern s32 func_02085cf4(u32 a, u32 b);
extern CellOam *func_02085ccc(u32 a, u32 b);
extern void func_02006c74(OamBuf *a, GXOamAttr *b);

static inline void G2_SetOBJPriority(GXOamAttr *oam, int priority)
{
    oam->attr2 = (u16)((oam->attr2 & ~0x0c00) | (priority << 10));
}

static inline void G2_SetOBJCharName(GXOamAttr *oam, int name)
{
    oam->attr2 = (u16)((oam->attr2 & ~0x03ff) | name);
}

s32 func_0210b95c(u32 p1, OamBuf *buf, S2 px, S2 py, u32 idx, s32 charOfs, s32 prio)
{
    s32 i;
    s32 x;
    CellOam *src;
    u8 *size;
    u32 w;
    u32 h;
    s32 y;
    s32 n;
    GXOamAttr oam;

    size = func_02085ca4(p1, idx);
    w = size[0];
    h = size[1];
    if (w == 0) {
        w = 256;
    }
    x = func_02085c30(px, w);
    y = func_02085be8(py, h);
    if (x >= 256 || y >= 192 || (s32)(x + w) < 0 || (s32)(y + h) < 0) {
        return 0;
    }
    n = func_02085cf4(p1, idx);
    src = func_02085ccc(p1, idx);
    for (i = 0; i < n; i++) {
        oam = src->oam;
        G2_SetOBJCharName(&oam, src->charName + charOfs);
        G2_SetOBJPriority(&oam, prio);
        oam.x += x;
        oam.y += y;
        if (buf->count <= 120) {
            func_02006c74(buf, &oam);
        }
        src++;
    }
    return n;
}
