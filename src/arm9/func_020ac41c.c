#include "ctx.h"

typedef s32 fx32;
typedef s16 fx16;
typedef struct { fx32 x, y, z; } VecFx32;
typedef struct { fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22; } MtxFx33;
typedef struct { u8 x; u8 y; u16 touch; } TouchPos;
typedef struct { s16 x, y; } Pos16;

typedef struct {
    u8 pad00[0x30];
    VecFx32 pos;       /* 0x30 */
    u8 pad3c[0x30];
    s16 f6c;           /* 0x6c */
    s16 f6e;           /* 0x6e */
} Sub;

typedef struct {
    u8 pad00[0x1c];
    Sub *sub;          /* 0x1c */
    u32 flags;         /* 0x20 */
    u8 pad24[2];
    s16 state;         /* 0x26 */
    u8 pad28[6];
    s16 f2e;           /* 0x2e */
    u8 pad30[4];
    s32 f34;           /* 0x34 */
    u16 f38;           /* 0x38 */
    s16 f3a;           /* 0x3a */
    s32 f3c;           /* 0x3c */
    u16 f40;           /* 0x40 */
    s16 f42;           /* 0x42 */
    u8 pad44[0xc];
    u8 f50[0x20];      /* 0x50 */
    s32 f70;           /* 0x70 */
    s16 f74;           /* 0x74 */
    u8 pad76[0xc];
    TouchPos tp;       /* 0x82 */
    Pos16 cur;         /* 0x86 */
    Pos16 prev;        /* 0x8a */
    Pos16 prev2;       /* 0x8e */
    u8 pad92[2];
    s32 f94;           /* 0x94 */
    s32 f98;           /* 0x98 */
    VecFx32 pos;       /* 0x9c */
    VecFx32 prevPos;   /* 0xa8 */
    u16 fb4;           /* 0xb4 */
    s16 fb6;           /* 0xb6 */
    u16 fb8;           /* 0xb8 */
    u8 padba[2];
    s32 fbc;           /* 0xbc */
    s32 fc0;           /* 0xc0 */
    u16 fc4;           /* 0xc4 */
    s16 slot[3];       /* 0xc6 */
    s16 num;           /* 0xcc */
    u8 padce[2];
    VecFx32 vecs[3];   /* 0xd0 */
    VecFx32 ff4;       /* 0xf4 */
    u8 pad100[0xe];
    s16 f10e;          /* 0x10e */
    s16 f110;          /* 0x110 */
    u8 pad112[0x1e];
    s32 f130;          /* 0x130 */
    s32 f134;          /* 0x134 */
    s16 f138;          /* 0x138 */
} Obj;

typedef struct { u8 pad[0x4c]; MtxFx33 mtx; } Camera;
typedef struct { u8 pad[0xc]; fx32 f0c; } Glb28;
typedef struct { u8 pad[0x84]; u16 f84; } Glb44;
typedef struct { u16 f0; u16 f2; } Pad;
typedef struct { u8 pad[0xc]; void *f0c; } Glb7c;

extern TouchPos data_0214f004;
extern Glb44 *data_02159444;
extern Pad data_0214efdc;
extern u16 *data_0215942c;
extern Glb7c *data_02157cc4;
extern Camera data_02152cd8;
extern Glb28 *data_02159428;
extern const fx16 data_02126868[];

