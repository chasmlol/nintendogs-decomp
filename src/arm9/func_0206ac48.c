#include "ctx.h"

extern u32 data_0213e4dc;
extern u32 data_02150e54;
extern u32 data_02150e50;
extern void func_0206c068(u32 a);
extern void func_020693ec(u32 a);

void func_0206ac48(void)
{
    if (data_0213e4dc != 0xffffffff) {
        func_0206c068(data_0213e4dc);
    }
    func_020693ec(data_02150e54);
    data_02150e54 = 0;
    data_02150e50 = 0;
}
