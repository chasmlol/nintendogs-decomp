#include "ctx.h"

extern int func_0208fb00(int, int, int);
extern void func_0208f7e4(int, int);
extern void func_0208f820(int, int);
extern void func_0208f7d0(int, int);
extern void func_0208f544(int, void *);
extern void func_ov004_0216e18c(void);

int func_ov004_0216e4b0(int param_1, int param_2)
{
    int r;
    r = func_0208fb00(param_1, 140, param_2);
    func_0208f7e4(r, 0x39ce);
    func_0208f820(r, 0x7fff);
    func_0208f7d0(r, 3);
    func_0208f544(r, func_ov004_0216e18c);
    return r;
}
