#include "ctx.h"

extern u32 data_0213e4dc;
extern u32 data_02155c44;
extern u32 data_02155c48;
extern void func_020776d4(u32 a, u32 *b, u32 c);
extern void func_020778d0(void);
extern void func_0206c4ac(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_0206c6a8(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020778ac(void);

void func_020777d0(u32 *param_1, u32 param_2)
{
    u32 iVar2;

    if (param_2 < 0x100) goto small;
    if (data_0213e4dc != 0xffffffff) goto big;
small:
    func_020776d4(*param_1, param_1 + 1, (param_2 >> 2) - 1);
    return;
big:
    func_020778d0();
    iVar2 = data_02155c48;
    data_02155c44 = 1;
    if (iVar2 != 0) {
        func_0206c4ac(data_0213e4dc, (u32)param_1, param_2, (u32)func_020778ac, (u32)&data_02155c44);
        return;
    }
    func_0206c6a8(data_0213e4dc, (u32)param_1, param_2, (u32)func_020778ac, (u32)&data_02155c44);
}
