#include "ctx.h"

extern u8 *data_ov016_0215d1c0;

void func_0208010c(u8 *p, u32 n);
void func_0206b3e4(u8 *p, u32 z, u32 n);

void func_ov016_0215c6c0(void)
{
    func_0208010c(data_ov016_0215d1c0 + 4, 0x600);
    func_0206b3e4(data_ov016_0215d1c0 + 4, 0, 0x600);
}
