#include "ctx.h"

extern u8 *data_ov011_0215d324;
extern void func_0208e398(u8 *a);
extern void func_0208f3fc(u8 *a);
extern u8 *func_0208c230(u8 *a, s32 b);
extern u64 func_0208f43c(u8 *a, s32 b);
extern u8 *func_0208bcbc(u8 *a, u32 b);
extern void func_0208cfe8(u8 *a);
extern void func_0208f380(void);
extern void func_0208e1e8(u16 *a);
extern u8 *func_0208e150(u8 *a, u16 *b);
extern u8 *func_0208f668(u8 *a, s32 b);
extern u8 *func_0208fb00(u8 *a, s32 b, u8 *c);
extern void func_0208f588(u8 *a, u8 *b);
extern void func_0208d038(u8 *a, u8 *b);
extern void func_0208cf88(u8 *a, u32 b, s32 c);
extern void func_0209c598(u8 *a, s32 b, u32 c, s32 d);
extern void func_0209b934(u8 *a);
extern void func_0209c17c(u8 *a, s32 b, u8 *c);
extern void func_ov011_0215d174(void);
extern void func_ov011_0215c9fc(void);

u8 *func_ov011_0215c82c(u8 *p1)
{
    struct { u16 l[2]; void *f1; void *f2; } st;
    u8 *r4v;
    u8 *p5v;
    u8 *p4v;
    u8 *r6v;
    u8 *q;
    u32 u8v;
    s32 i;

    func_0208e398(p1);
    func_0208f3fc(*(u8 **)(data_ov011_0215d324 + 4) + 152);
    {
        u64 t = func_0208f43c(p1, (s32)func_0208c230(p1, 0));
        p4v = (u8 *)(u32)t;
        p5v = (u8 *)(u32)func_0208f43c(p1, (s32)func_0208bcbc(p1, (u32)(t >> 32)));
    }
    func_0208cfe8(*(u8 **)(data_ov011_0215d324 + 4));
    func_0208f380();
    func_0208e1e8(st.l);
    st.f1 = (void *)func_ov011_0215d174;
    st.l[0] = 3;
    st.f2 = (void *)func_ov011_0215c9fc;
    r4v = func_0208e150(p1, st.l);
    r6v = func_0208f668(r4v, 0);
    {
        u8 *r7v = func_0208fb00(p1, 0x88, p4v);
        func_0208f588(r6v, r7v);
    }
    {
        u8 *r7v = func_0208fb00(p1, 0x88, p5v);
        *(u32 *)(r7v + 0x24) = 0xaaa;
        *(u32 *)(r7v + 0x28) = 0xaaa;
        *(u32 *)(r7v + 0x2c) = 0xaaa;
        func_0208f588(r6v, r7v);
    }
    func_0208d038(*(u8 **)(data_ov011_0215d324 + 4), r4v);
    func_0208cf88(*(u8 **)(data_ov011_0215d324 + 4), *(u16 *)(data_ov011_0215d324 + 8), 0);
    i = 0;
    q = data_ov011_0215d324 + 0x87c;
    u8v = *(u16 *)(data_ov011_0215d324 + 0x864);
    for (; i < 3; i++) {
        u32 uv = u8v;
        s32 v = *(s16 *)(data_ov011_0215d324 + 0x866);
        if (v < 3 && i != v) {
            uv = 0;
        }
        func_0209c598(q, i, uv, 0);
    }
    func_0209b934(data_ov011_0215d324 + 0x87c);
    {
        u8 *bb = data_ov011_0215d324;
        func_0209c17c(bb + 0x87c, 0, bb + 8);
    }
    return r4v;
}
