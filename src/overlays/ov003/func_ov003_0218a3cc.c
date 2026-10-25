#include "ctx.h"

typedef s32 fx32;
typedef struct { fx32 x; fx32 y; fx32 z; } VecFx32;
typedef struct { fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22; } MtxFx33;

typedef struct {
    u8 pad[0x30];
    VecFx32 pos;
} Cam;

typedef struct {
    u8 pad[0x1c];
    Cam *cam;
} CamMgr;

typedef struct {
    u8 pad[0x4c];
    MtxFx33 m;
} View;

typedef struct {
    u8 pad0[0x12e];
    u16 ang;
    u8 pad130[0x2d0 - 0x130];
    VecFx32 v2d0;
    u8 pad2dc[0x33c - 0x2dc];
    VecFx32 v33c;
    u8 pad348[0x384 - 0x348];
    VecFx32 pos;
    u8 pad390[0x3b4 - 0x390];
    VecFx32 eye;
    u8 pad3c0[0x450 - 0x3c0];
    s32 rate;
} Obj;

extern CamMgr *data_02159444;
extern View data_02152cd8;
extern s32 data_0214f460;
extern void func_020ab02c(s32 a, VecFx32 *b, VecFx32 *c);
extern void func_02067e34(VecFx32 *a, VecFx32 *b, VecFx32 *c);
extern void func_01ff832c(fx32 a, VecFx32 *b, VecFx32 *c, VecFx32 *d);
extern fx32 func_02067df0(VecFx32 *a, VecFx32 *b);
extern void func_ov003_0218ab10(Obj *p, s32 a, u32 b, VecFx32 *c, s32 d, s32 e);

void func_ov003_0218a3cc(Obj *obj, s32 mode, u32 arg)
{
    s32 neg;
    fx32 d;

    switch (mode) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        break;
    case 5:
    case 6:
        goto b56;
    case 7:
    case 8:
        goto b78;
    default:
        break;
    }
    {
        VecFx32 camPos;
        VecFx32 col0;
        VecFx32 dir;

        camPos = data_02159444->cam->pos;
        col0.x = data_02152cd8.m._00;
        col0.y = data_02152cd8.m._10;
        col0.z = data_02152cd8.m._20;
        func_020ab02c(data_0214f460, &dir, &obj->pos);
        func_02067e34(&dir, &obj->pos, &dir);
        func_01ff832c(0x7000, &dir, &camPos, &obj->eye);
        obj->eye.y += 0x8000;
        if (func_02067df0(&dir, &col0) > 0) {
            obj->ang = 0x1000;
        } else {
            obj->ang = -0x1000;
        }
    }
    goto tail;

b56:
    {
        VecFx32 camPos;
        VecFx32 col0;
        VecFx32 col1;
        VecFx32 v;
        VecFx32 dir;

        neg = (mode == 6) ? 1 : 0;
        camPos = data_02159444->cam->pos;
        col0.x = data_02152cd8.m._00;
        col0.y = data_02152cd8.m._10;
        col0.z = data_02152cd8.m._20;
        col1.x = data_02152cd8.m._01;
        col1.y = data_02152cd8.m._11;
        col1.z = data_02152cd8.m._21;
        func_020ab02c(data_0214f460, &dir, &obj->v33c);
        func_02067e34(&dir, &obj->pos, &dir);
        func_02067e34(&obj->pos, &obj->v33c, &v);
        v.y += 0x400;
        if (neg != 0) {
            d = -func_02067df0(&dir, &col0);
        } else {
            d = func_02067df0(&dir, &col0);
        }
        if (d > 0) {
            func_01ff832c(0x2000, &v, &dir, &v);
        }
        func_01ff832c(0x14000, &v, &camPos, &obj->eye);
        if (func_02067df0(&dir, &col1) > 0) {
            obj->ang = neg ? 0x5000 : -0x5000;
        } else {
            obj->ang = neg ? 0x4000 : -0x4000;
        }
    }
    goto tail;

b78:
    {
        VecFx32 col0;
        VecFx32 col1;
        VecFx32 col2;
        VecFx32 dir;
        fx32 k;
        s16 a;

        neg = (mode == 8);
        col0.x = data_02152cd8.m._00;
        col0.y = data_02152cd8.m._10;
        col0.z = data_02152cd8.m._20;
        col1.x = data_02152cd8.m._01;
        col1.y = data_02152cd8.m._11;
        col1.z = data_02152cd8.m._21;
        col2.x = data_02152cd8.m._02;
        col2.y = data_02152cd8.m._12;
        col2.z = data_02152cd8.m._22;
        func_020ab02c(data_0214f460, &dir, &obj->v2d0);
        func_02067e34(&dir, &obj->v2d0, &dir);
        func_01ff832c(neg ? -0x4000 : 0x4000, &col0, &obj->pos, &obj->eye);
        func_01ff832c(-0x800, &col1, &obj->eye, &obj->eye);
        if (neg != 0) {
            d = -(func_02067df0(&dir, &col0) >> 3);
        } else {
            d = func_02067df0(&dir, &col0) >> 3;
        }
        func_01ff832c((300 - d) * 41, &col2, &obj->eye, &obj->eye);
        if (func_02067df0(&dir, &col1) > 0) {
            obj->ang = (s16)obj->ang + ((obj->rate * -(s16)obj->ang) >> 12);
        } else {
            a = obj->ang;
            k = neg ? -0x1800 : 0x1800;
            obj->ang = a + ((obj->rate * (k - a)) >> 12);
        }
    }

tail:
    func_ov003_0218ab10(obj, mode, arg, &obj->pos, 0x2008, 1);
}
