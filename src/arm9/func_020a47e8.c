#include "ctx.h"

extern u8 *data_02159424;
extern void *func_02044ccc(s32 i);
extern s32 func_020931a8(s16 p);
extern void func_0206c7d4(s32 a, u16 *b, u32 c);
extern u32 func_02044a30(s32 a, u16 *b);
extern u8 func_0208cae4(void *a, u32 b, u16 c);

u32 func_020a47e8(s16 param_1)
{
    u8 bVar1;
    u16 *puVar2;
    s32 iVar3;
    u32 uVar4;
    u16 *puVar5;

    puVar5 = *(u16 **)(data_02159424 + 0x24);
    puVar2 = (u16 *)func_02044ccc(0);
    iVar3 = func_020931a8(param_1);
    func_0206c7d4(iVar3, puVar5, 0x85c);
    uVar4 = func_02044a30(0, puVar5);
    if (puVar2 != NULL) {
        bVar1 = func_0208cae4(puVar2, puVar5[0], *((u8 *)puVar5 + 2));
        return (u32)bVar1;
    }
    return uVar4;
}
