#include "ctx.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} T3;

extern u8 *data_0215be40;
extern u8 data_02145e4c[];
extern u8 data_02145e58[];
extern u8 data_02145e64[];

u8 *func_0208f698(u32 a);
void func_0208f7e4(u32 a, u32 b);
void func_0208f820(u32 a, u32 b);
void func_0208f7d0(u32 a, u32 b);
void func_0208d368(u32 a);

void func_020f15ec(u8 *param_1, s32 param_2, s32 param_3)
{
    T3 t0;
    T3 t1;
    T3 t2;
    u8 *X;
    u8 *P;
    u8 *t;
    u8 *S;
    s32 *q;
    s32 v12;
    s32 kind;

    if (param_2 != 0) goto L_328;
    X = param_1 + (s16)param_3 * 12;
    *(u32 *)data_0215be40 = *(u32 *)(X + 0x1b0);
    t0 = *(T3 *)data_02145e4c;
    t1 = *(T3 *)data_02145e58;
    t2 = *(T3 *)data_02145e64;
    P = *(u8 **)(data_0215be40 + 0x24);
    if (P == 0) goto L_23c;
    kind = *(u16 *)(P + 0x10);
    switch (kind) {
    case 2:
    case 14:
    case 20:
    case 28:
    case 52:
    case 53:
    case 54:
    case 71:
    case 84:
    case 85:
    case 86:
    case 95:
    case 96:
    case 97:
    case 99:
    case 100:
    case 102:
    case 103:
    case 107:
    case 109:
    case 110:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 165:
    case 170:
    case 177:
    case 178:
    case 190:
        goto L_1f4;
    default:
        goto L_23c;
    }
L_1f4:
    t0.a = 0xea8;
    t0.b = ~276;
    t0.c = 0x652;
    t1.a = 2;
    t1.b = 0xfc5;
    t1.c = 0x2af;
    t2.a = (s32)0xfffff996;
    t2.b = ~628;
    t2.c = 0xe73;
L_23c:
    S = *(u8 **)data_0215be40;
    *(s32 *)(S + 0x3c) = t0.a;
    q = (s32 *)(S + 0x3c);
    q[1] = t0.b;
    q[2] = t0.c;
    q[3] = t1.a;
    q[4] = t1.b;
    q[5] = t1.c;
    q[6] = t2.a;
    q[7] = t2.b;
    q[8] = t2.c;
    t = func_0208f698(*(u32 *)(data_0215be40 + 0x20));
    v12 = *(s32 *)(data_0215be40 + 0xc);
    *(s32 *)(t + 0x30) = 0;
    *(s32 *)(t + 0x34) = 0;
    *(s32 *)(t + 0x38) = v12;
    *(s32 *)(*(u8 **)data_0215be40 + 0x34) = *(s32 *)(data_0215be40 + 0x8);
    func_0208f7e4((u32)*(u8 **)data_0215be40, 0x39ce);
    func_0208f820((u32)*(u8 **)data_0215be40, 0x7fff);
    func_0208f7d0((u32)*(u8 **)data_0215be40, 3);
    if (*(u16 *)(data_0215be40 + 0x10) == 0xffff) {
        *(s32 *)(data_0215be40 + 0x18) = 0;
    } else {
        func_0208d368(*(u32 *)(data_0215be40 + 0x1c));
    }
L_328:
    if (param_2 != 2) {
        return;
    }
    *(s32 *)(data_0215be40 + 0x14) = 1;
    *(u32 *)data_0215be40 = 0;
}
