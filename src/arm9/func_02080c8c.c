#include "ctx.h"

extern u16 data_02156004;
extern void func_0206cc88(void);
extern BOOL func_0206ce6c(u32 a, u32 b);
extern void func_0206ce94(u32 a, void (*cb)(void));
extern void func_02080c48(void);

void func_02080c8c(void)
{
    if (data_02156004 == 0) {
        data_02156004 = 1;
        func_0206cc88();
        do {
        } while (!func_0206ce6c(12, 1));
        func_0206ce94(12, func_02080c48);
    }
}
