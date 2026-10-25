#include "ctx.h"

extern u32 data_0215942c;
extern u32 data_0215be34;
void func_020e9228(void);

u32 func_02003500(u8 *p, u32 n);
u32 func_02003860(u32 p, u32 a, u32 b);
u32 func_02081904(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);

void func_020e90ac(u8 *param_1)
{
    u16 v;
    u32 piVar3;
    u32 puVar5;
    u32 iVar4;

    v = *(u16 *)data_0215942c;
    if (v == 8 || v == 16) {
        piVar3 = func_02003500(param_1, 0x4b000);
    } else {
        piVar3 = func_02003500(param_1, 0xb000);
    }
    iVar4 = func_02003860(piVar3, 16, 4);
    data_0215be34 = iVar4;
    *(u32 *)(iVar4 + 4) = (u32)param_1;
    *(u32 *)(data_0215be34 + 8) = piVar3;
    v = *(u16 *)data_0215942c;
    if (v == 8 || v == 16) {
        puVar5 = func_02081904((u32)func_020e9228, 64, 800, 13, 14, 61);
        *(u32 *)data_0215be34 = puVar5;
        return;
    }
    puVar5 = func_02081904((u32)func_020e9228, 20, 60, 30, 31, 61);
    *(u32 *)data_0215be34 = puVar5;
}
