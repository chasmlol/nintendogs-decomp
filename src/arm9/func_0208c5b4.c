#include "ctx.h"

extern u32 data_02157cc8;
extern u32 data_0213e9c0;
extern u32 data_0213ecbc;
extern void func_0205f050(void *buf, s32 n, void *src, u32 v);
extern void func_0207df48(void *buf);

void func_0208c5b4(u32 param_0)
{
    volatile u32 save;
    u8 buf[64];
    u8 *obj;
    u32 uVar2;
    save = param_0;
    obj = *(u8 **)&data_02157cc8;
    uVar2 = ((u32 *)&data_0213e9c0)[*(u16 *)(obj + 8)];
    func_0205f050(buf, 64, &data_0213ecbc, uVar2);
    func_0207df48(buf);
}
