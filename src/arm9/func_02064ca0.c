#include "ctx.h"

s32 func_02064098(u32 a, u32 b, u32 c, u32 d);
void func_0206431c(u32 a, u32 b);
u32 func_020641b8(void);
u32 func_020641c8(u32 a, u32 b, u32 c, u32 d);

u32 func_02064ca0(u32 param_1, s32 *param_2)
{
    u8 bVar1;
    s32 iVar2;
    u16 *puVar3;

    iVar2 = func_02064098(3, 2, 3, 5);
    if (iVar2 != 0) {
        return iVar2;
    }
    if (param_2 == 0) {
        return 6;
    }
    if (*param_2 == 0) {
        return 6;
    }
    if (*(u16 *)((u8 *)param_2 + 4) < 1) {
        goto fail;
    }
    if (*(u16 *)((u8 *)param_2 + 4) <= 14) {
        goto body;
    }
fail:
    return 6;
body:
    func_0206431c(10, param_1);
    iVar2 = func_020641b8();
    puVar3 = *(u16 **)(iVar2 + 0xc);
    *puVar3 = 10;
    puVar3[1] = *(u16 *)((u8 *)param_2 + 4);
    *(s32 *)(puVar3 + 2) = *param_2;
    puVar3[4] = *(u16 *)((u8 *)param_2 + 6);
    *((u8 *)puVar3 + 0xa) = *((u8 *)param_2 + 8);
    *((u8 *)puVar3 + 0xb) = *((u8 *)param_2 + 9);
    *((u8 *)puVar3 + 0xc) = *((u8 *)param_2 + 10);
    *((u8 *)puVar3 + 0xd) = *((u8 *)param_2 + 11);
    *((u8 *)puVar3 + 0xe) = *((u8 *)param_2 + 12);
    bVar1 = *((u8 *)param_2 + 13);
    *((u8 *)puVar3 + 0xf) = bVar1;
    iVar2 = func_020641c8(10, 0, bVar1, (u32)puVar3);
    if (iVar2 == 0) {
        iVar2 = 2;
    }
    return iVar2;
}
