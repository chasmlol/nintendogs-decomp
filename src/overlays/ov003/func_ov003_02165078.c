#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(int a);
extern void func_02025548(int a);
extern void func_02034198(int a);
extern void func_ov003_0216df24(int a);

void func_ov003_02165078(int param_1)
{
    u8 *b;
    b = (u8 *)param_1;
    *(u16 *)((u32)(b + 256) + 82) = 0;
    b[152] = 9;
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02034198(param_1);
    func_ov003_0216df24(param_1);
}
