#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);
extern void func_0202db24(u8 *p, u32 b);
extern int func_02020824(u8 *p);

void func_ov003_0216b81c(u8 *param_1)
{
    int r;
    *(u16 *)((u8 *)param_1 + 256 + 82) = 39;
    r = func_02020824(param_1);
    *(u16 *)((u8 *)param_1 + 256 + 84) = (u16)r;
    *(param_1 + 151) = 4;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 3, 2);
    func_0202db24(param_1, 3);
}
