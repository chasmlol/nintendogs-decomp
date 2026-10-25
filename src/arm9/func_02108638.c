#include "ctx.h"

extern int data_0215be48;
extern int data_0215bf9c;
extern void func_0210a854(int a);
extern void func_02104288(void);
extern u32 func_020fc8f8(int a, int b, int c, int d);

typedef struct {
    u8 pad[0x1d0c];
    u32 f1d0c;
} PA;

void func_02108638(int param_1, int param_2)
{
    int iVar3;
    u32 *p;
    int *pt;

    if ((*(int *)(data_0215be48 + 0xa8) == 6) && (*(int *)data_0215bf9c != 9)) {
        func_0210a854(9);
    }
    {
        u32 q = (u32)data_0215be48 + 4096;
        *(int *)(q + 0xd1c) = 0xe;
    }
    func_0210a854(9);
    iVar3 = data_0215be48;
    if (*(int *)(iVar3 + 0xb8) == 2) {
        u32 v;
        ((PA *)iVar3)->f1d0c = 2;
        v = ((PA *)iVar3)->f1d0c;
        pt = (int *)(iVar3 + 0x1d0c);
        if (v != 4) {
            pt[1] = v;
        }
    }
    func_02104288();
    p = (u32 *)(data_0215bf9c + 0x160);
    p[1] = param_1;
    p[6] = param_2;
    p[7] = func_020fc8f8(0, 0, 0x1af6, 0);
    p[8] = 1;
}
