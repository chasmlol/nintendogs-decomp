#include "ctx.h"

extern int func_020bc1c4(void);
extern s16 func_020c8db4(int v);
extern void func_020c98c0(void *p, int v);

#define DISPATCH(p)                                              \
    switch (*(int *)(p)) {                                       \
    case 0:                                                      \
        *(s16 *)((p) + 4) = 0;                                   \
        return;                                                  \
    case 1:                                                      \
        *(s16 *)((p) + 92) = func_020c8db4(-1);                  \
        return;                                                  \
    case 2:                                                      \
        *(s16 *)((p) + 92) = func_020c8db4(-1);                  \
        func_020c98c0((p) + 8, *(s16 *)((p) + 92));              \
        *(int *)((p) + 0x58) = 0;                                \
        return;                                                  \
    }                                                            \
    return;

void func_020d38cc(int *param_1)
{
    u8 *p = (u8 *)param_1;

    if (func_020bc1c4() == 10) {
        *(int *)p = 0;
        DISPATCH(p)
    }
    if (func_020bc1c4() != 11) {
        return;
    }
    *(int *)p = 2;
    DISPATCH(p)
}
