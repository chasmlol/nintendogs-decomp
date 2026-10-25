#include "ctx.h"

extern u8 data_02144944;
extern u16 data_021594e0;
extern u16 data_021594d4;
extern void func_02064da4(void);
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 r);
extern s32 func_020d6a60(void *a, void *b, u32 c, u32 d);

u32 func_020d6664(u32 param_1, u32 param_2)
{
    u32 r4;
    s32 iVar2;

    r4 = func_02080b08();
    iVar2 = func_020d6a60(&data_02144944, (void *)func_02064da4, param_1, param_2);
    if (iVar2 != 0) {
        data_021594e0 = 0;
        data_021594d4 = 0;
        func_02080b1c(r4);
        return 1;
    }
    func_02080b1c(r4);
    return 0;
}
