#include "ctx.h"
extern u32 data_0215be34;
extern void func_0208122c(int a, int b, void *c);

#define GLOBAL_VAL (*(int **)&data_0215be34 != 0 ? **(int **)&data_0215be34 : 0)

void func_020d8ae0(int param_1)
{
    func_0208122c(GLOBAL_VAL, 58, (void *)(param_1 + 188));
    func_0208122c(GLOBAL_VAL, 59, (void *)(param_1 + 188));
    func_0208122c(GLOBAL_VAL, 60, (void *)(param_1 + 188));
}
