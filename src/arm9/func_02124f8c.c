#include "ctx.h"
extern u8 *data_0215be48;
extern BOOL func_02003a44(void);
void func_02124f8c(void)
{
    BOOL bVar1 = func_02003a44();
    if (bVar1) {
        *(u32 *)(data_0215be48 + 0x4000 + 0x868) = 1;
    }
}
