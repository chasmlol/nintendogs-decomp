#include "ctx.h"

typedef struct {
    u32 *f0;
    u32 f4;
    u32 f8;
    u32 fc;
    u32 f10;
    u32 f14;
} Grp;

extern Grp data_02150600;
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 irq);
extern void func_02080b84(void);
extern u64 func_0207f554(u32 *p, u32 a);

void func_02065824(u32 param_1, u32 param_2)
{
    Grp *g;
    u32 irq;
    u32 iVar2;
    u64 ret;
    u32 t;

    g = &data_02150600;
    t = func_02080b08();
    asm {
        ldr iVar2, [g, #8]
        mov irq, t
    }
    if (iVar2 == param_1) {
        if (g->f14 != param_2) {
            func_02080b84();
        }
    } else {
        if (g->f8 != 0xfffffffd) {
            do {
                ret = func_0207f554(&g->f10, iVar2);
                iVar2 = (u32)(ret >> 32);
            } while (g->f8 != 0xfffffffd);
        }
        g->f8 = param_1;
        g->f14 = param_2;
    }
    g->fc = g->fc + 1;
    *g->f0 = 0;
    func_02080b1c(irq);
}
