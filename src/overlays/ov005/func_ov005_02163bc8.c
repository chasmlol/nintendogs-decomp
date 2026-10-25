#include "ctx.h"

#define FXMUL(a, b) ((u32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

extern s32 data_ov005_02167e08;
extern s32 data_ov005_02167e04;
extern s32 data_ov005_02167e00;
extern s32 data_ov005_02167dec;
extern s32 func_02028130(u32 p);
extern void func_0202756c(u32 p, s32 *q);
extern void func_020275dc(u32 p, s32 *q);
extern void func_020275b4(u32 p, s32 *q);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_01ff832c(u32 a, s32 *b, s32 *c, s32 *d);

void func_ov005_02163bc8(u32 param_1, s32 *param_2, u32 *param_3)
{
    s32 stk[31];
    s32 iVar2;

    iVar2 = func_02028130(param_1);
    func_0202756c(param_1, &stk[9]);
    stk[21] = stk[9];
    stk[22] = stk[10];
    stk[23] = stk[11];
    stk[24] = stk[12];
    stk[25] = stk[13];
    stk[26] = stk[14];
    stk[27] = stk[15];
    stk[28] = stk[16];
    stk[29] = stk[17];
    func_020275dc(param_1, &stk[3]);
    func_01ff832c(FXMUL(data_ov005_02167e08, iVar2), &stk[21], &stk[3], &stk[3]);
    func_01ff832c(FXMUL(data_ov005_02167e04, iVar2), &stk[24], &stk[3], &stk[3]);
    func_01ff832c(FXMUL(data_ov005_02167e00, iVar2), &stk[27], &stk[3], &stk[3]);
    func_020275b4(param_1, &stk[0]);
    func_02067e34(&stk[0], &stk[3], &stk[6]);
    func_01ff832c(0x800, &stk[6], &stk[3], param_2);
    iVar2 = func_02028130(param_1);
    *param_3 = FXMUL(data_ov005_02167dec, iVar2);
}
