#include "ctx.h"

extern u32 data_0214f130;
extern u32 data_0215be48;

typedef struct { u32 w[5]; } T5;

void func_020fc99c(void)
{
    u32 iVar1;
    u32 iVar2;
    u32 iVar4;
    u32 iVar5;
    u32 iVar6;
    u8 *B = (u8 *)data_0215be48;
    u8 *A = (u8 *)data_0214f130;
    u32 *pa;
    u32 *pb;
    u32 *Q;
    u32 *P;
    P = (u32 *)(B + 0x53f4);
    *(u32 *)(B + 0x53f4) = *(u32 *)(A + 0x1c) + 2000;
    pa = (u32 *)(A + 0x1c);
    pb = (u32 *)(A + 0x2c);
    P[1] = pa[1];
    Q = P + 5;
    P[2] = pa[2];
    P[3] = pb[0];
    P[4] = pb[1];
    iVar1 = (P[4] != Q[4]);
    iVar2 = (P[3] != Q[3]);
    iVar4 = (P[2] != Q[2]);
    iVar5 = (P[0] != Q[0]);
    iVar6 = (P[1] != Q[1]);
    if ((iVar5 | iVar6 | iVar4 | iVar2 | iVar1) != 0) {
        P[10] = 1;
    } else {
        P[10] = 0;
    }
    *(T5 *)Q = *(T5 *)P;
}
