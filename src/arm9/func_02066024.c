#include "ctx.h"

typedef struct {
    u8 pad[0x18];
    u32 f18;
    u32 f1c;
    u32 f20;
} Stream;

extern Stream data_02150600;
extern void func_0206c9b8(u8 *dst, void *src, u32 n);

BOOL func_02066024(u8 *param_1)
{
    Stream *s;
    u32 uVar2;
    u32 iVar3;
    u32 n;

    s = &data_02150600;
    uVar2 = s->f18 & 0xfffffe00;
    if (uVar2 == *(u32 *)(param_1 + 8)) {
        iVar3 = s->f18 - uVar2;
        n = 0x200 - iVar3;
        if (n > s->f20) {
            n = s->f20;
        }
        func_0206c9b8(param_1 + 0x20 + iVar3, (void *)s->f1c, n);
        s->f18 = s->f18 + n;
        s->f1c = s->f1c + n;
        s->f20 = s->f20 - n;
    }
    return s->f20 != 0;
}
