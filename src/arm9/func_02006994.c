#include "ctx.h"

typedef struct { void *p; u16 a; u16 b; } A8;
typedef struct { void *p; u32 x4; u32 x8; u32 xc; u16 h10; u16 pad12; u32 x14; u16 h18; u16 pad1a; u32 x1c; } B32;

extern u32 data_0214f00c;
extern A8 data_0214f010[8];
extern B32 data_0214f050[7];
extern u8 data_0213696c[];
extern u8 data_02136978[];

void func_02006994(u32 param_1)
{
    s32 i;

    data_0214f00c = param_1;
    for (i = 0; i < 8; i++) {
        data_0214f010[i].p = data_0213696c;
        data_0214f010[i].a = 255;
        data_0214f010[i].b = 0;
    }
    for (i = 0; i < 7; i++) {
        data_0214f050[i].p = data_02136978;
        data_0214f050[i].x4 = 0;
        data_0214f050[i].x8 = 0;
        data_0214f050[i].xc = 0;
        data_0214f050[i].h10 = 0;
        data_0214f050[i].x14 = 0;
        data_0214f050[i].h18 = 0;
        data_0214f050[i].x1c = 0;
    }
}
