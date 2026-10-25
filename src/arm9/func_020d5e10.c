#include "ctx.h"

extern u8 data_02159520[];
extern u16 data_021594e4;
extern void func_0206c804(u32 *p, u8 *dst, u32 n);
extern u32 func_02064668(void);

void func_020d5e10(u16 param_1, u32 *param_2)
{
    func_0206c804(param_2, data_02159520, 64);
    *(u16 *)(data_02159520 + 24) = (u16)func_02064668();
    *(u16 *)(data_02159520 + 50) = param_1;
    data_021594e4 = data_021594e4 + 1;
    *(u16 *)(data_02159520 + 12) = data_021594e4;
}
