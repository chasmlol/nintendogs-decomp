#include "ctx.h"

typedef struct {
    u16 *buf;           /* 0x00 */
    u8 pad[0xc];
    u32 size;           /* 0x10 */
} Plane;

typedef struct {
    u16 screenWidth;
    u16 screenHeight;
    u16 colorMode;
    u16 screenFormat;
    u32 szByte;         /* 0x08 */
    u32 rawData[1];     /* 0x0c */
} NNSG2dScreenData;

typedef struct {
    u32 fmt;
    BOOL bExtendedPlt;
    u32 szByte;
    void *pRawData;     /* 0x0c */
} NNSG2dPaletteData;

#define ScrData NNSG2dScreenData
#define PlttData NNSG2dPaletteData
typedef struct {
    u32 x00;
    ScrData *scr[5];    /* 0x04 */
    PlttData *pltt;     /* 0x18 */
    u16 colors[32];     /* 0x1c */
    Plane *plane;       /* 0x5c */
    Plane *planes[2];   /* 0x60 */
    Plane *plane2;      /* 0x68 */
    u16 h6c[7];         /* 0x6c */
    u16 h7a;            /* 0x7a */
    s32 w7c;            /* 0x7c */
    s32 w80;            /* 0x80 */
    s32 w84;
    s32 w88;
    s32 w8c;
    u16 h90;
    u16 h92;
    s16 h94;
    s16 h96;
    u16 h98;
    s16 h9a;
    s16 h9c;
    u16 h9e;
    s32 wa0;
    s32 wa4;
    s32 wa8;
    s32 wac;
} Scene;

extern u32 data_021419b8;
extern u32 data_021419bc;
extern char data_02141a68[];
extern char data_02141a84[];
extern char data_02141a8c[];
extern char data_02141aa4[];
extern char data_02141aac[];
extern char *data_021419d4[];
extern u8 data_0212f704[];
extern Scene *data_02159060;

extern void *func_020038b8(void *heap, u32 size);
extern void func_0208c720(void *heap, u32 a, u32 b);
extern int func_0205f050(char *buf, u32 n, const char *fmt, ...);
extern void *func_0207df48(const char *path);
extern void func_02073768(void *res, Scene *s);
extern PlttData *func_02006b78(void *res);
extern void func_0206c7d4(const void *src, void *dst, u32 size);
extern void func_02073828(void *res, ScrData **out);
extern Plane *func_020073f4(void *heap, u32 w, u32 h, u32 c);
extern void func_0206c7bc(u16 data, void *dest, u32 size);

static inline void MI_CpuFill16(void *dest, u16 data, u32 size)
{
    func_0206c7bc(*(u16 *)&data, dest, size);
}

static inline void MI_CpuCopy16(const void *src, void *dest, u32 size)
{
    func_0206c7d4(src, dest, size);
}

static inline void FillPlane(Plane *p, u16 data)
{
    func_0206c7bc(*(u16 *)&data, p->buf, p->size);
}

void func_020995d4(void *heap)
{
    char path1[64];
    char path2[64];
    char path3[64];
    Scene *s;
    void *res1;
    void *res2;
    s16 i;

    s = func_020038b8(heap, sizeof(Scene));
    func_0208c720(heap, data_021419b8, data_021419bc);
    func_0205f050(path1, 64, data_02141a84, data_021419b8, data_02141a68);
    res1 = func_0207df48(path1);
    func_0205f050(path2, 64, data_02141aa4, data_021419b8, data_02141a8c);
    res2 = func_0207df48(path2);
    func_02073768(res1, s);
    s->pltt = func_02006b78(res2);
    MI_CpuCopy16((u8 *)s->pltt->pRawData + 0x1c0, s->colors, 64);

    for (i = 0; i < 5; i++) {
        func_0205f050(path3, 64, data_02141aac, data_021419b8, data_021419d4[i]);
        func_02073828(func_0207df48(path3), &s->scr[i]);
        if (i == 4) {
            NNSG2dScreenData *scr = s->scr[i];
            u32 k;
            for (k = 0; k < scr->szByte / 2; k++) {
                ((u16 *)scr->rawData)[k] += 192;
            }
        }
    }

    {
        u16 *dst = (u16 *)s->scr[0]->rawData;
        s32 col;
        u16 v = 0;
        s32 row;
        for (row = 0; row < 10; row++) {
            for (col = 0; col < 18; col++) {
                *(dst + (row + 5) * 32 + col + 7) = v | 0xe000;
                v++;
            }
        }
    }

    {
        Plane *p = func_020073f4(heap, 18, 10, 0);
        FillPlane(p, 0xffff);
        s->plane = p;
    }
    {
    s16 j;
    for (j = 0; j < 2; j++) {
        u8 c = data_0212f704[j];
        Plane *p = func_020073f4(heap, 8, 2, 0);
        FillPlane(p, (u16)((c << 12) | (c << 8) | (c << 4) | c));
        s->planes[j] = p;
    }
    }
    {
        Plane *p = func_020073f4(heap, 16, 2, 0);
        FillPlane(p, (u16)((data_0212f704[0] << 12) | (data_0212f704[0] << 8) | (data_0212f704[0] << 4) | data_0212f704[0]));
        s->plane2 = p;
    }

    s->h6c[0] = 0;
    s->h6c[1] = 0;
    s->h6c[2] = 0;
    s->h6c[3] = 0;
    s->h6c[4] = 0;
    s->h6c[5] = 0;
    s->h6c[6] = 0;
    s->h7a = 0xffff;
    s->w7c = -1;
    s->w80 = -1;
    s->w84 = 0;
    s->w88 = 0;
    s->w8c = 0;
    s->h90 = 0;
    s->h92 = 0;
    s->h94 = -1;
    s->h96 = -1;
    s->h98 = 0;
    s->h9a = -1;
    s->h9c = -1;
    s->wa0 = 0;
    s->wa4 = 0;
    s->wa8 = 0;
    s->wac = 0;
    data_02159060 = s;
}
