#include "ctx.h"

extern u32 data_0215be48;
extern void func_021129b4(s32 a, s32 b, s32 c, s32 d);
extern void func_02112a50(s32 a, s32 b, s32 c, s32 d);

void func_02111dfc(u32 param_1, u32 param_2)
{
    s32 iVar3;

    if (*(u8 **)&data_0215be48 == 0) {
        return;
    }
    *(u32 *)(*(u8 **)&data_0215be48 + 0x4890) = param_1;
    *(u32 *)(*(u8 **)&data_0215be48 + 0x4894) = param_2;
    iVar3 = 4;
    if ((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15 == 1) {
        iVar3 = 3;
    } else if ((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15 == 0) {
        iVar3 = 1;
    }
    if (iVar3 != 4) {
        func_021129b4(iVar3, 0x22, 0, 0);
        func_02112a50(iVar3, 0x22, param_1, param_2);
    }
}
