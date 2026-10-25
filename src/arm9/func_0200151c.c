#include "ctx.h"

extern u8 data_0214e684[];
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 s);
extern s32 func_0206cdb8(s32 a, u32 b, s32 c);

void func_0200151c(u32 param_1, u32 param_2)
{
    void (*pcVar3)(s32, s32, s32);
    s32 iVar2;
    u32 s;
    u32 bVar1;

    s = func_02080b08();
    iVar2 = func_0206cdb8(6, 0x03000300 | param_2, 0);
    bVar1 = (0 <= iVar2);
    if (bVar1 == 0) {
        func_02080b1c(s);
        *(u16 *)(52 + data_0214e684) = *(u16 *)(data_0214e684 + 52) | 8;
        pcVar3 = *(void (**)(s32, s32, s32))data_0214e684;
        if (NULL == pcVar3) {
            return;
        }
        pcVar3(3, 4, 0);
        return;
    }
    *(u16 *)(data_0214e684 + 54) = *(u16 *)(data_0214e684 + 54) | 8;
    *(u16 *)(data_0214e684 + 52) = *(u16 *)((s32)data_0214e684 + 52) & ~8;
    func_02080b1c(s);
}
