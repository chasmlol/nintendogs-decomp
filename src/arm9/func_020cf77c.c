#include "ctx.h"
extern u8 data_02142e68[];
extern u8 data_02126728[];
extern s32 func_020c8d68(void);
extern void func_02067e34(u32 *a, u32 *b, u32 *c);
extern void func_02006a30(u32 *a, u32 *b);
extern void func_01ff832c(s32 a, u32 *b, u32 *c, u32 *d);
void func_020cf77c(u32 *param_1, u32 *param_2)
{
    s64 lVar1;
    s32 iVar2;
    u32 loc[3];
    iVar2 = func_020c8d68();
    if (iVar2 != 0) {
        *(s32 *)data_02142e68 = -1;
    }
    iVar2 = *(s32 *)data_02142e68;
    if (iVar2 == -1) {
        *(s32 *)data_02142e68 = 10;
    } else if (iVar2 == 0) {
        *(s32 *)data_02142e68 = -2;
    } else {
        *(s32 *)data_02142e68 = iVar2 - 1;
    }
    if (*(s32 *)data_02142e68 <= 0) {
        return;
    }
    func_02067e34(param_1 + 3, param_1, loc);
    lVar1 = (s64)(s32)loc[0] * (s64)(s32)loc[0] + (s64)(s32)loc[1] * (s64)(s32)loc[1] + (s64)(s32)loc[2] * (s64)(s32)loc[2];
    if (lVar1 >= (s64)*(s64 *)data_02126728) {
        func_02006a30(loc, loc);
    }
    iVar2 = *(s32 *)data_02142e68;
    if (iVar2 > 5) {
        iVar2 = (10 - iVar2) * -0x800;
    } else {
        iVar2 = iVar2 * -0x800;
    }
    func_01ff832c(iVar2, loc, param_1, param_2);
}
