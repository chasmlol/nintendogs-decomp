#include "ctx.h"
extern u8 data_0215be48[];
extern void func_021045fc(u32 a, u32 b);
extern void func_02105d30(u32 *p);
extern void func_0210a2f0(u32 a);
extern void func_02109b84(u32 a);
void func_021096a0(u32 param_1)
{
    u8 *iVar2;
    u32 iVar1;
    iVar2 = (u8 *)(param_1 + 0x1c48);
    iVar1 = *(u32 *)(iVar2 + 8);
    if (iVar1 != 0) {
        func_021045fc(param_1, iVar1);
        *(u32 *)(iVar2 + 8) = 0;
    }
    func_02105d30((u32 *)(param_1 + 12));
    switch (*(u32 *)(*(u8 **)data_0215be48 + 0xa8)) {
    case 0:
        break;
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        func_0210a2f0(param_1);
        return;
    case 6:
        func_02109b84(param_1);
        break;
    case 7:
        break;
    case 8:
        break;
    }
}
