#include "ctx.h"

typedef struct { s32 x, y, z; } VecFx32;

typedef struct {
    u8 pad[0x30];
    VecFx32 pos;   /* 0x30 */
    VecFx32 f3c;   /* 0x3c */
    VecFx32 dir;   /* 0x48 */
} Cam;

typedef struct {
    u8 pad[0x1c];
    Cam *cam;      /* 0x1c */
    u8 pad20[0x84 - 0x20];
    u16 f84;
    s16 f86;
    s16 f88;
} Game;

typedef struct {
    u8 pad[0x4c];
    s32 m[9];
} CamMtx;

typedef struct {
    u8 pad[8];
    u16 f8;
} Work;

typedef struct {
    u8 pad[0x9c];
    s16 f9c;
    u8 pad9e[0xbc - 0x9e];
    VecFx32 pos;   /* 0xbc */
    u8 fc8[4];     /* 0xc8 */
    u8 padcc[0x214 - 0xcc];
    Work *work;    /* 0x214 */
} Obj;

extern CamMtx data_02152cd8;
extern Game *data_02159444;
extern s32 func_02044ca0(s32 a);
extern void func_01ff832c(s32 a, VecFx32 *b, VecFx32 *c, VecFx32 *d);
extern void func_020eed7c(Obj *p, u8 *q);
extern void func_020c5fec(Obj *p);
extern u16 func_02068078();

void func_020eec10(Obj *obj)
{
    s32 found;
    Work *work;
    VecFx32 dir;
    VecFx32 right;
    VecFx32 up;
    VecFx32 pos;

    found = func_02044ca0(obj->f9c);
    work = obj->work;
    func_02044ca0(obj->f9c);
    dir = data_02159444->cam->dir;
    right.x = data_02152cd8.m[0];
    right.y = data_02152cd8.m[3];
    right.z = data_02152cd8.m[6];
    up.x = data_02152cd8.m[1];
    up.y = data_02152cd8.m[4];
    up.z = data_02152cd8.m[7];
    pos = data_02159444->cam->pos;
    func_01ff832c(0x4000, &dir, &pos, &obj->pos);
    func_01ff832c(-369, &right, &obj->pos, &obj->pos);
    func_01ff832c(655, &up, &obj->pos, &obj->pos);
    func_020eed7c(obj, obj->fc8);
    if (found == 0) {
        return;
    }
    if ((data_02159444->f84 & 2) == 0) {
        return;
    }
    func_020c5fec(obj);
    func_02044ca0(obj->f9c);
    {
        s32 a = data_02159444->f86;
        s32 b = data_02159444->f88;
        s32 t;
        u16 v;
        Work *w2 = obj->work;
        t = (a > 0) ? a : -a;
        if (t < 2) {
            t = (b > 0) ? b : -b;
            if (t < 2) {
                v = w2->f8;
                goto END;
            }
        }
        v = func_02068078(b, a);
END:
        work->f8 = v;
    }
}
