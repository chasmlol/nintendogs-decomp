#pragma opt_common_subs off
#include "ctx.h"

typedef struct { u32 w[3]; } T3;
typedef struct { u32 w[12]; } T12;

typedef struct Ent {
    u8 pad0[0x24];
    T3 f24;
    T3 f30;
    T12 f3c;
    u8 pad1[0x88 - 0x6c];
} Ent;

typedef struct Child {
    u16 h;
    u8 pad0[0x52];
    Ent *a;
    Ent *kid[2];
} Child;

typedef struct Rec {
    u8 pad0[4];
    u16 n4;
    u8 pad1[2];
    T3 w8;
    T3 w14;
} Rec;

typedef struct Obj {
    u8 pad0[0x1c];
    s32 flag;
    Rec *rec;
    u8 pad1[4];
    void (*cb)(void);
    Child *c;
} Obj;

extern void func_ov006_021646a4(Obj *o);
extern void func_ov006_02162ef4(Obj *o, s32 i);
extern void func_ov006_0216299c(void);
extern void *func_020038b8(u8 *heap, u32 size);
extern void func_0205f050(u8 *buf, u32 n, u8 *p, u32 v);
extern u32 func_0207df48(u8 *buf);
extern Ent *func_0208f43c(u8 *heap, u32 v);
extern Ent *func_0208fb00(u8 *heap, u32 size, Ent *p);
extern void func_0208f7e4(Ent *p, u32 v);
extern void func_0208f820(Ent *p, u32 v);
extern void func_0208f7d0(Ent *p, u32 v);
extern void func_0208f588(u8 *v, Ent *p);
extern void func_01ff8020(u8 *p, s32 a, s32 b);

extern u32 data_ov006_02165e4c;
extern u8 data_ov006_02165e50[];
extern u8 data_ov006_02165e68[];
extern s16 data_02126868[];
extern u8 *data_ov006_021661c0;

void func_ov006_02163008(Obj *o, u8 *heap, Rec *rec)
{
    u8 buf[64];
    s32 i;
    Child *c;
    Ent *puVar3;
    Ent *puVar4;
    s32 iv;

    func_ov006_021646a4(o);
    o->cb = func_ov006_0216299c;
    o->flag = 1;
    o->rec = rec;
    o->c = func_020038b8(heap, 0x60);
    c = o->c;
    if (c == 0) {
        return;
    }
    func_0205f050(buf, 64, data_ov006_02165e50, data_ov006_02165e4c);
    puVar3 = func_0208f43c(heap, func_0207df48(buf));
    func_0205f050(buf, 64, data_ov006_02165e68, data_ov006_02165e4c);
    puVar4 = func_0208f43c(heap, func_0207df48(buf));
    c->h = rec->n4;
    c->a = func_0208fb00(heap, 0x88, puVar3);
    func_0208f7e4(c->a, 0x39ce);
    func_0208f820(c->a, 0x7fff);
    func_0208f7d0(c->a, 3);
    c->a->f30 = rec->w8;
    c->a->f24 = rec->w14;
    iv = rec->n4 >> 4;
    func_01ff8020((u8 *)c->a + 0x3c, data_02126868[iv * 2], data_02126868[iv * 2 + 1]);
    func_0208f588(data_ov006_021661c0 + 4, c->a);
    for (i = 0; i < 2; i++) {
        c->kid[i] = func_0208fb00(heap, 0x88, puVar4);
        func_0208f7e4(c->kid[i], 0x39ce);
        func_0208f820(c->kid[i], 0x7fff);
        func_0208f7d0(c->kid[i], 3);
        func_0208f588(data_ov006_021661c0 + 4, c->kid[i]);
        c->kid[i]->f24 = rec->w14;
        c->kid[i]->f3c = c->a->f3c;
        func_ov006_02162ef4(o, i);
    }
}
