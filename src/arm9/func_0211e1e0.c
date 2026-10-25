#pragma opt_common_subs off
#include "ctx.h"

typedef struct { u16 lo; u16 hi; u32 idx; } E;
typedef struct { E e[5]; } T;

extern u32 data_0214d920[10];
extern void func_02101894(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_02101280(u32 a, u32 b);
extern void func_02112798(u32 a, u32 b, u32 c);

void func_0211e1e0(u8 *p, u32 p2, u32 p3)
{
    T t;
    s32 i;
    u32 idx;

    t = *(T *)data_0214d920;
    i = 0;
    do {
        idx = t.e[i].idx;
        *(u16 *)(p + idx * 4 + 0x28) = t.e[i].lo;
        *(u16 *)(p + idx * 4 + 0x2a) = t.e[i].hi;
        func_02101894(0, p2, p3, *(u16 *)(p + idx * 4 + 0x28), 0);
        func_02101280(0, *(u16 *)(p + (idx << 2) + 0x28));
        i++;
    } while (i < 5);
    *(u32 *)(p + 4) = 1;
    *(u32 *)(p + 0xc) = 0;
    *(u32 *)(p + 0x10) = 1;
    func_02112798(2, 2, 0);
    func_02112798(2, 3, 0);
    func_02112798(2, 5, 0);
    func_02112798(2, 6, 0);
}
