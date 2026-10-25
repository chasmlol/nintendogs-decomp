#include "ctx.h"

extern u32 data_0213eb74;

void func_0205f050(u8 *buf, u32 n, u32 *g, u32 p);
u32 func_0207df48(u8 *buf);
void func_020785bc(u32 a, u32 b);

void func_0208b9e8(u32 param_1)
{
    u8 buf[64];
    u32 iVar1;

    func_0205f050(buf, 0x40, &data_0213eb74, param_1);
    iVar1 = func_0207df48(buf);
    func_020785bc(iVar1, 0);
}
