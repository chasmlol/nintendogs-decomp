#include "ctx.h"

extern struct Obj *data_02159458;
extern u32 func_01ffdb08(int);
extern void func_02029290(u32, int, int);

struct Obj {
    char pad[2];
    s16 field2;
};

void func_ov004_0215c0d4(void)
{
    u32 uVar1 = func_01ffdb08(data_02159458->field2);
    func_02029290(uVar1, 0x51, 1);
}
