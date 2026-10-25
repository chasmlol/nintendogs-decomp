#include "ctx.h"

extern u8 *data_ov005_02167f00;

/* the flag is a 1-bit field at bit 1 of the word at +0x1c: the bitfield store masks the value with and #1 */
typedef struct {
    u32 lo : 1;
    u32 flag : 1;
    u32 rest : 30;
} FlagWord;

void func_ov005_02161598(u32 param_1)
{
    u8 *obj;
    /* the global is written in each block so it is read again in the second block */
    obj = *(u8 **)((u8 *)data_ov005_02167f00 + 0x4c);
    if (obj != 0) {
        ((FlagWord *)(obj + 0x1c))->flag = (param_1 == 0);
    }
    obj = *(u8 **)((u8 *)data_ov005_02167f00 + 0x50);
    if (obj == 0) {
        return;
    }
    ((FlagWord *)(obj + 0x1c))->flag = (param_1 == 0);
}
