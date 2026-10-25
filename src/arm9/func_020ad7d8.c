#include "ctx.h"

typedef struct { u16 a; u16 b; } H2;
extern u32 data_02159440;
extern void func_0210809c(u32 a);
extern void func_02108104(void);
extern void func_020af664(int a);

void func_020ad7d8(s16 *param_1, int param_2, u32 param_3)
{
    s16 sv;
    u16 t2;
    u16 t1;
    param_1[20] = (s16)param_2;
    sv = param_1[19];
    param_1[64] = sv;
    ((u16 *)param_1)[23] = 4;
    ((u16 *)param_1)[24] = 0;
    switch (param_2) {
    case 0: case 1: case 2: case 3: case 4:
    case 22:
        break;
    case 5:
        *(u16 *)&data_02159440 = param_1[19];
        return;
    case 12:
        func_02108104();
        return;
    case 11:
        func_0210809c(param_3);
        return;
    case 35:
        return;
    case 36:
        return;
    case 21:
        *(H2 *)&((u16 *)param_1)[137] = *(H2 *)&((u16 *)param_1)[135];
        func_020af664((int)param_1);
        break;
    }
}
