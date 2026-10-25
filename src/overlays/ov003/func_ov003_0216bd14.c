#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(int a);
extern void func_020255a4(int a);
extern void func_0202db24(int a, int b);

void func_ov003_0216bd14(int param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x70;
    ((u8 *)param_1)[147] = 9;
    ((u8 *)param_1)[152] = 9;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 5);
}
