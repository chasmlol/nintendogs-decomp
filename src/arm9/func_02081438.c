#include "ctx.h"

extern void func_0206bbd4(void);
extern void func_0206bb08(void);
extern void func_0206bb60(u8 *dst, u32 v, u32 n);

typedef struct Obj {
    u32 w0;
    u32 flags : 4;
    u32 flags_hi : 28;
    u32 w8;
    u32 off;
    u32 size;
} Obj;

typedef struct Ent {
    Obj *obj;
    u32 w4;
    s32 res;
    u32 w12;
    u32 w16;
} Ent;

typedef struct Hdr {
    u8 pad0[0x20];
    Ent *tab;
    u8 pad24[2];
    u16 count;
} Hdr;

u32 func_02081438(Hdr *p, u32 (*cb)(u32, u32))
{
    s32 i;
    Ent *e;
    Obj *o;
    s32 res;
    s32 z;
    s32 one;
    s32 flag;
    u8 *dst;

    func_0206bbd4();
    i = 0;
    if ((s32)p->count > 0) {
        one = 1;
        z = i;
        do {
            res = z;
            e = &p->tab[i];
            o = e->obj;
            if (o->size != 0) {
                flag = (o->flags == 2) ? one : z;
                res = cb(o->size, flag);
                dst = (u8 *)e->obj + o->off;
                func_0206bb60(dst, res, o->size);
            }
            e->res = res;
            i = i + 1;
        } while (i < (s32)p->count);
    }
    func_0206bb08();
    return 1;
}
