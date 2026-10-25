#include "ctx.h"

extern u32 func_0207dd68(u32 a, u32 b, u32 c);
extern s32 func_02071de4(u32 a, u32 b);
extern void func_0207dd5c(u32 a);

u32 func_020720c4(u32 param_1, u32 param_2)
{
    u32 piVar5;
    u32 uVar4;
    u32 puVar2;
    u32 end;

    end = param_1 + param_2;
    piVar5 = (param_1 + 3) & 0xfffffffc;
    if (piVar5 > end) {
        return 0;
    }
    uVar4 = end - piVar5;
    if (uVar4 < 0x10) {
        return 0;
    }
    puVar2 = func_0207dd68(piVar5 + 16, uVar4 - 16, 0);
    if (puVar2 == 0) {
        return 0;
    }
    if (func_02071de4(piVar5, puVar2) == 0) {
        func_0207dd5c(puVar2);
        return 0;
    }
    return piVar5;
}
