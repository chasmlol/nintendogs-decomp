#pragma avoid_byte strb
#include "ctx.h"

typedef struct { s8 v[3][3]; } Tbl33;
typedef struct { s32 v[8]; } Map8;

typedef struct {
    u8 pad0[0x22a2];
    s8 f22a2;
    u8 pad1[0x2305 - 0x22a3];
    u8 f2305;
    u8 pad2[0x2314 - 0x2306];
    s8 f2314;
} Work;

typedef struct {
    u8 pad[0x36c4];
    Work *work;
} Mgr;

extern Mgr *data_ov004_02170320;
extern const s8 data_ov004_0216fd54[][4];
extern const Tbl33 data_ov004_0216feb0;
extern const Map8 data_ov004_0216ff2c;

void func_ov004_0215c938(s32 param_1)
{
    Tbl33 tbl = data_ov004_0216feb0;
    Map8 map = data_ov004_0216ff2c;
    Work *w = data_ov004_02170320->work;
    w->f2314 += tbl.v[map.v[data_ov004_0216fd54[w->f2305][w->f22a2]]][param_1];
}
