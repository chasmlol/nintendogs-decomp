#pragma avoid_byte strb
#include "ctx.h"

typedef struct { s32 x; s32 y; s32 z; } V3;
typedef struct { u8 d[0x85c]; } AEnt;
typedef struct { u8 d[316]; } BEnt;
typedef struct { u8 d[64]; } CEnt;

typedef struct {
    u8 pad0[4];
    u8 f04;
    s8 f05;
    s8 f06;
    s8 f07;
    s8 f08;
    s8 f09;
    s8 f0a;
    u8 f0b;
    u8 f0c;
    u8 f0d;
    u8 f0e;
    u8 f0f;
    u8 f10;
    s8 f11;
    s8 f12;
    u8 f13;
    u8 f14;
    s8 f15;
    s8 f16[3];
    u8 f19[3];
    u8 f1c[3];
    u8 pad1f;
    s16 f20;
    u16 f22;
    u16 f24;
    u16 f26;
    u16 f28;
    u16 f2a;
    u16 f2c[6];
    u16 f38[3];
    u16 pad3e;
    u32 f40;
    s32 f44;
    u32 f48[3];
    u32 f54[3];
    u32 f60;
    u32 f64;
    u32 f68;
    u32 f6c;
    s32 f70;
    V3 v74;
    V3 v80;
    V3 v8c;
    u32 f98;
    u32 f9c;
    u32 fa0;
    u32 fa4[64];
    AEnt a[3];
    BEnt b[3][20];
    CEnt c[3][20];
    V3 v73c8;
    V3 v73d4;
    u32 f73e0[9];
    u32 f7404;
    u32 f7408;
    u32 f740c[3];
    u32 f7418;
    u32 f741c;
    u32 f7420;
} Game;

typedef struct { u8 pad[0x20]; s32 f20; u8 pad2[4]; s32 f28; } Res;

extern Game *data_0214f464;
extern u32 data_0214f460;
extern u32 data_0213b448;
extern u8 *data_0214f45c;
extern u16 *data_0215942c;

Res *func_0200c498(s32 a, s32 b);
void func_02095670(AEnt *p);
void func_0206c7bc(u16 a, void *p, u32 n);

static inline void VEC_Set(V3 *v, s32 x, s32 y, s32 z)
{
    v->x = x;
    v->y = y;
    v->z = z;
}

static inline void MI_CpuClear16(void *dest, u32 size)
{
    vu16 v = 0;
    func_0206c7bc(v, dest, size);
}

void func_02043edc(void)
{
    s8 i;
    s8 k;
    s8 j;
    s16 m;
    s16 n;
    Res *res;

    data_0214f460 = 0;
    data_0214f464->f10 = 0;
    data_0214f464->f11 = -1;
    data_0214f464->f12 = -1;
    for (i = 0; i < 3; i++) {
        data_0214f464->f19[i] = 0;
        data_0214f464->f1c[i] = 0;
        data_0214f464->f48[i] = 0;
        data_0214f464->f54[i] = 0;
        data_0214f464->f740c[i] = 0;
        func_02095670(&data_0214f464->a[i]);
        for (k = 0; k < 20; k++) {
            MI_CpuClear16(&data_0214f464->b[i][k], sizeof(BEnt));
            MI_CpuClear16(&data_0214f464->c[i][k], sizeof(CEnt));
        }
    }
    data_0214f464->f7420 = 0;
    data_0214f464->f60 = 0;
    for (j = 0; j < 64; j++) {
        data_0214f464->fa4[j] = 0;
    }
    VEC_Set(&data_0214f464->v74, 0, 0, 0);
    VEC_Set(&data_0214f464->v80, 0, 0, 0);
    VEC_Set(&data_0214f464->v8c, 0, 0, 0);
    data_0214f464->f98 = 0;
    data_0214f464->f9c = 0;
    data_0214f464->fa0 = 0;
    data_0214f464->f06 = -1;
    for (j = 0; j < 3; j++) {
        data_0214f464->f38[j] = 0;
    }
    for (j = 0; j < 3; j++) {
        data_0214f464->f16[j] = -1;
    }
    data_0214f464->f15 = -1;
    data_0214f464->f64 = 0;
    data_0214f464->f68 = 0;
    data_0214f464->f6c = 0;
    data_0214f464->f70 = -4096;
    if (data_0213b448 != 0) {
        data_0214f464->f26 = 180;
    } else {
        data_0214f464->f26 = 0;
    }
    data_0214f464->f04 = 0;
    data_0214f464->f28 = 0;
    data_0214f464->f07 = -1;
    data_0214f464->f08 = -1;
    data_0214f464->f09 = -1;
    data_0214f464->f40 = 0;
    data_0214f464->f14 = 0;
    data_0214f464->f2c[0] = 0;
    data_0214f464->f2c[1] = 0;
    data_0214f464->f2c[2] = 0;
    data_0214f464->f2c[3] = 0;
    data_0214f464->f2c[4] = 0;
    data_0214f464->f2c[5] = 0;
    data_0214f464->f0b = 1;
    data_0214f464->f0c = 0;
    data_0214f464->f24 = 0;
    data_0214f464->f05 = -1;
    data_0214f464->f0d = 1;
    data_0214f464->f0e = 0;
    data_0214f464->f0f = 0;
    data_0214f464->f22 = 0;
    VEC_Set(&data_0214f464->v73c8, 0, 0, 0);
    VEC_Set(&data_0214f464->v73d4, 0, 0, 0);
    for (j = 0; j < 9; j++) {
        data_0214f464->f73e0[j] = 0;
    }
    data_0214f464->f2a = 0;
    data_0214f464->f0a = -1;
    data_0214f464->f20 = -1;
    data_0214f464->f7408 = 0;
    data_0214f464->f7404 = 0;
    data_0214f464->f741c = 0;
    data_0214f464->f7418 = 0;
    data_0214f464->f44 = -1;
    data_0214f464->f13 = 3;
    if (*data_0215942c != 3) {
        return;
    }
    res = func_0200c498(0, 0);
    if (res != 0) {
        data_0214f464->v74 = *(V3 *)((u8 *)res + 8);
    }
    n = *(s16 *)(*(u8 **)(data_0214f45c + 0x20) + 0x26);
    for (m = 0; m < n; m++) {
        res = func_0200c498(9, m);
        if (res != 0 && res->f28 != 0) {
            data_0214f464->f2c[3] = res->f20 + 1;
        }
    }
}
