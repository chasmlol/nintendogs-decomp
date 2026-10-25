#include "ctx.h"

typedef struct { u16 a; s16 b; } Pair;
typedef struct { u8 pad0[0x84]; u32 x84; s16 h88; s16 h8a; u32 x8c; u32 x90; u32 x94; u32 x98; } Mgr;

extern Mgr data_02159324;
extern Pair data_02159328[16];

void func_020a2c24(void)
{
    Mgr *m = &data_02159324;
    Pair *t = data_02159328;
    s16 i;

    m->x84 = 0;
    m->h88 = 0;
    m->h8a = 0;
    for (i = 0; i < 16; i++) {
        t[i].a = 0xffff;
        t[i].b = -1;
    }
    m->x8c = 0;
    m->x90 = 0;
    m->x94 = 0;
    m->x98 = 0;
}
