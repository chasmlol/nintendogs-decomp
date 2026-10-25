#include "ctx.h"

extern u32 data_0215be48;
extern u32 data_0214f004;
s32 func_02112320(u32 a, u32 b, u32 c);
void func_02108250(void);

void func_02100744(void)
{
    if (*(u32 *)(*(u8 **)&data_0215be48 + 0x4860) == 0) {
        return;
    }
    if ((*(u16 *)((u8 *)&data_0214f004 + 2) & 2) != 0) {
        if (func_02112320(2, *(u8 *)&data_0214f004, *((u8 *)&data_0214f004 + 1)) == 0) {
            func_02108250();
        }
    }
}
