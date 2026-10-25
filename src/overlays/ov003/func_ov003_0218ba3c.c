#include "ctx.h"

void func_ov003_0218d8c0(int a);
void func_02044c48(int a);
void func_0202db24(int a, int b);
void func_02029504(int a);
void func_02023590(int a);

void func_ov003_0218ba3c(int param_1)
{
    *(u32 *)(param_1 + 0x488) = 0;
    func_ov003_0218d8c0(param_1);
    func_02044c48((int)*(s8 *)(param_1 + 0x88));
    func_0202db24(param_1, 0);
    func_02029504(param_1);
    func_02023590(param_1);
}
