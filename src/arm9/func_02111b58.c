#include "ctx.h"

extern u32 data_0215be48;
extern u8 data_0214f138[];

BOOL func_02111b58(void)
{
    u8 *p = *(u8 **)&data_0215be48;
    if (*(u32 *)(p + 0xc000 + 0x844) == 0) {
        if (*(u16 *)(data_0214f138 + 4) == 2) {
            return TRUE;
        }
    }
    return FALSE;
}
