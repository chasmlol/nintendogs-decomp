#include "ctx.h"

extern u8 *data_0215bfbc;
extern u8 *data_0215be48;
extern void func_0206c7bc(u32 a, u32 b, u32 c);
extern u32 func_02003500(void *a, s32 b);

void func_0210ed94(u32 param_1, void *param_2)
{
    vu16 t;
    s32 iVar2;
    u32 uVar1;

    t = 0;
    data_0215bfbc = (u8 *)param_1;
    func_0206c7bc(t, param_1, 168);
    iVar2 = 0x19000;
    switch (*(s32 *)(data_0215be48 + 0xa8)) {
    case 9:
        iVar2 = 0x40000;
        break;
    case 10:
        iVar2 = 0x1b800;
        break;
    }
    uVar1 = func_02003500(param_2, iVar2);
    *(u32 *)(data_0215bfbc + 4) = uVar1;
}
