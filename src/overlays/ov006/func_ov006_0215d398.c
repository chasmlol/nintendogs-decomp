#pragma avoid_byte strb
#include "ctx.h"

typedef s32 fx32;
typedef struct { fx32 x, y, z; } VecFx32;

typedef struct {
    s16 start;
    s16 count;
    u8 pad04[0x24 - 0x04];
} Ent;

typedef struct {
    VecFx32 pos;
    u8 pad0c[0x44 - 0x0c];
} Pt;

typedef struct {
    u8 pad00[0x22];
    s16 num;
} Cnt;

typedef struct {
    u8 pad00[0x18];
    Ent *ents;
    Pt *pts;
    Cnt *cnt;
} Course;

typedef struct {
    VecFx32 pos;
    VecFx32 v2;
} Cam;

typedef struct {
    u32 seed;
    u8 pad04[0x2c - 0x04];
    s16 f2c;
    u16 f2e;
    u8 pad30[0x74 - 0x30];
    Cam cam;
} Game;

typedef struct {
    u8 pad00[0x84];
    u16 flags;
} Sys;

typedef struct {
    u8 pad00[0x2c];
    s32 id;
    s32 f30;
    s32 dir;
} Obj;

typedef struct {
    u8 pad00[4];
    u16 ang;
    u16 pad06;
    VecFx32 pos;
    u8 pad14[0x20 - 0x14];
    s32 idx;
} Ent2;

typedef struct {
    u8 pad00[0x14];
    s32 f14;
    s32 f18;
    s32 f1c;
    s32 id;
} Ent3;

typedef struct {
    VecFx32 a;
    VecFx32 b;
    VecFx32 c;
} Path;

typedef struct {
    u8 pad00[0x93];
    u8 f93;
    u8 pad94[3];
    u8 f97;
    u8 f98;
    u8 pad99[0xb0 - 0x99];
    u8 fb0;
    u8 padb1[0x152 - 0xb1];
    s16 f152;
    u8 pad154[0x1a4 - 0x154];
    VecFx32 f1a4;
    u8 pad1b0[0x26c - 0x1b0];
    VecFx32 f26c;
    VecFx32 f278;
    u8 pad284[0x2a0 - 0x284];
    VecFx32 pos;
    u8 pad2ac[0x3b4 - 0x2ac];
    VecFx32 f3b4;
    u8 pad3c0[0x464 - 0x3c0];
    s32 f464;
    s32 f468;
    s32 state;
    s32 f470;
} Dog;

extern Course *data_0214f45c;
extern Sys *data_02159444;
extern Game *data_0214f464;
extern s16 data_02126868[];

#define FX_SinIdx(idx) (data_02126868[((idx) >> 4) * 2])
#define FX_CosIdx(idx) (data_02126868[((idx) >> 4) * 2 + 1])

