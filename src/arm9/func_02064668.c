#include "ctx.h"
extern void func_02080d84(u8 *p);

u16 func_02064668(void)
{
    u8 buf[12];
    s32 iVar2;
    u8 *pbVar1;
    s32 x;
    u16 sum;
    func_02080d84(buf);
    iVar2 = 0;
    sum = 0;
    pbVar1 = buf;
    do {
        iVar2 = iVar2 + 1;
        sum = (u16)(sum + *pbVar1);
        pbVar1 = pbVar1 + 1;
    } while (iVar2 < 6);
    sum = (u16)(sum + *(u32 *)0x027ffc3c);
    sum = (u16)(sum * 7);
    x = (s32)sum;
    return (u16)(x % 20 + 200);
}
