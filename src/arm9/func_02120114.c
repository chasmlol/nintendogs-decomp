#include "ctx.h"

extern u32 data_0215be48;
void func_02003dc4(u32 v);
void func_02111be4(u32 a, s16 b, s16 c);
void func_02111b94(u32 a, s16 b, s16 c);

void func_02120114(u8 *param_1)
{
    s32 v;

    v = *(s32 *)(*(u8 **)&data_0215be48 + 0xbc);
    if (v == 23) goto case23;
    if (v == 25) goto case25;
    return;
case23:
    func_02003dc4(10);
    func_02111be4(20, *(s16 *)(param_1 + 0x1c18), *(s16 *)(param_1 + 0x1c1a));
    return;
case25:
    func_02111b94(20, *(s16 *)(param_1 + 0x1c18), *(s16 *)(param_1 + 0x1c1a));
}
