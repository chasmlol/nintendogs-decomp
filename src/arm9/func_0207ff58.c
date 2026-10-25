#include "ctx.h"

extern u32 data_02155cf8[];

u32 func_02080b08(void);
void func_02080b1c(u32 a);
void func_0207fe4c(u32 a, void *p);
void func_0207f4e0(void *p);

void func_0207ff58(u32 *param_1)
{
    u32 r4;
    u32 iVar1;

    r4 = func_02080b08();
    iVar1 = data_02155cf8[2];
    if (param_1[1] == iVar1) {
        param_1[2] = param_1[2] - 1;
        if (param_1[2] == 0) {
            func_0207fe4c(iVar1, param_1);
            param_1[1] = 0;
            func_0207f4e0(param_1);
        }
    }
    func_02080b1c(r4);
}
