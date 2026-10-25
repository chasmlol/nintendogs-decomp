#include "ctx.h"

extern u32 data_02159048;
extern u32 data_0215903c;
extern u32 data_02159038;
extern void func_0200719c(void *a, void *b);
extern void func_020963f4(u32 *p);
extern u32 func_02003500(u32 *p, u32 v);

void func_020963b0(u32 *param_1)
{
    func_0200719c(&data_02159048, &data_0215903c);
    func_020963f4(param_1);
    data_02159038 = func_02003500(param_1, 0x14c00);
}