extern void func_020aab64(Obj *p);
extern void func_020066ac(TouchPos *tp);
extern BOOL func_020df6dc(void *o);
extern BOOL func_020df6e4(void *o);
extern void func_020ad34c(Obj *p);
extern s32 func_020bc14c(void);
extern void *func_01ffdb08(s32 i);
extern BOOL func_020219d8(void *dog);
extern void func_020b84cc(Obj *p);
extern void func_020b87d4(Obj *p);
extern void func_020b16ac(Obj *p);
extern void func_020ae6ac(Obj *p);
extern void func_020ae980(Obj *p);
extern void func_020aef88(Obj *p);
extern void func_020b2f0c(Obj *p);
extern void func_020b2d28(Obj *p);
extern void func_020b8700(Obj *p);
extern void func_020b8610(Obj *p);
extern void func_020bb5b8(Obj *p);
extern void func_020b7088(Obj *p);
extern void func_020b6f88(Obj *p);
extern void func_020b6e60(Obj *p);
extern void func_020b6db0(Obj *p);
extern void func_020b81bc(Obj *p);
extern void func_020b8040(Obj *p);
extern void func_020b9c30(Obj *p);
extern void func_020b9bb0(Obj *p);
extern void func_020b9b30(Obj *p);
extern void func_020b9740(Obj *p);
extern void func_020b9618(Obj *p);
extern void func_020b9584(Obj *p);
extern void func_020b92ac(Obj *p);
extern void func_020b91b8(Obj *p);
extern void func_020af890(Obj *p);
extern void func_020b4fdc(Obj *p);
extern void func_020b4c70(Obj *p);
extern void func_020b4f84(Obj *p);
extern void func_020bb55c(Obj *p);
extern void func_020bb4ac(Obj *p);
extern void func_020bb504(Obj *p);
extern void func_020b0df8(Obj *p);
extern void func_020b3920(Obj *p);
extern void func_020b7538(Obj *p);
extern void func_020b7318(Obj *p);
extern void func_020b3f1c(Obj *p);
extern void func_020b3da4(Obj *p);
extern void func_020b4b18(Obj *p);
extern void func_020b4a50(Obj *p);
extern void func_020b4848(Obj *p);
extern void func_020b47b4(Obj *p);
extern void func_020b78a4(Obj *p);
extern void func_020ad234(Obj *p);
extern fx32 func_01ff8958(fx32 a, fx32 b);
extern void func_01ff832c(fx32 s, const VecFx32 *a, const VecFx32 *b, VecFx32 *out);
extern void func_020bc024(VecFx32 *v);
extern u16 func_02068078(fx32 y, fx32 x);
extern void func_020ab02c(Obj *p, VecFx32 *out, const VecFx32 *in);
extern void func_0200b644(VecFx32 *out, const VecFx32 *a, const VecFx32 *b, const VecFx32 *c, const VecFx32 *d);
extern fx32 func_02027538(void *dog);
extern void func_02067e34(const VecFx32 *a, const VecFx32 *b, VecFx32 *out);
extern void func_020e9ca0(void *a, VecFx32 *b, s32 c, s32 d, s32 e);

#define FX_MUL(a, b) ((fx32)(((s64)(a) * (b) + 0x800) >> 12))
#define FXU(a, b) ((u32)(((s64)(s32)(a) * (s64)(s32)(b) + 0x800) >> 12))

static inline fx16 FX_SinIdx(int idx) { return data_02126868[(idx >> 4) << 1]; }
static inline fx16 FX_CosIdx(int idx) { return data_02126868[((idx >> 4) << 1) + 1]; }

