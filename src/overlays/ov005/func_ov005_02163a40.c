#include "ctx.h"

extern s32 data_ov005_02167e08;
extern s32 data_ov005_02167e04;
extern s32 data_ov005_02167e00;
extern s32 data_ov005_02167dec;
extern s32 func_02028130(u8 *p);
extern void func_0202756c(u8 *p, s32 *q);
extern void func_020275dc(u8 *p, s32 *q);
extern void func_020275a0(u8 *p, s32 *q);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_01ff832c(s32 v, s32 *a, s32 *b, s32 *c);

#define mulr(k, x) ((s32)((u32)(((s64)(k) * (s64)(x) + 0x800) >> 12)))

void func_ov005_02163a40(u8 *param_1, s32 *param_2, s32 *param_3)
{
    s32 iVar2;
    s32 aiStack_90[3];
    s32 aiStack_84[3];
    s32 aiStack_78[3];
    s32 frame[12];
    s32 cp[9];

    iVar2 = func_02028130(param_1);
    func_0202756c(param_1, frame);
    cp[0] = frame[0];
    cp[1] = frame[1];
    cp[2] = frame[2];
    cp[3] = frame[3];
    cp[4] = frame[4];
    cp[5] = frame[5];
    cp[6] = frame[6];
    cp[7] = frame[7];
    cp[8] = frame[8];
    func_020275dc(param_1, aiStack_84);
    func_01ff832c(mulr(-data_ov005_02167e08, iVar2), cp, aiStack_84, aiStack_84);
    func_01ff832c(mulr(data_ov005_02167e04, iVar2), cp + 3, aiStack_84, aiStack_84);
    func_01ff832c(mulr(data_ov005_02167e00, iVar2), cp + 6, aiStack_84, aiStack_84);
    func_020275a0(param_1, aiStack_90);
    func_02067e34(aiStack_90, aiStack_84, aiStack_78);
    func_01ff832c(0x800, aiStack_78, aiStack_84, param_2);
    iVar2 = func_02028130(param_1);
    *param_3 = mulr(data_ov005_02167dec, iVar2);
}
