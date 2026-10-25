#include "ctx.h"

extern u8 *data_0215900c;
extern void func_02003804(u32 p);

void func_0208dcf0(void)
{
    if (data_0215900c != 0) {
        func_02003804(*(u32 *)(data_0215900c + 0x28));
    }
}
