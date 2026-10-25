#include "ctx.h"

extern int data_0215ad40;
extern void func_0206f2bc(void);
extern void func_020d57d8(void);

void func_020d7fd4(void)
{
    if (data_0215ad40 != 0) {
        func_0206f2bc();
        func_020d57d8();
        data_0215ad40 = 0;
        return;
    }
}
