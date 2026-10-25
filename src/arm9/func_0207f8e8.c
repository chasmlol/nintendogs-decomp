#include "ctx.h"
extern u8 data_02155cf8[];
void func_0207f8e8(u8 *param_1)
{
    u8 *cur;
    u8 *prev;
    u8 *head;
    head = *(u8 **)(data_02155cf8 + 0xc);
    cur = head;
    prev = NULL;
    while (cur != NULL && *(u32 *)(cur + 0x70) < *(u32 *)(param_1 + 0x70)) {
        prev = cur;
        cur = *(u8 **)(cur + 0x68);
    }
    if (prev == NULL) {
        *(u8 **)(param_1 + 0x68) = head;
        *(u8 **)(data_02155cf8 + 0xc) = param_1;
    } else {
        *(u8 **)(param_1 + 0x68) = *(u8 **)(prev + 0x68);
        *(u8 **)(prev + 0x68) = param_1;
    }
}
