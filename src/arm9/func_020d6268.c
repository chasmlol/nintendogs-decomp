#include "ctx.h"

extern u32 data_0214492c;
extern u32 data_021594e0;
extern u32 data_021594d4;
u32 func_02080b08(void);
void func_02080b1c(u32 a);
s32 func_020d6a60(u32 a, u32 b, u32 c, u32 d);
s32 func_02064fb0(void);

u32 func_020d6268(u32 param_1, s16 *param_2)
{
    u32 h;
    s32 iVar2;

    h = func_02080b08();
    iVar2 = func_020d6a60((u32)&data_0214492c, (u32)func_02064fb0, param_1, (u32)param_2);
    if (iVar2 != 0) {
        *(u16 *)&data_021594e0 = 0;
        *(u16 *)&data_021594d4 = 0;
        func_02080b1c(h);
        return 1;
    }
    func_02080b1c(h);
    return 0;
}
