#include "ctx.h"
extern u8 data_0215be48[];
extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
void func_0201d380(u8 *param_1)
{
    s32 iVar1;
    *(s16 *)(param_1 + 0x152) = 0;
    func_02026c24(param_1);
    func_02025548(param_1);
    iVar1 = -1;
    if (*(u32 *)(*(u8 **)data_0215be48 + 0xb8) == 0x1d) {
        iVar1 = *(s32 *)(*(u8 **)data_0215be48 + 0xe0);
    }
    switch (iVar1) {
    case 0:
        *(u32 *)(param_1 + 0x464) = 1;
        break;
    case 1:
        *(u32 *)(param_1 + 0x464) = 2;
        break;
    case 2:
        *(u32 *)(param_1 + 0x464) = 3;
        break;
    }
}
