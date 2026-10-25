#include "ctx.h"

extern void func_02089da8(void);
extern void func_0206ce94(int a, void *b);
extern BOOL func_02089c68(void);
extern BOOL func_0206ce6c(int a, int b);
extern void func_02080b78(int a);

void func_02089d3c(void)
{
    BOOL bVar1;

    func_0206ce94(7, (void *)func_02089da8);
    bVar1 = func_02089c68();
    if (!bVar1) {
        return;
    }
    bVar1 = func_0206ce6c(7, 1);
    if (bVar1) {
        return;
    }
    do {
        func_02080b78(100);
        bVar1 = func_0206ce6c(7, 1);
    } while (!bVar1);
}
