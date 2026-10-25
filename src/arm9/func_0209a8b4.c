#include "ctx.h"

typedef struct {
    u16 h0;
    u16 h2;
    u16 h4;
    u16 h6;
    u16 h8;
    u8 pad[2];
    u32 w12;
    u32 w16;
} Blk;

extern void *func_020038b8(void *p, u32 n);
extern void func_020d8018(void *a, u32 b, u32 c);
extern void *data_02159068;

void func_0209a8b4(void *param_1, u32 param_2, u32 param_3)
{
    Blk *p;

    p = (Blk *)func_020038b8(param_1, 20);
    p->h0 = 0;
    p->h2 = 0;
    p->h4 = 0;
    p->h6 = 0;
    p->h8 = 0;
    p->w12 = 0;
    p->w16 = 0;
    func_020d8018(param_1, param_2, param_3);
    data_02159068 = p;
}
