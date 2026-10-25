#include "ctx.h"
extern u32 data_0213e4dc;
extern u32 data_02150e4c;
extern void func_0206c068(u32 a);
extern void func_02068d28(u32 a);
void func_0206ab64(void)
{
    if (data_0213e4dc != 0xffffffff) {
        func_0206c068(data_0213e4dc);
    }
    func_02068d28(data_02150e4c);
    data_02150e4c = 0;
}
