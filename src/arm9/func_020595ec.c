#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026478(int p);
extern void func_020256a0(int p);
extern int *data_0214f464;

typedef struct { u8 pad[0x152]; u16 s0; } Obj;

void func_020595ec(int param_1)
{
    int iVar1;
    int *piVar2;

    ((Obj *)param_1)->s0 = 238;
    *(u8 *)(param_1 + 151) = 1;
    func_02026478(param_1);
    func_020256a0(param_1);
    piVar2 = data_0214f464;
    iVar1 = *piVar2 * 0x10dcd + 1;
    *piVar2 = iVar1;
    *(u32 *)((u8 *)param_1 + 0x464) = (u16)((u32)(iVar1 * 0x10000) >> 0x1f);
}
