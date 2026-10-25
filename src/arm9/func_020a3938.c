#include "ctx.h"

typedef struct {
    u8 pad[0x3e];
    s16 h3e;
    u32 w40;
} ObjA;

typedef struct {
    u8 pad[6];
    s16 h6;
} ObjB;

extern ObjA data_02159074;
extern ObjB data_02159148;
extern s32 func_020df0d4(void);
extern void func_020292c4(u32 p, u32 a, u32 b);

void func_020a3938(u32 param_1)
{
    s32 r;
    s32 f;

    r = func_020df0d4();
    if (r == -11) {
        goto no;
    }
    if (data_02159074.w40 != 0) {
        goto no;
    }
    if (data_02159074.h3e == 1) {
        goto no;
    }
    if (data_02159074.h3e == 2) {
        goto no;
    }
    if (data_02159148.h6 == 62) {
        goto no;
    }
    if (data_02159148.h6 == 63) {
        goto no;
    }
    f = 1;
    goto test;
no:
    f = 0;
test:
    if (f != 0) {
        func_020292c4(param_1, 75, 1);
    }
}
