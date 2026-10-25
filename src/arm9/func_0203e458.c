#include "ctx.h"

extern u8 *data_0214f464;

void func_0203e458(u8 *p, u32 val)
{
    s32 i;
    s32 all;
    s32 zl;
    s32 z12;
    u8 *e;
    if (*(s16 *)(p + 136) != -1) {
        return;
    }
    all = 1;
    i = 0;
    zl = i;
    z12 = i;
loop:
    if (i < 0) {
        goto nul;
    }
    if (i < 3) {
        goto load;
    }
nul:
    e = (u8 *)zl;
    goto chk;
load:
    e = *(u8 **)(data_0214f464 + i * 4 + 0x54);
chk:
    if (e == 0) {
        all = 1;
        goto store;
    }
    if (*(s16 *)(*(u8 **)(e + 0x9e8) + 6) != -1) {
        all = z12;
    }
    i = (s8)(i + 1);
    if (i < 3) {
        goto loop;
    }
store:
    if (all != 0) {
        *(s16 *)(p + 136) = (s16)val;
        *(s16 *)(p + 138) = 0;
    }
}
