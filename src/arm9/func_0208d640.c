#include "ctx.h"

typedef struct {
    u8 pad00[0xc];
    u32 stat;          /* 0x0c */
    u8 pad10[0x38];
} FSFile;              /* 0x48 */

typedef struct {
    FSFile file;       /* 0x00 */
    void *arc;         /* 0x48 */
} ArcEnt;              /* 0x4c */

typedef struct {
    u16 idx;           /* 0x00 */
    u16 pad;
    const char *name;  /* 0x04 */
    void *data;        /* 0x08 */
    void *res;         /* 0x0c */
} ResEnt;              /* 0x10 */

typedef struct {
    u16 pad;
    s16 idx;           /* 0x02 */
    void *src;         /* 0x04 */
    void *obj;         /* 0x08 */
} ObjEnt;              /* 0x0c */

typedef struct Loader {
    s16 state;         /* 0x00 */
    u16 pad02;
    u8 list[0x24];     /* 0x04 */
    void *heap;        /* 0x28 */
    void (*cb)(struct Loader *p, s32 kind, s32 idx);   /* 0x2c */
    u16 pad30;
    s16 numArc;        /* 0x32 */
    s16 numRes;        /* 0x34 */
    s16 numObj;        /* 0x36 */
    ArcEnt arc[4];     /* 0x38 */
    ResEnt res[4];     /* 0x168 */
    ObjEnt obj[16];    /* 0x1a8 */
    u32 texKey;        /* 0x268 */
    u32 texOfs;        /* 0x26c */
    u32 plttKey;       /* 0x270 */
    u32 plttOfs;       /* 0x274 */
} Loader;

extern const char *data_0213ed58[];
extern const char data_0213eda0[];
extern void func_02087fcc(FSFile *file);
extern BOOL func_0207dfcc(void *arc, const char *name, void *bin);
extern void *func_020781d4(void *mdl);
extern u32 func_02074184(void *tex);
extern u32 func_02074178(void *tex);
extern u32 func_0207407c(void *tex);
extern void func_02074164(void *tex, u32 texKey, u32 tex4x4Key);
extern void func_02074074(void *tex, u32 plttKey);
extern void func_020074f0(void *tex);
extern void func_020074a4(void *tex);
extern void *func_02078214(void *mdl);
extern void func_02073c6c(void *mdlSet, void *tex);
extern int func_0205f050(char *buf, u32 n, const char *fmt, ...);
extern void *func_0207df48(const char *path);
extern void *func_0208f2d0(void *heap, void *data);
extern void func_0208f3fc(void *res);
extern void *func_0208fb00(void *heap, void *src, void *res);
extern void func_0208f588(void *list, void *obj);
extern void func_0208f54c(void *list, void *obj);
extern void func_0208f41c(void *res);
extern void func_0207df9c(void *arc);
extern void func_0207dbe0(void *heap, u32 id);
extern void func_0207dc3c(void *heap, u32 id);

static inline BOOL FS_IsFile(volatile const FSFile *file)
{
    return (file->stat & 0x10) ? TRUE : FALSE;
}

static inline BOOL FS_IsBusy(volatile const FSFile *file)
{
    return (file->stat & 1) ? TRUE : FALSE;
}

void func_0208d640(Loader *p)
{
    BOOL ok = TRUE;
    s16 i;
    s16 k;

    switch (p->state) {
    case 0:
        break;
    case 1:
        for (i = 0; i < p->numArc; i++) {
            ArcEnt *a = &p->arc[i];
            if (FS_IsFile(&a->file) && !FS_IsBusy(&a->file)) {
                void *bin = (u8 *)a->arc + 0x60;
                func_02087fcc(&a->file);
                func_0207dfcc(a->arc, data_0213ed58[i], bin);
            } else {
                ok = FALSE;
            }
        }
        if (!ok) {
            return;
        }
        {
            char path[68];
            s16 j;
            ok = FALSE;
            for (j = 0; j < p->numRes; j++) {
                ResEnt *r = &p->res[j];
                if (r->name != NULL) {
                    func_0205f050(path, 64, data_0213eda0, data_0213ed58[r->idx], r->name);
                    r->data = func_0207df48(path);
                    r->res = func_0208f2d0(p->heap, r->data);
                    func_0208f3fc(r->res);
                    ok = TRUE;
                } else {
                    r->res = NULL;
                }
            }
        }
        p->state = 2;
        if (ok) {
            for (i = 0; i < p->numRes; i++) {
                void **res = p->res[i].res;
                if (res != NULL) {
                    void *mdl = res[2];
                    void *tex = func_020781d4(mdl);
                    if (tex != NULL) {
                        u32 texSize = func_02074184(tex);
                        u32 plttSize;
                        u32 texKey;
                        u32 plttKey;
                        func_02074178(tex);
                        plttSize = func_0207407c(tex);
                        plttKey = (((p->plttOfs + ((p->plttKey & 0xffff) << 3)) >> 3) & 0xffff) | ((plttSize >> 3) << 16);
                        texKey = (((p->texOfs + ((p->texKey & 0xffff) << 3)) >> 3) & 0xffff) | ((texSize >> 4) << 16);
                        func_02074164(tex, texKey, 0);
                        func_02074074(tex, plttKey);
                        p->texOfs += texSize;
                        p->plttOfs += plttSize;
                        func_020074f0(tex);
                        func_020074a4(tex);
                    }
                    {
                        void *set = func_02078214(mdl);
                        if (tex != NULL) {
                            func_02073c6c(set, tex);
                        }
                    }
                }
            }
        }
        p->texOfs = 0;
        p->plttOfs = 0;
        break;
    case 2:
        p->state = 3;
        for (k = 0; k < p->numObj; k++) {
            ObjEnt *o = &p->obj[k];
            o->obj = func_0208fb00(p->heap, o->src, p->res[o->idx].res);
            if (p->cb != NULL) {
                p->cb(p, 0, k);
            }
            func_0208f588(p->list, o->obj);
        }
        if (p->cb != NULL) {
            p->cb(p, 1, -1);
        }
        break;
    case 3:
        break;
    case 4:
        p->state = 0;
        for (i = 0; i < p->numObj; i++) {
            ObjEnt *o = &p->obj[i];
            if (p->cb != NULL) {
                p->cb(p, 2, i);
            }
            func_0208f54c(p->list, o->obj);
            o->obj = NULL;
        }
        p->numObj = 0;
        if (p->cb != NULL) {
            p->cb(p, 3, -1);
        }
        for (i = 0; i < p->numRes; i++) {
            ResEnt *r = &p->res[i];
            if (r->res != NULL) {
                func_0208f41c(r->res);
            }
        }
        p->numRes = 0;
        for (i = 0; i < p->numArc; i++) {
            ArcEnt *a = &p->arc[i];
            func_0207df9c(a->arc);
            a->arc = NULL;
        }
        p->numArc = 0;
        func_0207dbe0(p->heap, 0x49464348);
        func_0207dc3c(p->heap, 0x49464348);
        break;
    }
}
