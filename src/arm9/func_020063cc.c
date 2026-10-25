#include "ctx.h"

typedef struct {
    u16 h0, h1, h2, h3, h4, h5, h6;
    u16 h7;
    u16 h8;
    u16 h9;
    u16 h10;
    u32 w0, w1, w2, w3;
} Blk;

extern Blk data_0214efdc;

void func_020063cc(void)
{
    data_0214efdc.h0 = 0;
    data_0214efdc.h1 = 0;
    data_0214efdc.h2 = 0;
    data_0214efdc.h3 = 0;
    data_0214efdc.h4 = 0;
    data_0214efdc.h5 = 0;
    data_0214efdc.h6 = 0;
    data_0214efdc.h7 = 20;
    data_0214efdc.h8 = 8;
    data_0214efdc.h9 = 0;
    data_0214efdc.h10 = 0;
    data_0214efdc.w0 = 0;
    data_0214efdc.w1 = 0;
    data_0214efdc.w2 = 0;
    data_0214efdc.w3 = 0;
}
