#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026aac(int a);
extern void func_02025bb0(int a);
extern void func_02023654(int a, int b, int c);

void func_ov003_02164a00(int param_1)
{
    s32 cond;

    *(u16 *)(param_1 + 256 + 82) = 0x13;
    ((u8 *)param_1)[147] = 5;
    func_02026aac(param_1);
    func_02025bb0(param_1);
    switch (*(s16 *)(param_1 + 0xee)) {
    case 0x39c:
    case 0x39e:
    case 0x3a0:
    case 0x3a2:
        ((u8 *)param_1)[152] = 7;
        break;
    case 0x39d:
    case 0x39f:
    case 0x3a1:
    case 0x3a3:
        ((u8 *)param_1)[152] = 8;
        break;
    default:
        cond = *(s8 *)(param_1 + 0x96);
        if (cond == 1) {
            ((u8 *)param_1)[152] = 7;
        } else {
            ((u8 *)param_1)[152] = 8;
        }
        break;
    }
    if (*(s8 *)(param_1 + 0x98) == 7) {
        func_02023654(param_1, 0x23, 5);
        return;
    }
    func_02023654(param_1, 0x23, 6);
}
