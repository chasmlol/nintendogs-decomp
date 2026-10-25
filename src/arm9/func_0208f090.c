#include "ctx.h"

void *func_020038b8(void *heap, u32 size);
void func_0208f5c4(void *p, u32 v);
void func_0200658c(void *p);
void func_0208eff8(void);

u8 *func_0208f090(void *param_1, u32 param_2)
{
    u8 *p;

    p = (u8 *)func_020038b8(param_1, 48);
    func_0208f5c4(p, 2);
    *(u32 *)(p + 0x14) = (u32)func_0208eff8;
    *(u32 *)(p + 0x18) = 0;
    func_0200658c(p + 0x1c);
    *(u32 *)(p + 0x24) = param_2;
    *(s16 *)(p + 0x28) = 0x7fff;
    *(s16 *)(p + 0x2a) = 0;
    *(s16 *)(p + 0x2c) = -4096;
    *(s16 *)(p + 0x2e) = 0;
    return p;
}
