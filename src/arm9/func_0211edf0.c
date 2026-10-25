#include "ctx.h"

extern u32 data_0215be48;
extern void func_02111be4(u32 a, u32 b, u32 c);
extern void func_02111b94(u32 a, u32 b, u32 c);
extern void func_02003dc4(u32 a);

void func_0211edf0(u8 *param_1)
{
    switch (*(u32 *)(data_0215be48 + 0xbc)) {
    case 24:
    case 26:
        goto LA;
    case 25:
    case 27:
        goto LB;
    default:
        goto END;
    }
LA:
    func_02111be4(20, *(s16 *)(param_1 + 0x1c18), *(s16 *)(param_1 + 0x1c1a));
    return;
LB:
    func_02003dc4(10);
    func_02111b94(20, *(s16 *)(param_1 + 0x1c18), *(s16 *)(param_1 + 0x1c1a));
END:
    return;
}
