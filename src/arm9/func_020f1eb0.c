#include "ctx.h"

extern u8 *data_0215be48;
extern s32 func_020039d8(void);
extern void func_020fcf48(void);

void func_020f1eb0(void)
{
    if (*(s32 *)(data_0215be48 + 0xbc) == 5) {
        if (func_020039d8() != 0) {
            return;
        }
        func_020fcf48();
    } else {
        func_020fcf48();
    }
}
