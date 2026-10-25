#include "ctx.h"

u32 func_02064098(u32 a, u32 b, u16 *c, u32 d);
void func_020800f0(u16 *p, u32 n);
void func_0206431c(u32 a, u32 b);
u32 func_020641b8(void);
void func_0206c9b8(u16 *src, u16 *dst, u32 n);
void func_0206c924(u16 *dst, u32 v, u32 n);
u32 func_020641c8(u32 a, u32 b, u32 c);

u32 func_02064b88(u32 param_1, u16 *param_2, u16 *param_3, u32 param_4, u16 param_5)
{
    u32 iVar1;
    u16 *puVar3;

    iVar1 = func_02064098(1, 2, param_3, param_4);
    if (iVar1 != 0) {
        return iVar1;
    }
    if (param_2 == 0) {
        return 6;
    }
    func_020800f0(param_2, (u32)*param_2 << 1);
    func_0206431c(12, param_1);
    iVar1 = func_020641b8();
    puVar3 = *(u16 **)(iVar1 + 0xc);
    *puVar3 = 12;
    *(u16 **)(puVar3 + 2) = param_2;
    if (param_3 != 0) {
        func_0206c9b8(param_3, puVar3 + 4, 24);
    } else {
        func_0206c924(puVar3 + 4, 0, 24);
    }
    *(u32 *)(puVar3 + 0x10) = param_4;
    puVar3[0x13] = param_5;
    iVar1 = func_020641c8(12, 0, param_5);
    if (iVar1 == 0) {
        iVar1 = 2;
    }
    return iVar1;
}
