#include "ctx.h"
extern u32 data_0213e4dc;
extern u32 data_02150e64;
extern void func_0206c068(u32 a);
extern void func_02068c9c(u32 a);
void func_0206aa80(void)
{
    if (data_0213e4dc != 0xffffffff) {
        func_0206c068(data_0213e4dc);
    }
    func_02068c9c(data_02150e64);
    data_02150e64 = 0;
}
