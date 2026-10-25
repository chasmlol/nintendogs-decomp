#include "ctx.h"
extern u32 data_0213e4dc;
extern u32 data_02150e60;
extern u32 data_02150e5c;
extern u32 data_02150e58;
extern void func_0206c068(u32 a);
extern void func_020694a4(u32 a);
void func_0206ad84(void)
{
    if (data_0213e4dc != 0xffffffff) {
        func_0206c068(data_0213e4dc);
    }
    func_020694a4(data_02150e60);
    data_02150e60 = 0;
    data_02150e5c = 0;
    data_02150e58 = 0;
}
