#include "ctx.h"

extern u8 data_02149444[];
extern u8 data_02149450[];
extern void func_02112744(s32 a, u8 *b, s32 c);
extern void func_02112670(s32 a, u8 *b, u32 c);
extern void func_02112798(s32 a, u32 b, s32 c);

void func_02114654(void)
{
    s32 iVar1;

    func_02112744(0, data_02149444, 1);
    func_02112744(0, data_02149450, 1);
    func_02112670(0, data_02149444, 1);
    func_02112670(0, data_02149450, 0);
    iVar1 = 0;
    do {
        func_02112798(0, (u16)(iVar1 + 4), 0);
        iVar1 = iVar1 + 1;
    } while (iVar1 < 10);
    func_02112798(0, 0xe, 0);
}
