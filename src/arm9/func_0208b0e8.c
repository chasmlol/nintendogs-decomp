#include "ctx.h"

typedef struct { s32 a; s32 b; s16 c; u16 d; u32 e; u32 f; } Obj;
extern Obj *data_02157cc4;
extern void *func_020038b8(void *heap, u32 size);
extern void func_020df59c(void *a, u32 b, u32 c);

Obj *func_0208b0e8(void *heap)
{
    void *buf;
    Obj *o;

    buf = func_020038b8(heap, 0xe800);
    o = func_020038b8(heap, sizeof(Obj));
    if (o != NULL) {
        o->a = -1;
        o->b = -1;
        o->c = -1;
        o->d = 0;
        o->e = 0;
        o->f = 0;
        data_02157cc4 = o;
        func_020df59c(buf, 0xe800, 0);
    }
    return o;
}
