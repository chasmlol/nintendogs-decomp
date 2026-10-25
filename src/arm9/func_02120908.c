#include "ctx.h"

extern u8 *data_0215be48;
extern s32 func_02111b58(void);
extern void func_02111b3c(void);
extern void func_020fcf48(void);

void func_02120908(void)
{
    s32 iVar1;
    if (*(s32 *)(data_0215be48 + 0xbc) == 0x17) {
        iVar1 = func_02111b58();
        if (iVar1 != 0) {
            func_020fcf48();
            func_02111b3c();
        }
    } else {
        func_020fcf48();
    }
}