extern s32 func_02027e4c(Dog *p, s32 a);
extern Obj *func_020364a8(Dog *p);
extern void *func_0200c498(s32 a, s32 b);
extern BOOL func_02009f38(VecFx32 *a, VecFx32 *b);
extern void func_02009f90(VecFx32 *a, VecFx32 *b, fx32 c, VecFx32 *d, Path *e, s32 f, s32 g, s32 h, s32 i);
extern void func_02067e68(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern void func_02067e34(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern Path *func_ov006_02163288(s32 a);
extern s32 func_02028130(Dog *p);
extern void func_01ff832c(fx32 a, VecFx32 *b, VecFx32 *c, VecFx32 *d);
extern s32 func_02038834(Dog *p, s32 a);
extern u32 func_02028124(Dog *p);
extern s32 func_02036f38(Dog *p, s32 a, s32 b);
extern void func_0203e8cc(Dog *p, s32 a, s32 b);
extern void func_020266f8(Dog *p);
extern void func_0202675c(Dog *p);
extern void func_02026aac(Dog *p);
extern void func_02026938(Dog *p);
extern void func_020268dc(Dog *p);
extern void func_0202687c(Dog *p);
extern void func_02026bac(Dog *p);
extern s32 func_02035164(Dog *p);
extern void func_0203942c(Dog *p);
extern void func_02037450(Dog *p, s32 a);
extern BOOL func_0203567c(Dog *p);
extern void func_02027de8(Dog *p, s32 a, s32 b);
extern void func_02029504(Dog *p);
extern BOOL func_02026dc0(Dog *p, s32 a);
extern BOOL func_02032904(Dog *p);
extern s32 func_ov006_021607d0(Dog *p, Obj *o, s32 a, s32 b);
extern void func_021089b8(s32 a);
extern void func_ov006_02161344(Dog *p);
extern BOOL func_ov006_02163250(s32 a);
extern void func_02026c24(Dog *p);

#define FX_Mul(a, b) ((fx32)(((s64)(a) * (b) + 0x800) >> 12))

static inline u16 Rand(void)
{
    u32 s = data_0214f464->seed * 0x10dcd + 1;
    data_0214f464->seed = s;
    return (u16)s;
}

static inline u16 RandMax(u16 max)
{
    return (u16)(((u32)Rand() * max) >> 16);
}

static inline void VEC_Set(VecFx32 *a, fx32 x, fx32 y, fx32 z)
{
    a->x = x;
    a->y = y;
    a->z = z;
}

static inline void SetAnim(Dog *p, s32 k)
{
    switch (k) {
    case 0:
        func_0203e8cc(p, 0, 17);
        func_020266f8(p);
        break;
    case 1:
        func_0203e8cc(p, 0, 18);
        func_0202675c(p);
        break;
    case 2:
        func_0203e8cc(p, 0, 19);
        func_02026aac(p);
        break;
    case 3:
        func_0203e8cc(p, 0, 20);
        func_02026938(p);
        break;
    case 4:
        func_0203e8cc(p, 0, 21);
        func_020268dc(p);
        break;
    case 5:
        func_0203e8cc(p, 0, 22);
        func_0202687c(p);
        break;
    }
}

void func_ov006_0215d398(Dog *p)
{
    BOOL inc;
    BOOL near;
    BOOL hitA;
    BOOL hitB;
    BOOL go;
    s32 objId;
    Obj *obj;
    Ent2 *e;
    s32 dist;
    s32 i;
    s32 lim1;
    s32 lim2;
    VecFx32 v54;
    VecFx32 d60;
    VecFx32 sum;
    VecFx32 tgt;
    Ent *ent;
    Pt *pt;
    s32 j;
    Path *path;
    s32 anim;
    BOOL found;

    near = FALSE;
    hitA = FALSE;
    hitB = FALSE;
    inc = FALSE;
    go = FALSE;
    objId = 0;
    path = NULL;
    dist = func_02027e4c(p, 2);
    obj = func_020364a8(p);
    if (obj != NULL && (e = func_0200c498(obj->f30, (s16)obj->id)) != NULL &&
        (ent = &data_0214f45c->ents[(s16)e->idx]) != NULL) {
        found = TRUE;
    } else {
        found = FALSE;
    }
    if (!found) {
        goto end;
    }
    i = 0;
    objId = (s16)obj->id;
    if (data_0214f45c->cnt->num > 0) {
        lim1 = 1000 - dist;
        lim2 = 1200 - dist;
        do {
            Ent3 *e3 = func_0200c498(8, i);
            if (e3 != NULL && obj->id == e3->id) {
                path = func_ov006_02163288((s16)e3->id);
                if (data_02159444->flags & 1) {
                    Cam *c = &data_0214f464->cam;
                    VEC_Set(&v54, path->c.x, path->c.y, path->c.z);
                    func_02067e34(&c->v2, &p->pos, &d60);
                    if (c->v2.y > 0) {
                        if (data_02159444->flags & 2) {
                            p->f468 += 200;
                        } else {
                            p->f468 += 10;
                        }
                        if (p->f468 > lim1 && p->f468 < lim2) {
                            p->f468 = lim2;
                        }
                        if (func_02009f38(&v54, &d60)) {
                            hitA = TRUE;
                        } else {
                            hitB = TRUE;
                        }
                    }
                }
                for (j = 0; j < ent->count; j = (s16)(j + 1)) {
                    s32 k;
                    VecFx32 ofs2 = {0, 0, 0};
                    k = j;
                    if (j < 0) {
                        k = 0;
                    }
                    if (k >= ent->count) {
                        k = (s16)(ent->count - 1);
                    }
                    if (obj->dir == 0) {
                        pt = &data_0214f45c->pts[(s16)(ent->start + k)];
                    } else if (obj->dir == 1) {
                        pt = &data_0214f45c->pts[(s16)(ent->start + ent->count - 1 - k)];
                    }
                    tgt = pt->pos;
                    tgt.y += 0xa000;
                    func_02009f90(&pt->pos, &tgt, 0x2000, &ofs2, path, e3->f18, e3->f14, e3->f1c, 1);
                    func_02067e68(&pt->pos, &ofs2, &sum);
                    if (j == p->f464) {
                        p->f26c = sum;
                    }
                }
            }
            i = (s16)(i + 1);
        } while (i < data_0214f45c->cnt->num);
    }
    if (p->f464 >= ent->count) {
        p->f26c = e->pos;
        p->f26c.x += FX_SinIdx(e->ang) * 30;
        p->f26c.z += FX_CosIdx(e->ang) * 30;
    }
    p->f278.x = FX_SinIdx(e->ang) * 10 + p->pos.x;
    p->f278.y = p->pos.y;
    p->f278.z = FX_CosIdx(e->ang) * 10 + p->pos.z;
    if (!hitA && !hitB) {
        p->f468 -= 20;
        if (p->f464 > 1 && p->f470 == 0 && (data_02159444->flags & 1)) {
            go = TRUE;
        }
    }
    if (p->f468 < 0) {
        p->f468 = 0;
    }
    if (dist >= 1000) {
        anim = func_02038834(p, dist);
    } else {
        func_01ff832c(func_02028130(p) << 1, &p->f1a4, &p->pos, &p->f3b4);
        if (p->f464 > 1 && p->f468 + dist <= 1000) {
            near = TRUE;
        } else {
            near = FALSE;
        }
        if (dist < 300) {
            anim = 0;
        } else if (dist < 700) {
            anim = 1;
        } else {
            anim = 2;
        }
    }
    switch (p->state) {
    case 0: {
        s32 lim = func_02028124(p);
        inc = func_02036f38(p, 256, anim) < FX_Mul(lim, 0x4000);
        if (dist < 1000) {
            p->f93 = 5;
            p->f98 = 6;
        }
        if (go) {
            SetAnim(p, anim);
            p->state = 4;
        } else if (hitB) {
            func_0203e8cc(p, 0, 0);
            func_02026bac(p);
            p->f93 = 3;
            p->state = 3;
        } else if (near) {
            func_0203e8cc(p, 0, 0x162);
            func_0203e8cc(p, 3, func_02035164(p));
            func_02026bac(p);
            p->f93 = 2;
            p->f98 = 0;
            p->f97 = 2;
            p->state = 5;
        }
        break;
    }
    case 1:
    case 2:
    case 3:
        if (go) {
            SetAnim(p, anim);
            p->state = 4;
        } else if (!hitB) {
            p->state--;
            if (p->state == 0) {
                func_0203e8cc(p, 0, 17);
                func_020266f8(p);
                p->f93 = 0;
            }
        }
        break;
    case 4:
        p->f26c = data_0214f464->cam.pos;
        func_0203942c(p);
        func_02037450(p, 784);
        if (hitB) {
            func_0203e8cc(p, 0, 0);
            func_02026bac(p);
            p->f93 = 3;
            p->state = 3;
        } else if (hitA) {
            func_0203e8cc(p, 0, 17);
            func_020266f8(p);
            p->f93 = 0;
            p->state = 0;
        }
        break;
    case 5:
        switch (p->f152) {
        case 340:
        case 0x155:
            if (path != NULL) {
                VecFx32 v90;
                VEC_Set(&v90, path->a.x, path->a.y, path->a.z);
                func_01ff832c(0x2000, &v90, &p->f278, &p->f278);
                p->f3b4 = p->f278;
                p->f3b4.y -= 0x3000;
            }
            break;
        }
        func_02037450(p, 256);
        if (func_0203567c(p)) {
            switch (RandMax(8)) {
            case 0:
                func_0203e8cc(p, 0, 0);
                func_0203e8cc(p, 3, 0);
                func_02026bac(p);
                p->f93 = 3;
                p->f98 = 6;
                p->f97 = 2;
                break;
            case 1:
                func_0203e8cc(p, 0, 340);
                func_0203e8cc(p, 3, 0);
                func_02026bac(p);
                p->f93 = 5;
                p->f98 = 6;
                p->f97 = 2;
                break;
            case 2:
                func_0203e8cc(p, 0, 0x155);
                func_0203e8cc(p, 3, 0);
                func_02026bac(p);
                p->f93 = 5;
                p->f98 = 6;
                p->f97 = 2;
                break;
            case 3:
                func_0203e8cc(p, 0, 0x162);
                func_0203e8cc(p, 3, func_02035164(p));
                func_02026bac(p);
                p->f93 = 2;
                p->f98 = 0;
                p->f97 = 2;
                break;
            }
        }
        if (go) {
            SetAnim(p, anim);
            func_0203e8cc(p, 3, 0);
            p->state = 4;
        } else if (!near) {
            func_0203e8cc(p, 0, 17);
            func_0203e8cc(p, 3, 0);
            func_020266f8(p);
            p->f93 = 0;
            p->state = 0;
        }
        break;
    case 6:
        if (func_0203567c(p)) {
            func_0203e8cc(p, 0, 20);
            func_02026938(p);
            p->f93 = 0;
            p->state = RandMax(2) + 7;
        }
        break;
    case 7:
        p->f26c = e->pos;
        p->f26c.x += FX_CosIdx(e->ang) * 30;
        p->f26c.z += -FX_SinIdx(e->ang) * 30;
        func_0203942c(p);
        func_02037450(p, 784);
        break;
    case 8:
        p->f26c = e->pos;
        p->f26c.x += FX_CosIdx(e->ang) * -30;
        p->f26c.z += -FX_SinIdx(e->ang) * -30;
        func_0203942c(p);
        func_02037450(p, 784);
        break;
    }
    if (inc) {
        p->f464++;
        func_02027de8(p, 2, 30);
    }
end:
    func_02029504(p);
    if (p->f470 == 0 && func_ov006_02163250((s16)obj->id)) {
        p->f470 = 1;
        func_02027de8(p, 2, 30);
        if (dist < RandMax(2000)) {
            func_0203e8cc(p, 0, (s16)(RandMax(2) + 195));
            func_02026c24(p);
            p->f93 = 0;
            p->state = 6;
        }
    }
    if (func_02026dc0(p, objId)) {
        return;
    }
    if (!func_02032904(p)) {
        return;
    }
    if (p->f464 <= 1) {
        return;
    }
    switch (func_ov006_021607d0(p, obj, 1, 1)) {
    case 0:
        break;
    case 1:
        if (p->f464 >= ent->count && p->f470 != 0) {
            Game *g;
            data_0214f464->f2e = 5;
            g = data_0214f464;
            g->f2c++;
            if (g->f2c >= 5) {
                func_021089b8(3);
            } else {
                func_021089b8(2);
            }
        } else {
            data_0214f464->f2e = 6;
            data_0214f464->f2c = 0;
            func_021089b8(1);
        }
        break;
    case 2:
        data_0214f464->f2e = 6;
        data_0214f464->f2c = 0;
        func_021089b8(1);
        break;
    case 3:
        break;
    case 4:
        data_0214f464->f2e = 9;
        data_0214f464->f2c = 0;
        func_021089b8(1);
        break;
    }
    func_ov006_021607d0(p, obj, 0, 0);
    p->fb0 |= 1;
    p->fb0 &= ~8;
    func_ov006_02161344(p);
}



