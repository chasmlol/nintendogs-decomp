#include "ctx.h"

extern u8 *data_02159034;

typedef struct { u32 w0; u32 w1; u8 c[6]; s8 flag; u8 pad; } Ent;

u32 func_02093634(u32 *p0, u8 *p1)
{
    u32 ret;
    s16 i;
    u32 found;
    u32 ok;
    s16 k;
    Ent *e;
    u8 *pp;
    u8 *pe;

    ret = 1;
    i = 0;
    e = (Ent *)(*(u32 *)(data_02159034 + 0x1000 + 0x41c) + 0x568);
    do {
        found = 0;
        if (e->flag != 0) {
            if (p0[0] == e->w0 && p0[1] == e->w1) goto hit;
            ok = 1;
            k = 0;
            pp = p1;
            pe = (u8 *)e;
            do {
                if (pe[8] != *pp) {
                    ok = 0;
                    break;
                }
                pp++;
                pe++;
                k++;
            } while (k < 6);
            if (!ok) goto chk;
hit:
            found = 1;
        }
chk:
        if (found) {
            ret = 0;
            break;
        }
        i++;
        e++;
    } while (i < 20);
    return ret;
}
