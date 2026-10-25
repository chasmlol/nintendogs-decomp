#include "ctx.h"
#pragma opt_propagation off

typedef struct Obj {
    u8 pad0[0x34];
    s32 state;      /* 0x34 */
    u8 pad1[0x28];
    s32 f60;        /* 0x60 */
    s32 f64;        /* 0x64 */
    s32 f68;        /* 0x68 */
    s32 f6c;        /* 0x6c */
    u8 pad2[6];
    s16 f76;        /* 0x76 */
} Obj;

typedef struct Sub {
    s32 a;
    s32 b;
    s32 w2;         /* 0x68 */
} Sub;

typedef struct A {
    u8 pad[122];
    s16 f122;       /* 0x7a */
    s16 f124;       /* 0x7c */
} A;

typedef struct B {
    s32 pad;
    s32 arr[7];
    s16 count;      /* 0x20 */
} B;

extern A *data_02159444;
extern B *data_02159468;
extern u16 data_0214efdc;

extern void func_02044ca0(s32);
extern void func_020cf998(Obj *, s32);
extern s32 func_020bcf08(s32);
extern void func_020be1d8(s32);
extern s32 func_020bc990(void);
extern void func_020cf9c8(Obj *, s32, s32, s32);
extern void func_020d1da0(Obj *);
extern void func_020d1e7c(Obj *);
extern void func_020d1cf0(Obj *);
extern void func_020d1dcc(Obj *);
extern void func_020d1988(Obj *);
extern void func_020d1b2c(Obj *);
extern s32 func_020ea828(s32);
extern s32 func_020bc14c(void);

void func_020d1524(Obj *p)
{
    Sub *s;
    s32 bVar1;
    u32 r4;
    s32 idx;
    s32 iVar2;
    int uVar4;
    s32 iVar3;

    s = (Sub *)&p->f60;
    func_02044ca0(0);
    if (((*(vu16 *)0x04000304 & 0x8000) >> 15) == 0) {
        func_020cf998(p, 3);
        return;
    }
    iVar2 = func_020bcf08(data_02159444->f124);
    if (iVar2 == 0x11 || (iVar2 = func_020bcf08(data_02159444->f124), iVar2 == 0x12)) {
        p->f6c = 0;
    }
    switch (p->state) {
    case 6:
    case 8:
    case 10:
    case 12:
    case 14:
        bVar1 = 1;
        break;
    default:
        bVar1 = 0;
    }
    if (bVar1) {
        func_020be1d8(1);
        return;
    }
    if (p->f6c == 1) {
        func_020be1d8(1);
        if (((u16)(0x2fff & data_0214efdc)) == 0) {
            return;
        }
        if (p->state != 0x11) {
            return;
        }
        p->f6c = 0;
        func_020be1d8(0);
        iVar2 = func_020bcf08(data_02159444->f124);
        if (iVar2 == 0) {
            goto yes;
        }
        if (iVar2 != 1) {
            goto no;
        }
yes:
        if (func_020bc990() != 0) {
            uVar4 = 3;
            goto call;
        }
no:
        uVar4 = 2;
call:
        func_020cf9c8(p, uVar4, -1, 0);
        return;
    }
    idx = data_02159444->f122;
    if (idx < 0) {
        goto zero;
    }
    if (data_02159468->count > idx) {
        goto body;
    }
zero:
    r4 = 0;
    goto after;
body:
    r4 = data_02159468->arr[idx];
after:
    iVar3 = data_02159444->f124;
    if (p->f76 != iVar3) {
        uVar4 = func_020bcf08(iVar3);
        switch (uVar4) {
        case 11:
            func_020d1da0(p);
            break;
        case 12:
            func_020d1e7c(p);
            break;
        case 17:
        case 18:
            func_020cf9c8(p, 2, -1, 0);
            break;
        }
    }
    iVar3 = func_020bcf08(data_02159444->f124);
    switch (iVar3) {
    case 11:
        if (func_020bc990() != 0) {
            func_020d1cf0(p);
            return;
        }
        break;
    case 12:
        if (func_020bc990() != 0) {
            func_020d1dcc(p);
            return;
        }
        break;
    case 17:
        func_020be1d8(0);
        if (0 == r4) {
            return;
        }
        r4 = func_020ea828(r4);
        if (r4 == func_020bc14c()) {
            return;
        }
        if (r4 == -1) {
            func_020cf9c8(p, 2, -1, 0);
        } else {
            func_020cf9c8(p, 4, r4, 0);
        }
        return;
    case 18:
        {
            Sub *t = (Sub *)&p->f60;
            t->w2 = 0;
        }
        p->f60 = 1200;
        break;
    }
    if (0 != s->w2) {
        func_020d1988(p);
        return;
    }
    func_020d1b2c(p);
}
