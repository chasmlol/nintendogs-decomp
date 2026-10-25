#include "ctx.h"

typedef s32 fx32;
typedef struct { fx32 x; fx32 y; fx32 z; } VecFx32;
typedef struct { fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22; } MtxFx33;
typedef struct { fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22, _30, _31, _32; } MtxFx43;

typedef struct {
    u8 pad0[0x24];
    VecFx32 scale;
    VecFx32 trans;
    MtxFx43 rot;
} Model;

typedef struct {
    u32 unk0;
    s32 x;
    VecFx32 pos;
    fx32 f14;
    s32 f18;
    s32 f1c;
    s32 f20;
    s32 f24;
    u8 pad28[0x58 - 0x28];
    Model *m1;
    Model *m2;
} Obj;

typedef struct {
    u8 pad0[0x1c];
    s32 state;
    void *prm;
    u32 unk24;
    void (*func)(void);
    Obj *obj;
} Task;

typedef struct {
    u32 unk0;
    u16 ang;
    u16 pad6;
    VecFx32 pos;
    VecFx32 scale;
} Prm;

extern const char *data_ov006_02165e80;
extern const char data_ov006_02165e84[];
extern const char data_ov006_02165e9c[];
extern u8 *data_ov006_021661c0;
extern s16 data_02126868[];

extern void func_ov006_021646a4(Task *t);
extern void func_ov006_02163308(void);
extern void *func_020038b8(void *heap, u32 size);
extern void func_0205f050(char *buf, u32 n, const char *fmt, ...);
extern void *func_0207df48(const char *name);
extern void *func_0208f43c(void *heap, void *res);
extern Model *func_0208fb00(void *heap, u32 size, void *res);
extern void func_0208f7e4(Model *m, u32 c);
extern void func_0208f820(Model *m, u32 c);
extern void func_0208f7d0(Model *m, u32 c);
extern void func_0208f588(void *a, Model *m);
extern void func_01ff8020(MtxFx43 *m, fx32 s, fx32 c);
extern fx32 func_02067898(fx32 a, fx32 b);
extern fx32 func_0206782c(fx32 a);
extern void func_02067d04(VecFx32 *a, VecFx32 *b, VecFx32 *c);

#define FX_Mul(a, b) ((fx32)(((s64)(a) * (b) + 0x800) >> 12))

static inline void VEC_Set(VecFx32 *a, fx32 x, fx32 y, fx32 z)
{
    a->x = x;
    a->y = y;
    a->z = z;
}

void func_ov006_021637b8(Task *task, void *heap, Prm *prm, s32 x)
{
    Obj *obj;
    void *res1;
    void *res2;
    char buf[64];
    MtxFx33 m;
    fx32 r;
    s32 idx;
    MtxFx43 *src;

    func_ov006_021646a4(task);
    task->func = func_ov006_02163308;
    task->state = 3;
    task->prm = prm;
    task->obj = func_020038b8(heap, 96);
    obj = task->obj;
    if (obj == NULL) {
        return;
    }
    func_0205f050(buf, 64, data_ov006_02165e84, data_ov006_02165e80);
    res1 = func_0208f43c(heap, func_0207df48(buf));
    func_0205f050(buf, 64, data_ov006_02165e9c, data_ov006_02165e80);
    res2 = func_0208f43c(heap, func_0207df48(buf));
    obj->m1 = func_0208fb00(heap, 136, res1);
    obj->m2 = func_0208fb00(heap, 136, res2);
    func_0208f7e4(obj->m1, 0x39ce);
    func_0208f820(obj->m1, 0x7fff);
    func_0208f7d0(obj->m1, 3);
    func_0208f7e4(obj->m2, 0x39ce);
    func_0208f820(obj->m2, 0x7fff);
    func_0208f7d0(obj->m2, 3);
    func_0208f588(data_ov006_021661c0 + 4, obj->m1);
    func_0208f588(data_ov006_021661c0 + 4, obj->m2);
    obj->m1->trans = prm->pos;
    obj->m2->trans = prm->pos;
    obj->m2->trans.y += 0x3000;
    obj->m1->scale = prm->scale;
    obj->m2->scale = prm->scale;
    idx = prm->ang >> 4;
    func_01ff8020(&obj->m1->rot, data_02126868[idx * 2], data_02126868[idx * 2 + 1]);
    obj->m2->rot = obj->m1->rot;
    obj->f1c = 0;

    src = &obj->m2->rot;
    VEC_Set((VecFx32 *)&m._00, src->_00, src->_01, src->_02);
    VEC_Set((VecFx32 *)&m._10, src->_10, src->_11, src->_12);
    VEC_Set((VecFx32 *)&m._20, src->_20, src->_21, src->_22);
    obj->f14 = func_02067898(0x3000, 0xf000) + 20;
    m._21 = obj->f14;
    r = func_0206782c(0x1000 - FX_Mul(m._21, m._21));
    m._20 = FX_Mul(m._20, r);
    m._22 = FX_Mul(m._22, r);
    func_02067d04((VecFx32 *)&m._20, (VecFx32 *)&m._00, (VecFx32 *)&m._10);
    src->_00 = m._00;
    src->_01 = m._01;
    src->_02 = m._02;
    src->_10 = m._10;
    src->_11 = m._11;
    src->_12 = m._12;
    src->_20 = m._20;
    src->_21 = m._21;
    src->_22 = m._22;

    VEC_Set(&obj->pos, prm->pos.x, prm->pos.y + 0x3000, prm->pos.z);
    obj->f18 = 0;
    obj->f20 = 1;
    obj->f24 = 0;
    obj->x = x;
}
