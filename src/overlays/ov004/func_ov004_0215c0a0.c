#include "ctx.h"

extern char *data_02159458;
extern int func_01ffdb08(int);
extern void func_02029290(int, int, int);

void func_ov004_0215c0a0(void)
{
    int r;
    r = func_01ffdb08(*(s16 *)(data_02159458 + 2));
    func_02029290(r, 0x52, 1);
}
