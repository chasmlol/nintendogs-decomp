#include "ctx.h"

typedef struct {
    u32 f0;
    u8 pad4[8];
    u16 fc;
    u8 pad14[10];
    u16 f18;
    u16 f1a;
    u32 f1c;
} Glob;

extern Glob data_02159198;
extern void func_02070ac8(Glob *g, s32 a, s32 b);

u32 func_0209f968(s32 param_1, s32 param_2)
{
    Glob *g;
    u16 uVar1;
    u16 uVar3;

    g = &data_02159198;
    if (g->f0 != 0) {
        g->fc = (u16)param_1;
        if (g->f1c != 0) {
            uVar3 = g->f1a;
            uVar1 = g->f18;
            g->f18 = 0;
            g->f1c = 0;
            param_2 = (s32)uVar3 - (s32)uVar1;
        }
        func_02070ac8(g, param_1, param_2);
        return 1;
    }
    return 0;
}
