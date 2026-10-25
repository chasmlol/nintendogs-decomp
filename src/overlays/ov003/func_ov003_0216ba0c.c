#pragma avoid_byte strb
#include "ctx.h"

extern int func_02020894(int a);
extern void func_020264f4(int a);
extern void func_020255a4(int a);
extern void func_0202db24(int a, int b);

void func_ov003_0216ba0c(int param_1)
{
    int iVar1;

    *(u16 *)((u8 *)param_1 + 256 + 82) = 113;
    iVar1 = func_02020894(param_1);
    *(u16 *)((u8 *)param_1 + 256 + 84) = (u16)iVar1;
    ((u8 *)param_1)[151] = 4;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 6);
}
