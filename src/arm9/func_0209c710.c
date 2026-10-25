#include "ctx.h"

typedef struct Handle {
    void *obj;
} Handle;

typedef struct Mgr {
    s32 count;      /* 0x00 */
    u16 f4;         /* 0x04 */
    u16 f6;         /* 0x06 */
    u8 pad8[0x10];  /* 0x08 */
    Handle h[3];    /* 0x18 */
    u16 f24;        /* 0x24 */
    u16 f26;        /* 0x26 */
} Mgr;

typedef struct G74 {
    u8 pad[0x2c];
    s32 f2c;
} G74;

typedef struct G198 {
    u8 pad[0x40];
    s32 f40;
} G198;

typedef struct G148 {
    s16 f0;     /* 0x00 */
    s16 f2;
    s16 f4;
    s16 f6;     /* 0x06 */
    u8 pad8[8];
    u32 f10;    /* 0x10 */
    u8 pad14[0x10];
    u32 f24;    /* 0x24 */
    u32 f28;    /* 0x28 */
    u32 f2c;    /* 0x2c */
} G148;

extern void func_02070c18(Handle *h, s32 a);
extern void func_0209ed20(s32 a);
extern void func_020a31a8(void);
extern void func_0209aa84(void);
extern void func_0209f968(s32 a, s32 b);
extern void func_020a2bec(void);
extern void func_0209b7e4(Mgr *m);
extern G74 data_02159074;
extern G198 data_02159198;
extern G148 data_02159148;

void func_0209c710(Mgr *m)
{
    G148 *g = &data_02159148;
    s16 i;

    for (i = 0; i < m->count; i++) {
        u16 bit = (u16)(1 << i);
        Handle *h = &m->h[i];
        if (h != NULL) {
            func_02070c18(h, 0);
            m->f6 &= ~bit;
            m->f4 &= ~bit;
            m->f26 &= ~bit;
        }
    }
    func_0209ed20(0);
    func_020a31a8();
    if (data_02159074.f2c != 0) {
        func_0209aa84();
    } else if (data_02159198.f40 == 0) {
        g->f0 = -1;
    } else {
        func_0209f968(65, 90);
    }
    g->f10 = 0;
    g->f24 = 0;
    g->f28 = 0;
    g->f2c = 0;
    data_02159148.f6 = -1;
    func_020a2bec();
    func_0209b7e4(m);
}
