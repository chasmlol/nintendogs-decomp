#include "ctx.h"

extern u32 data_0214e5a8;
extern u32 data_0214e5ac;
extern void func_02000dec(void);
extern void func_02000ee8(void);
extern void func_02000eac(void);
extern void func_02000e4c(void);
extern void func_0206cc88(void);
extern BOOL func_0206ce6c(u32 a, u32 b);
extern void func_0206ce94(u32 a, u32 b);

void func_020010b4(void)
{
    BOOL bVar1;

    if (data_0214e5a8 == 0) {
        data_0214e5a8 = 1;
        func_02000dec();
        func_0206cc88();
        do {
            bVar1 = func_0206ce6c(13, 1);
        } while (!bVar1);
        func_0206ce94(13, (u32)func_02000eac);
        func_02000ee8();
        func_0206ce94(13, 0);
        func_0206ce94(13, (u32)func_02000e4c);
        data_0214e5ac = 0;
        return;
    }
}
