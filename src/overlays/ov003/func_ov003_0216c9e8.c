#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(int p);
extern void func_020255a4(int p);
extern void func_02023654(int p, int a, int b);
extern void func_0202db24(int p, int a);

void func_ov003_0216c9e8(int param_1)
{
    s16 x;
    u32 v;
    *(u16 *)(param_1 + 256 + 82) = 0x18b;
    x = *(s16 *)(param_1 + 0xee);
    if (x == 0x1ce) {
        goto zero;
    }
    if (x != 0x1cf) {
        goto nine;
    }
zero:
    v = 0;
    goto join;
nine:
    v = 9;
join:
    *(u8 *)(param_1 + 147) = v;
    *(u8 *)(param_1 + 152) = 9;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 7, 1);
    func_0202db24(param_1, 7);
}
