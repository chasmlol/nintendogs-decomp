#include "ctx.h"

extern u32 data_021517ec;
extern u32 data_021517f8;
extern u8 *func_0207ceb0(void *a, u32 b);
extern void func_0207024c(u8 *p);
extern void func_0207cec8(void *a, u8 *b);
extern void func_02070288(u8 *p);

u8 *func_020701d0(s32 param_1)
{
    u8 *puVar1;

    puVar1 = func_0207ceb0(&data_021517ec, 0);
    if (puVar1 == NULL) {
        puVar1 = func_0207ceb0(&data_021517f8, 0);
        if (param_1 < (s32)puVar1[0x3d]) {
            return NULL;
        }
        func_0207024c(puVar1);
    }
    func_0207cec8(&data_021517ec, puVar1);
    puVar1[0x3d] = (u8)param_1;
    func_02070288(puVar1);
    return puVar1;
}
