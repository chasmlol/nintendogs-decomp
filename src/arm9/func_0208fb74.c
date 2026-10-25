#pragma avoid_byte strb
#include "ctx.h"
extern void func_0208f5c4(u8 *p, u32 n);
extern void func_02066b80(u32 *p);
extern void func_01ffe474(void);
extern void func_01ffe2f8(void);
void func_0208fb74(u8 *param_1)
{
    func_0208f5c4(param_1, 5);
    *(u32 *)(param_1 + 0x14) = (u32)func_01ffe474;
    *(u32 *)(param_1 + 0x18) = (u32)func_01ffe2f8;
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u16 *)(param_1 + 0x20) = 0;
    {
        u8 *q;
        u32 zero = 0;
        u32 tmp;
        q = (__typeof__(q))((u32)(param_1) + (34));
        *(u8 *)(q) = (u8)(zero);
    }
    {
        u8 *q = param_1 + 0x23;
        u32 v = 31;
        *(u8 *)(q) = (u8)(v);
    }
    *(u32 *)(param_1 + 0x24) = 0x1000;
    *(u32 *)(param_1 + 0x28) = 0x1000;
    *(u32 *)(param_1 + 0x2c) = 0x1000;
    *(u32 *)(param_1 + 0x30) = 0;
    *(u32 *)(param_1 + 0x34) = 0;
    *(u32 *)(param_1 + 0x38) = 0;
    func_02066b80((u32 *)(param_1 + 0x3c));
    *(u16 *)(param_1 + 0x6c) = 0;
    *(u16 *)(param_1 + 0x6e) = 0;
    *(u16 *)(param_1 + 0x70) = 0;
    *(u16 *)(param_1 + 0x72) = 0;
    *(u32 *)(param_1 + 0x74) = 0;
    *(u32 *)(param_1 + 0x78) = 0;
    *(u32 *)(param_1 + 0x7c) = 0;
    *(u32 *)(param_1 + 0x80) = 0;
    *(u16 *)(param_1 + 0x84) = 0;
    *(u16 *)(param_1 + 0x86) = 0;
}
