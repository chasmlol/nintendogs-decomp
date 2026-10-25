#include "ctx.h"

typedef struct { s16 a; s8 b; s8 c; } Ent;

extern u32 data_0215b674;
extern u32 data_02144a80;
extern u32 data_0215b670;
extern u8 *data_0215b648;
extern u32 data_0215b66c;
extern Ent data_0215b64c;
extern Ent data_0215b678[];
extern s8 *data_0215b650;

void func_020dffa0(s16 *a, u8 *b, u32 c, Ent *d);
void func_020dfc38(void);
void func_020dfd0c(u32 a);

static inline s32 Update(u32 i, u32 n)
{
    if (i % n == 0) {
        if (data_0215b64c.a == data_0215b678[i / n].a && data_0215b64c.b == data_0215b678[i / n].b) {
            return 1;
        }
        data_0215b678[i / n] = data_0215b64c;
    }
    return 0;
}

void func_020e184c(void)
{
    s16 v[2];
    u32 n;
    u32 i;

    data_0215b670 = 0;
    while (data_0215b674 < data_02144a80) {
        v[0] = *data_0215b650++ << 8;
        i = data_0215b674;
        v[1] = *data_0215b650++ << 8;
        n = data_02144a80 / 40;
        if (Update(i, n) == 1) {
            break;
        }
        func_020dffa0(v, data_0215b648++, 2, &data_0215b64c);
        data_0215b674 += 2;
    }
    func_020dfc38();
    func_020dfd0c(8000);
    data_0215b66c = 0;
}
