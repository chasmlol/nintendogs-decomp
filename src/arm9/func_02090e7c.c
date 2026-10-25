#include "ctx.h"

typedef struct { u32 pad; u32 arr[14]; } Tbl;

extern u32 *data_02159030;
extern u32 data_02141888;
extern u32 *func_020038b8(u8 *p, u32 n);
extern void func_02090fcc(u8 *buf, u32 n, u32 v);
extern s32 func_0208c87c(u8 *p, u8 *buf);
extern void func_02090cfc(u32 *p, s32 v);

void func_02090e7c(u8 *p)
{
    Tbl *t;
    s16 i;
    u32 *v;
    char buf[68];

    t = (Tbl *)func_020038b8(p, 60);
    t->pad = 0;
    i = 0;
    do {
        t->arr[i] = 0;
        i = i + 1;
    } while (i < 14);
    data_02159030 = (u32 *)t;
    if (t->arr[0] != 0) {
        return;
    }
    v = func_020038b8(p, 44);
    func_02090fcc((u8 *)buf, 64, data_02141888);
    func_02090cfc(v, func_0208c87c(p, (u8 *)buf));
    data_02159030[1] = (u32)v;
    *data_02159030 = *data_02159030 | 1;
}
