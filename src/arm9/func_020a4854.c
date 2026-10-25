#include "ctx.h"

extern u8 *data_02159424;
extern u8 *func_02044ccc(u32 a);
extern void func_020955e4(u16 *a, s32 b);
extern u32 func_02044a30(u32 a, u16 *b);
extern u32 func_0208cae4(u8 *a, u32 b, u32 c);

u32 func_020a4854(s16 param_1)
{
    u16 *puVar4;
    u8 *puVar2;
    u32 uVar3;

    puVar4 = *(u16 **)(data_02159424 + 0x24);
    puVar2 = func_02044ccc(0);
    func_020955e4(puVar4, param_1);
    uVar3 = func_02044a30(0, puVar4);
    if (puVar2 != NULL) {
        return func_0208cae4(puVar2, puVar4[0], *((u8 *)puVar4 + 2));
    }
    return uVar3;
}
