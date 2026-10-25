#include "ctx.h"

extern void func_0206a59c(void);
extern void func_02074928(void);

void func_02077cec(void)
{
    func_0206a59c();
    func_02074928();
    *(vu32 *)0x04000600 = (*(vu32 *)0x04000600 & 0x3fffffffu) | 0x80000000u;
}
