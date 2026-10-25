#include "ctx.h"

extern void *func_0206fc5c(void);
extern s32 func_0206fd3c(void);

u32 *func_0206e998(u32 param_1, s32 param_2)
{
    u32 *p;
    u32 i;
    s32 m;

    p = (u32 *)func_0206fc5c();
    if (param_1 >= 1000) goto BIG;
    i = 0;
TOP:
    if (p == NULL) goto R0;
    if (i != param_1) goto INC;
    m = func_0206fd3c();
    return (u32 *)(param_2 * m + (s32)p);
INC:
    i = i + 1;
    p = (u32 *)p[10];
    goto TOP;
R0:
    return NULL;
BIG:
    if (p == NULL) goto RB0;
L60:
    if (*p != param_1) goto L80;
    p = (u32 *)p[11];
    m = func_0206fd3c();
    return (u32 *)(param_2 * m + (s32)p);
L80:
    p = (u32 *)p[10];
    if (p != NULL) goto L60;
RB0:
    return NULL;
}
