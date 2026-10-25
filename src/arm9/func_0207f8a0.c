#include "ctx.h"
extern u8 data_02155cf8[];
void func_0207f8a0(u8 *param_1)
{
    u8 *cur = *(u8 **)(data_02155cf8 + 0xc);
    u8 *prev = NULL;
    while (cur != NULL && cur != param_1) {
        prev = cur;
        cur = *(u8 **)(cur + 0x68);
    }
    if (prev == NULL) {
        *(u8 **)(data_02155cf8 + 0xc) = *(u8 **)(param_1 + 0x68);
    } else {
        *(u8 **)(prev + 0x68) = *(u8 **)(param_1 + 0x68);
    }
}
