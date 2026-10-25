#include "ctx.h"

extern u8 *data_02152f3c;
extern u8 data_02153d4c[];
extern u8 data_02153d50[];
extern u8 data_02153d54[];

typedef struct {
    u32 w[3];
} T3;

void func_0207af14(u32 *param_1, u32 *param_2, u8 *param_3, u32 param_4)
{
    u32 *p1;
    u32 bVar1;
    u32 b;
    u8 *g;
    u32 *w;
    u32 c;

    p1 = param_1;
    bVar1 = param_3[3];
    if ((param_4 & 4) != 0) {
        p1[0] = p1[0] | 1;
        if ((bVar1 & 2) != 0) {
            b = param_3[1];
            g = data_02152f3c;
            w = (u32 *)(g + 196 + (b >> 5) * 4);
            *w = *w | (1u << (b & 31));
        }
    } else {
        p1[1] = param_2[0];
        p1[2] = param_2[1];
        p1[3] = param_2[2];
        if ((bVar1 & 2) != 0) {
            b = param_3[1];
            g = data_02152f3c;
            w = (u32 *)(g + 196 + (b >> 5) * 4);
            *w = *w & ~(1u << (b & 31));
            *(u32 *)(data_02153d4c + b * 24) = param_2[3];
            *(u32 *)(data_02153d50 + b * 24) = param_2[4];
            *(u32 *)(data_02153d54 + b * 24) = param_2[5];
        }
    }
    if ((bVar1 & 1) != 0) {
        c = param_3[2];
        p1[0] = p1[0] | 0x20;
        g = data_02152f3c;
        if ((*(u32 *)(g + 0xc4 + (c >> 5) * 4) & (1u << (c & 31))) != 0) {
            p1[0] = p1[0] | 8;
        } else {
            *(T3 *)&p1[4] = *(T3 *)(data_02153d4c + c * 24);
        }
    }
    p1[0] = p1[0] | 0x10;
}
