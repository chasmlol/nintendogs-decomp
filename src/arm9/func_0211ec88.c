#include "ctx.h"

extern u8 data_0214dc34[];
extern u8 *data_0215be48;
extern void func_020fc610(u32 a, u8 *b, u32 c);
extern void func_02097b68(void);
extern void func_02003c58(u32 v);

void func_0211ec88(u8 *p)
{
    s32 st;
    func_020fc610(*(u32 *)(p + 0x934), data_0214dc34, 2);
    func_02097b68();
    st = *(s32 *)(data_0215be48 + 0xb4);
    if (st == 25) {
        goto call;
    }
    if (st != 27) {
        return;
    }
call:
    func_02003c58(10);
}
