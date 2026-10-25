#include "ctx.h"

typedef struct L { u32 count; u32 data[1]; } L;
extern L *data_02155c40;
extern vu32 data_02155c44;

void func_020778b8(void);
void func_020778d0(void);
void func_0206c880(u32 *a, u32 *b, s32 n);
void func_0206c81c(u32 *a, u32 *b, s32 n);

void func_020776d4(u32 param_1, u32 *param_2, s32 param_3)
{
    L *l;
    u32 *b;
    u32 old;
    u32 c;

    l = data_02155c40;
    if (l == 0) {
        goto nullcase;
    }
    if (data_02155c44 == 0) {
        goto after;
    }
    old = l->count;
    if (old + 1 + param_3 > 0xc0) {
        goto after;
    }
    l->count = old + 1;
    data_02155c40->data[old] = param_1;
    if (param_3 == 0) {
        return;
    }
    b = (u32 *)data_02155c40;
    c = *b++;
    func_0206c880(param_2, b + c, param_3 << 2);
    data_02155c40->count = data_02155c40->count + param_3;
    return;
after:
    if (l->count != 0) {
        func_020778d0();
    } else {
        if (data_02155c44 != 0) {
            func_020778b8();
        }
    }
    goto tail;
nullcase:
    if (data_02155c44 != 0) {
        func_020778b8();
    }
tail:
    *(u32 *)0x04000400 = param_1;
    func_0206c81c(param_2, (u32 *)0x04000400, param_3 << 2);
}
