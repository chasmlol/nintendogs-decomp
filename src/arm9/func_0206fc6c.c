#include "ctx.h"

extern int data_02150f54;
extern int data_02151004;
u32 func_02080b08(void);
void func_02080b1c(u32 s);
int *func_0206fd04(void);
void func_0206c804(u32 *p, int *q, int n);

u32 func_0206fc6c(u32 *param_1)
{
    int *piVar1;
    u32 s;

    s = func_02080b08();
    if (data_02150f54 != 1) {
        func_02080b1c(s);
        return 0;
    }
    piVar1 = func_0206fd04();
    if ((piVar1 == 0) || (*piVar1 != 0)) {
        func_02080b1c(s);
        return 0;
    }
    func_0206c804(param_1, &data_02151004, 0x9c);
    func_02080b1c(s);
    return 1;
}
