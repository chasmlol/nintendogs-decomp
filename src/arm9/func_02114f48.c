#include "ctx.h"

extern u8 *data_0215be48;
extern BOOL func_02003a44(void);

void func_02114f48(void)
{
    if (func_02003a44()) {
        *(u32 *)(data_0215be48 + 0x4868) = 1;
    }
}
