#include "ctx.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} Ent;

void func_020dd298(Ent *param_1)
{
    s32 i = 0;
    s32 z = i;
    s32 m = -1;
    do {
        param_1[i].a = m;
        param_1[i].b = z;
        param_1[i].c = z;
        param_1[i].d = z;
        i = i + 1;
    } while (i < 8);
    *(s32 *)((u8 *)param_1 + 0x80) = z;
    *(s32 *)((u8 *)param_1 + 0x84) = m;
}
