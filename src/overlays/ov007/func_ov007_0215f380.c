#include "ctx.h"
extern void func_0206b6ac(u32 *p, u32 v, u32 size);
extern void func_0206c7f0(u32 a, u32 *b, u32 size);
extern void func_02005fe4(void);
extern void func_02005f84(void);
typedef struct { u16 n; u16 z; u32 *d; } B;
typedef struct { u32 x; B *b; } A;
extern A *data_ov007_02160e58;
static inline B *GetB(A *p) { return p ? p->b : 0; }

void func_ov007_0215f380(void)
{
    vu32 v; B *b; B *c; u32 n; A *a = data_ov007_02160e58;
    b = GetB(a);
    n = (u32)b->n << 3;
    c = GetB(a);
    func_0206b6ac(c->d, 0, n);
    b = data_ov007_02160e58->b;
    b->z = 0;
    v = 192;
    func_0206c7f0(v, b->d, (u32)b->n << 3);
    func_02005fe4();
    func_02005f84();
}
