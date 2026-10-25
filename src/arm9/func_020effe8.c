#include "ctx.h"

/* NNSG3dResName-style 16-byte name */
typedef union { char name[16]; u32 val[4]; } ResName;

typedef struct {
    u32 f0;
    s32 nodeId[6];
    u8 pad1c[0x1e4 - 0x1c];
    void *f1e4;
} Work;

typedef struct {
    u8 pad[8];
    u8 *mdl;
} RenderObj;

typedef struct {
    u8 pad0[0x1c];
    RenderObj *ro;
    u16 f20;
    u8 pad22[0x1f0 - 0x22];
    void *cb1f0;
    void *cb1f4;
    void *cb1f8;
    u8 pad1fc[0x214 - 0x1fc];
    Work *work;
} Obj;

typedef struct { u8 b[12]; } Ent12;

extern void func_020efeec(void);
extern void func_020efb4c(void);
extern void func_020eff8c(void);
extern const char *data_02144ebc[];
extern void func_020ef2c8(void);
extern Ent12 data_02144ed4[];
extern void func_020bdd1c(Obj *p, s16 a);
extern void *func_020038b8(void *heap, u32 n);
extern void func_0205f050(char *dst, u32 n, const char *fmt, ...);
extern s32 func_02078224(void *dict, ResName *name);
extern void func_0208f86c(Obj *p, s16 node, void (*cb)(void));
extern u32 func_020f1300(u32 a);
extern void func_020f125c(u32 a, Obj *p);

void func_020effe8(Obj *obj, void *heap, int kind, u32 p4, s32 p5)
{
    Work *work;
    s32 i;

    func_020bdd1c(obj, kind);
    obj->cb1f4 = func_020efeec;
    obj->cb1f8 = func_020efb4c;
    obj->cb1f0 = func_020eff8c;
    obj->work = func_020038b8(heap, sizeof(Work));
    work = obj->work;
    if (obj != NULL) {
        u8 *mdl = obj->ro->mdl;
        for (i = 0; i < 6; i++) {
            ResName name;
            name.val[0] = 0;
            name.val[1] = 0;
            name.val[2] = 0;
            name.val[3] = 0;
            func_0205f050(name.name, 16, data_02144ebc[i]);
            work->nodeId[i] = func_02078224((void *)((u32)mdl + 0x40), &name);
            func_0208f86c(obj, work->nodeId[i], func_020ef2c8);
        }
    }
    work->f1e4 = &data_02144ed4[p5];
    work->f0 = func_020f1300(p4);
    func_020f125c(p4, obj);
    obj->f20 |= 0x10;
}
