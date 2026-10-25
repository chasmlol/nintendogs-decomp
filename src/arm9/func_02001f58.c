#include "ctx.h"

typedef struct {
    u32 flag;
    u32 f1;
    u32 f2;
    u32 f3;
} GlobalState;

extern GlobalState data_0214e6c0;
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 r, u32 *p);
extern int func_02001c64(void);

u32 func_02001f58(int param_1, int param_2)
{
    u32 uVar3;
    u32 r;
    u32 *pf;

    r = func_02080b08();
    pf = &data_0214e6c0.flag;
    if (*pf != 0) {
        func_02080b1c(r, pf);
        return 1;
    }
    *pf = 1;
    func_02080b1c(r, pf);
    data_0214e6c0.f1 = param_1;
    data_0214e6c0.f2 = param_2;
    if (func_02001c64() != 0) {
        uVar3 = 0;
    } else {
        uVar3 = 3;
    }
    return uVar3;
}
