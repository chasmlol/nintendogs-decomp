#include "ctx.h"

typedef struct S {
    u8 pad0[12];
    u8 b12[4];
    vu32 flags;
    u32 f14;
    int *ptr;
} S;

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 a);
extern void func_0207f4e0(u8 *a);
extern void func_02087248(int *a, int b);
extern int func_02087ad0(S *a);
extern void func_02087a2c(int a);

void func_020877c4(S *param_1, int param_2)
{
    int *p;
    u32 f;
    u32 uVar;
    int r;
    u32 bVar;

    bVar = (param_1->flags & 0x100) ? 1 : 0;
    if (bVar) {
        f = param_1->flags;
        p = param_1->ptr;
        param_1->flags = f & ~0x100;
        func_02087248(p, param_2);
        r = func_02087ad0(param_1);
        if (r == 0) {
            return;
        }
        func_02087a2c(r);
    } else {
        p = param_1->ptr;
        uVar = func_02080b08();
        p[5] = param_2;
        param_1->flags = param_1->flags & ~0x200;
        func_0207f4e0((u8 *)param_1 + 12);
        func_02080b1c(uVar);
    }
}