void func_020ac41c(Obj *p)
{
    Pos16 *cur;
    s32 r;
    u32 k;
    u32 t;
    void *obj;
    s16 i;
    VecFx32 vA;
    VecFx32 vB;
    VecFx32 vC;
    VecFx32 vD;
    VecFx32 vE;
    VecFx32 v40;
    VecFx32 vG;
    VecFx32 vH;
    VecFx32 v64;
    VecFx32 vI;
    VecFx32 vJ;
    VecFx32 vK;
    VecFx32 a;
    VecFx32 b;
    void *dogs[3];
    VecFx32 buf;
    Sub *sub;

    sub = p->sub;
    cur = &p->cur;
    func_020aab64(p);
    p->f70 = 1;
    if (p->flags & 1) {
        p->tp = data_0214f004;
    } else {
        func_020066ac(&p->tp);
    }
    {
        u16 *pf = &p->fb4;
        *pf = *pf & ~2;
        if (p->fb6 != -1) {
            *pf = *pf & ~1;
        }
    }
    p->fb6 = -1;
    if (data_02159444->f84 & 2) {
        s32 bA = p->tp.x;
        s32 bB = p->tp.y;
        s16 sA = bA;
        s16 sB = bB;
        cur->x = sA - 127;
        cur->y = 95 - sB;
        p->prev = *cur;
        p->prev2 = *cur;
        p->f94 = 0;
        p->f98 = 0;
        p->fb4 = p->fb4 | 1;
        p->fb8 = 120;
        p->fbc = 0;
        p->fc0 = 0;
    } else if (data_02159444->f84 & 1) {
        p->prev2 = p->prev;
        p->prev = p->cur;
        k = 0xb36;
        {
            s32 bA = p->tp.x;
            s32 bB = p->tp.y;
            s16 sA = bA;
            s16 sB = bB;
            cur->x = sA - 127;
            cur->y = 95 - sB;
        }
        p->fb8 = 120;
        p->fbc = 0;
        p->fc0 = 0;
        p->f94 = FXU((s32)p->cur.x - (s32)p->prev2.x, k);
        p->f98 = FXU((s32)p->cur.y - (s32)p->prev2.y, k);
    } else {
        if (p->fb8 != 0) {
            p->fb8 = p->fb8 - 1;
        }
        if ((u16)(data_0214efdc.f2 & 0xcf3) == 0 && p->f34 < 0 &&
            (s32)(*(vu16 *)0x04000304 & 0x8000) >> 15 == 0) {
            if (p->fbc < 3600) {
                p->fbc = p->fbc + 1;
            }
        } else {
            p->fbc = 0;
        }
        if (*data_0215942c == 0) {
            if ((u16)(data_0214efdc.f2 & 0xcf3) == 0) {
                if (p->fc0 < 10800) {
                    p->fc0 = p->fc0 + 1;
                }
            } else {
                p->fc0 = 0;
            }
        }
    }
    obj = data_02157cc4->f0c;
    p->fc4 = 0;
    if (func_020df6dc(obj)) {
        p->fc4 = p->fc4 | 1;
    }
    if (func_020df6e4(obj)) {
        p->fc4 = p->fc4 | 2;
    }
    if ((p->flags & 2) && p->f2e == 1) {
        p->f34 = -1;
        r = p->f3c;
        if (r != -1) {
            u8 ok = 0;
            if (r == -4) {
                if (func_020219d8(func_01ffdb08(func_020bc14c()))) {
                    ok = 1;
                    p->f34 = p->f3c;
                    p->f3a = p->f42;
                    p->f38 = p->f40;
                }
            } else {
                p->f34 = r;
                ok = 1;
                p->f3a = p->f42;
                p->f38 = p->f40;
            }
            if (ok) {
                p->f3c = -1;
                p->f42 = 0;
                p->f40 = 0;
            }
        } else {
            func_020ad34c(p);
        }
    }
    if (p->f130 >= 0) {
        p->f130 = p->f130 - 1;
        if (p->f130 == 0) {
            p->f130 = -3;
            p->f138 = 2;
        }
    }
    if (p->f134 >= 0) {
        p->f134 = p->f134 - 1;
        if (p->f134 == 0) {
            p->f134 = -3;
        }
    }
    if (p->f74 > 0) {
        p->f74 = p->f74 - 1;
    }
    switch (p->state) {
    case 1:
        func_020b84cc(p);
        break;
    case 2:
        func_020b87d4(p);
        break;
    case 4:
        func_020ae6ac(p);
        break;
    case 5:
        func_020ae980(p);
        break;
    case 6:
        func_020aef88(p);
        break;
    case 11:
        func_020bb5b8(p);
        break;
    case 12:
        func_020b7088(p);
        break;
    case 13:
        func_020b6f88(p);
        break;
    case 14:
        func_020b6e60(p);
        break;
    case 15:
        func_020b6db0(p);
        break;
    case 7:
        func_020b2f0c(p);
        break;
    case 8:
        func_020b2d28(p);
        break;
    case 9:
        func_020b8700(p);
        break;
    case 10:
        func_020b8610(p);
        break;
    case 16:
        func_020b81bc(p);
        break;
    case 17:
        func_020b8040(p);
        break;
    case 18:
        func_020b9c30(p);
        break;
    case 19:
        func_020b9bb0(p);
        break;
    case 20:
        func_020b9b30(p);
        break;
    case 21:
        func_020b9740(p);
        break;
    case 22:
        func_020b9618(p);
        break;
    case 23:
        func_020b9584(p);
        break;
    case 24:
        func_020b92ac(p);
        break;
    case 25:
        func_020b91b8(p);
        break;
    case 26:
        func_020af890(p);
        break;
    case 27:
        func_020b4fdc(p);
        break;
    case 28:
        func_020b4c70(p);
        break;
    case 29:
        func_020b4f84(p);
        break;
    case 30:
        func_020bb55c(p);
        break;
    case 31:
        func_020bb4ac(p);
        break;
    case 32:
        func_020bb504(p);
        break;
    case 33:
        func_020b0df8(p);
        break;
    case 3:
        func_020b16ac(p);
        break;
    case 34:
        func_020b3920(p);
        break;
    case 38:
        func_020b3f1c(p);
        break;
    case 39:
        func_020b3da4(p);
        break;
    case 40:
        func_020b4b18(p);
        break;
    case 41:
        func_020b4a50(p);
        break;
    case 42:
        func_020b4848(p);
        break;
    case 43:
        func_020b47b4(p);
        break;
    case 44:
        func_020b78a4(p);
        break;
    case 35:
        func_020b7538(p);
        break;
    case 36:
        func_020b7318(p);
        break;
    case 0:
    case 37:
    case 45:
        break;
    }
    if (p->flags & 8) {
        func_020ad234(p);
    }
    if (p->f70 != 0) {
        vA.x = data_02152cd8.mtx._00;
        vA.y = data_02152cd8.mtx._10;
        vA.z = data_02152cd8.mtx._20;
        vB.x = data_02152cd8.mtx._01;
        vB.y = data_02152cd8.mtx._11;
        vB.z = data_02152cd8.mtx._21;
        vC.x = data_02152cd8.mtx._02;
        vC.y = data_02152cd8.mtx._12;
        vC.z = data_02152cd8.mtx._22;
        p->prevPos = p->pos;
        t = func_01ff8958(sub->f6c, sub->f6e);
        {
            u32 uT = FXU(0x6018, t);
            t = FXU(uT, 0x2b);
        }
        func_01ff832c(-0x6018, &vC, &p->sub->pos, &p->pos);
        vE = p->pos;
        vD = vE;
        func_01ff832c((s32)t * cur->x, &vA, &p->pos, &p->pos);
        func_01ff832c((s32)t * cur->y, &vB, &p->pos, &p->pos);
        func_020bc024(&vK);
        if (p->num != -1) {
            u16 ang;
            fx32 d;
            ang = func_02068078(-vK.x, -vK.z);
            a.x = FX_SinIdx(ang);
            a.y = 0;
            a.z = FX_CosIdx(ang);
            b.x = -a.z;
            b.y = 0;
            b.z = a.x;
            d = 0x2008 - data_02159428->f0c;
            v64.x = FX_MUL(a.x, d);
            v64.y = FX_MUL(a.y, d);
            v64.z = FX_MUL(a.z, d);
            func_020ab02c(p, &v40, &v64);
            func_01ff832c((s32)t * -127, &b, &vD, &vD);
            func_01ff832c((s32)t * 128, &b, &vE, &vE);
            func_0200b644(&vG, &vK, &vD, &v64, &a);
            func_0200b644(&vH, &vK, &vE, &v64, &a);
            for (i = 0; i < 3; i++) {
                p->vecs[i] = v40;
            }
            for (i = 0; i < 3; i++) {
                if (p->slot[i] != -1) {
                    dogs[p->slot[i]] = func_01ffdb08(i);
                }
            }
            switch (p->num) {
            case 1:
                func_01ff832c(-func_02027538(dogs[0]), &b, &v40, &p->vecs[0]);
                func_01ff832c(func_02027538(dogs[1]), &b, &v40, &p->vecs[1]);
                break;
            case 2:
                func_01ff832c(-(func_02027538(dogs[0]) + func_02027538(dogs[1])), &b, &v40, &p->vecs[0]);
                func_01ff832c(func_02027538(dogs[2]) + func_02027538(dogs[1]), &b, &v40, &p->vecs[2]);
                break;
            }
            func_01ff832c(-func_02027538(dogs[0]), &b, &p->vecs[0], &vI);
            func_01ff832c(func_02027538(dogs[p->num]), &b, &p->vecs[p->num], &vJ);
            vI.x -= vG.x;
            vI.z -= vG.z;
            vJ.x -= vH.x;
            vJ.z -= vH.z;
            if (FX_MUL(vI.x, b.x) + FX_MUL(vI.z, b.z) < 0) {
                for (i = 0; i <= p->num; i++) {
                    p->vecs[i].x -= vI.x;
                    p->vecs[i].z -= vI.z;
                }
            }
            i = 0;
            if (FX_MUL(vJ.x, b.x) + FX_MUL(vJ.z, b.z) > 0) {
                for (; i <= p->num; i++) {
                    p->vecs[i].x -= vJ.x;
                    p->vecs[i].z -= vJ.z;
                }
            }
        }
        if (p->fb8 != 0) {
            p->ff4 = v40;
        } else {
            p->ff4 = p->sub->pos;
        }
    }
    func_02067e34(&p->pos, &p->prevPos, &buf);
    func_020e9ca0(p->f50, &buf, 0, p->f34 != -1, 0);
    p->f10e = -1;
    p->f110 = -1;
}
