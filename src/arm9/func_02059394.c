#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_02035164(s32 p);
extern void func_02026478(s32 p);
extern void func_020256a0(s32 p);
extern s32 *data_0214f464;

void func_02059394(s32 param_1)
{
    s32 iVar2;

    *(u16 *)((u8 *)param_1 + 256 + 82) = 242;
    *(u16 *)((u8 *)param_1 + 256 + 88) = (u16)func_02035164(param_1);
    ((u8 *)param_1)[147] = 5;
    ((u8 *)param_1)[151] = 1;
    func_02026478(param_1);
    func_020256a0(param_1);
    iVar2 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = iVar2;
    *(u32 *)((u8 *)param_1 + 0x464) = (u16)(((u32)iVar2 << 16) >> 31);
}
