#include "ctx.h"

extern s32 func_020039d8(void);
extern void func_020fcf48(void);

void func_02114fa8(void)
{
    if (func_020039d8() != 0) {
        func_020fcf48();
    }
}
