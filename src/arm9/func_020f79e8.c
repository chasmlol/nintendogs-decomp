#include "ctx.h"

extern BOOL func_020039d8(void);
extern void func_020fcf48(void);

void func_020f79e8(void)
{
    BOOL bVar1;
    bVar1 = func_020039d8();
    if (bVar1) {
        func_020fcf48();
        return;
    }
}
