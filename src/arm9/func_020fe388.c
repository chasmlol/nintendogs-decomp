#include "ctx.h"

extern BOOL func_020039d8(void);
extern void func_020fcf48(void);

void func_020fe388(s32 *param_1)
{
    *param_1 = *param_1 + 1;
    if (func_020039d8()) {
        func_020fcf48();
    }
}
