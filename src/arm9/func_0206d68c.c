#include "ctx.h"

typedef struct {
    u32 flag;
    u32 f1;
    u32 f2;
    u32 f3;
    u32 f4;
    u32 f5;
    u32 f6;
    u32 f7;
} GlobalState;

extern GlobalState data_02150f30;
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 a, u32 *p);
extern int func_0206d7e8(void);

u32 func_0206d68c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 uVar3;
    u32 *pf;
    u32 r;

    r = func_02080b08();
    pf = &data_02150f30.flag;
    if (*pf != 0) {
        func_02080b1c(r, pf);
        return 1;
    }
    *pf = 1;
    func_02080b1c(r, pf);
    data_02150f30.f5 = 2;
    data_02150f30.f6 = 0;
    data_02150f30.f2 = param_1;
    data_02150f30.f3 = param_2;
    data_02150f30.f1 = param_3;
    data_02150f30.f4 = param_4;
    if (func_0206d7e8() != 0) {
        uVar3 = 0;
    } else {
        uVar3 = 3;
    }
    return uVar3;
}
