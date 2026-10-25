#include "ctx.h"

extern u32 data_0215600c;
extern u16 data_02156010[];
extern u32 func_02080b08(void);
extern void func_02080b1c(u32);
extern s32 func_02080da0(u32);

void func_02080da8(u32 param_1, u32 param_2)
{
    u32 uVar7;
    u32 st;
    u32 pp;
    u32 uVar5;
    u32 uVar4;
    u32 uVar6;
    s32 iVar3;

    pp = param_1;
    st = func_02080b08();
    uVar7 = pp & data_0215600c & 0x1ff;
    for (;;) {
        iVar3 = func_02080da0(uVar7);
        if (31 - iVar3 < 0) {
            break;
        }
        uVar5 = 31 - (u32)iVar3;
        uVar4 = data_02156010[uVar5];
        uVar6 = ~(1u << uVar5);
        uVar7 = uVar7 & uVar6;
        if (param_2 == uVar4) {
            uVar4 = data_0215600c;
            data_02156010[uVar5] = 0;
            data_0215600c = uVar4 & uVar6;
        }
    }
    func_02080b1c(st);
}
