#include "ctx.h"
extern u32 data_0213e4dc;
extern u32 data_02150e74;
extern u32 data_02150e70;
extern void func_0206c068(u32 a);
extern void func_020690f4(u32 a);
void func_0206bb08(void)
{
    if (data_0213e4dc != 0xffffffff) {
        func_0206c068(data_0213e4dc);
    }
    func_020690f4(data_02150e74);
    data_02150e74 = 0;
    data_02150e70 = 0;
}
