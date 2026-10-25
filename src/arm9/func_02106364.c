#include "ctx.h"

extern u8 *data_0215be48;
void func_02091f38(void *p);
void func_02106d20(void);
void func_021063c0(void);

void func_02106364(void)
{
    func_02091f38(data_0215be48 + 0x4cc8);
    *(u32 *)(data_0215be48 + 0x4cec) = (u32)func_02106d20;
    *(u32 *)(data_0215be48 + 0x4cf0) = (u32)func_021063c0;
}
