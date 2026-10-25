#include "ctx.h"

typedef struct {
    s16 v : 12;
    u16 a : 2;
    u16 b : 2;
} TPos;

typedef struct {
    TPos x;
    TPos y;
    s8 c4;
    s8 c5;
    u8 c6;
} LItem;

typedef struct {
    s16 f0;
    u8 pad2[10];
    s32 fc;
    u8 pad10[0x24];
    u8 buf[0xc168 - 0x34];
    u32 layout;
} Work;

typedef struct {
    void *buf;
    s32 w4;
    s32 w8;
    void *font;
} TextCtx;

typedef struct {
    s16 h[4];
    s32 w[3];
} DrawRes;

extern Work *data_ov001_0215e260;
extern TextCtx data_ov001_0215e0b8;
extern void *data_02159058;
extern u8 *data_02159030;
extern u8 data_ov001_0215dfbc[];

extern void func_0206c7bc(u16 data, void *dest, u32 size);
extern LItem *func_02085c78(u32 layout, s32 idx);
extern u16 *func_02090cac(u32 a, s32 id, s32 c);
extern void func_0208fd90(DrawRes *cv, void *font, TextCtx *tc, TPos x, TPos y, s32 c4, s32 c5, u16 *str, u32 c6, s32 z);
extern void func_0208fd1c(DrawRes *cv, void *font, TextCtx *tc, TPos x, TPos y, s32 c4, s32 c5, u16 *str, u32 c6, s32 z, s32 k);
extern void func_020fc310(u32 n, u16 *buf);
extern s32 func_020905d8(void *font, u16 *str, s32 sp);
extern void func_0207c910(s32 a, s32 b, void *c, s32 d);

static inline void MI_CpuFill16(void *dest, u16 data, u32 size)
{
    func_0206c7bc(*(u16 *)&data, dest, size);
}

static inline void MI_CpuClear16(void *dest, u32 size)
{
    MI_CpuFill16(dest, 0, size);
}

void func_ov001_0215d808(void)
{
    TPos x;
    TPos y;
    DrawRes cv;
    TextCtx tc;
    u16 nums[8];
    LItem *item;
    u16 *str;
    void *font;
    s32 w;

    tc = data_ov001_0215e0b8;
    tc.buf = data_ov001_0215e260->buf;
    tc.font = data_02159058;
    MI_CpuClear16(data_ov001_0215e260->buf, 0x6000);

    item = func_02085c78(data_ov001_0215e260->layout, 0);
    x.v = item->x.v;
    x.a = item->x.a;
    x.b = item->x.b;
    y.v = item->y.v;
    y.a = item->y.a;
    y.b = item->y.b;
    font = data_02159058;
    str = func_02090cac(*(u32 *)(data_02159030 + 0x2c),
                        data_ov001_0215e260->f0 * 100 + 11000 + data_ov001_0215e260->fc * 5, 0);
    func_0208fd90(&cv, font, &tc, x, y, item->c4, item->c5, str, item->c6, 0);
    func_020fc310(data_ov001_0215dfbc[data_ov001_0215e260->f0], nums);
    func_020fc310(data_ov001_0215e260->fc + 1, nums + 3);

    item = func_02085c78(data_ov001_0215e260->layout, 1);
    x.v = item->x.v;
    x.a = item->x.a;
    x.b = item->x.b;
    y.v = item->y.v;
    y.a = item->y.a;
    y.b = item->y.b;
    func_0208fd1c(&cv, data_02159058, &tc, x, y, item->c4, item->c5, nums, item->c6, 0, 6);

    item = func_02085c78(data_ov001_0215e260->layout, 2);
    x.v = item->x.v;
    x.a = item->x.a;
    x.b = item->x.b;
    y.v = item->y.v;
    y.a = item->y.a;
    y.b = item->y.b;
    func_0208fd1c(&cv, data_02159058, &tc, x, y, item->c4, item->c5, nums + 3, item->c6, 0, 6);

    item = func_02085c78(data_ov001_0215e260->layout, 3);
    x.v = item->x.v;
    x.a = item->x.a;
    x.b = item->x.b;
    y.v = item->y.v;
    y.a = item->y.a;
    y.b = item->y.b;
    y.a = 0;
    y.b = 0;
    str = func_02090cac(*(u32 *)(data_02159030 + 0x2c),
                        data_ov001_0215e260->f0 * 100 + 11000 + data_ov001_0215e260->fc * 5, 1);
    w = func_020905d8(data_02159058, str, item->c5);
    y.v -= w / 2;
    func_0208fd90(&cv, data_02159058, &tc, x, y, item->c4, item->c5, str, 1, 0);

    func_0207c910(22, 0, data_ov001_0215e260->buf, 0x6000);
}
