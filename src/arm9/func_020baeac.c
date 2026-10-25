#include "ctx.h"

extern u8 *data_02159444;
extern s32 func_01ffdb08(s32 a);
extern s32 func_0202817c(s32 a);
extern void func_020942c0(s16 *a, s32 b);

void func_020baeac(void)
{
    s32 iVar1;
    s16 local_10[4];

    iVar1 = func_01ffdb08(*(s16 *)(data_02159444 + 0x11c));
    iVar1 = func_0202817c(iVar1);
    local_10[0] = 0;
    local_10[1] = 100;
    func_020942c0(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 101;
    func_020942c0(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 102;
    func_020942c0(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 103;
    func_020942c0(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 104;
    func_020942c0(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 105;
    func_020942c0(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 106;
    func_020942c0(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 56;
    func_020942c0(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 53;
    func_020942c0(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 0;
    func_020942c0(local_10, 1);
    switch (*(u8 *)(iVar1 + 3)) {
    case 1:
        local_10[0] = 1;
        local_10[1] = 5;
        break;
    default:
        local_10[0] = 1;
        local_10[1] = 4;
        break;
    }
    func_020942c0(local_10, 1);
    local_10[0] = 0;
    local_10[1] = 69;
    func_020942c0(local_10, 1);
}
