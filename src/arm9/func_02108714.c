#include "ctx.h"

extern u8 data_0215be48[];
extern u8 data_0215bf9c[];
extern void func_0210a854(int v);
extern void func_0210a2a0(int v);
extern void func_02104288(void);
extern int func_020fc8f8(int a, int b, int c, int d);

void func_02108714(int *param_1, int param_2)
{
    int iVar2;
    int iVar8;
    int *p;
    int *q;
    int rv;
    int off;

    if ((*(int *)(*(u8 **)data_0215be48 + 0xa8) == 6) && (**(int **)data_0215bf9c != 9)) {
        func_0210a854(9);
    }
    *(int *)(*(u8 **)data_0215be48 + 0x1d1c) = 8;
    func_0210a2a0(param_2);
    func_0210a854(9);
    iVar2 = (int)*(u8 **)data_0215be48;
    if (*(int *)(iVar2 + 0xb8) == 2) {
        *(int *)(iVar2 + 0x1d0c) = 1;
        off = 0x1d0c;
        q = (int *)(iVar2 + off);
        rv = *(int *)(iVar2 + 0x1d0c);
        if (rv != 4) {
            q[1] = rv;
        }
    }
    func_02104288();
    iVar8 = (int)*(u8 **)data_0215bf9c;
    *(int *)(iVar8 + 0x160) = 1;
    p = (int *)(iVar8 + 0x160);
    p[1] = param_1[0];
    p[2] = param_1[0];
    p[3] = param_1[1];
    p[4] = param_1[2];
    *(s16 *)(p + 5) = (s16)param_2;
    if (param_2 == 2) {
        p[7] = func_020fc8f8(0, 0, 0x1af4, 0);
    } else {
        p[7] = func_020fc8f8(0, 0, 0x1af5, 0);
    }
    p[8] = 1;
}
