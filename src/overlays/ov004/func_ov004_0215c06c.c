#include "ctx.h"

struct Obj {
    u8 pad[2];
    s16 f;
};

extern struct Obj *data_02159458;
extern int func_01ffdb08(int);
extern void func_02029290(int, int, int);

void func_ov004_0215c06c(void)
{
    int v = func_01ffdb08(data_02159458->f);
    func_02029290(v, 80, 1);
}
