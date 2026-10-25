#include "ctx.h"

extern s32 func_020039d8(void);
extern void func_020fcf48(void);

void func_020fecf4(s32 *p)
{
    *p = *p + 1;
    if (func_020039d8() != 0) {
        func_020fcf48();
    }
}
