#include "ctx.h"

typedef struct { u32 w[3]; } V3;

extern s32 data_ov005_02167e14;
extern s32 data_ov005_02167e10;
extern s32 data_ov005_02167e08;
extern s32 data_ov005_02167e04;
extern s32 data_ov005_02167e00;
extern s32 data_ov005_02167e0c;
extern V3 data_ov005_02167ca0[];
extern s32 func_02028130(u8 *p);
extern void func_020271b8(u8 *p, u32 *b, s32 c);
extern void func_0202756c(u8 *p, u32 *b);
extern void func_020275dc(u8 *p, u32 *b);
extern void func_020275b4(u8 *p, u32 *b);
extern void func_020275a0(u8 *p, u32 *b);
extern void func_020275f0(u8 *p, u32 *b);
extern u16 func_02028118(u8 *p);
extern void func_01ff832c(u32 a, u32 *b, u32 *c, u32 *d);
extern void func_01ff8058(u32 *a, u32 *b, u32 *c);

#define FXM(m, x) ((u32)((((s64)(s32)(m) * (s32)(x)) + 0x800) >> 12))

static inline void vset3(u32 *d, u32 a, u32 b, u32 c)
{
  d[0] = a;
  d[1] = b;
  d[2] = c;
}

void func_ov005_02163d4c(u8 *param_1, s32 param_2, u32 *param_3)
{
  s32 iVar3;
  u32 st[118];
  V3 *tb;
  u16 idx;

  switch (param_2) {
  case 0:
    iVar3 = func_02028130(param_1);
    func_020271b8(param_1, &st[0], 11);
    vset3(param_3, st[9], st[10], st[11]);
    st[12] = st[0];
    st[13] = st[1];
    st[14] = st[2];
    func_01ff832c(FXM(data_ov005_02167e14, iVar3), &st[12], param_3, param_3);
    return;
  case 1:
    iVar3 = func_02028130(param_1);
    func_020271b8(param_1, &st[15], 11);
    vset3(param_3, st[24], st[25], st[26]);
    st[27] = st[15];
    st[28] = st[16];
    st[29] = st[17];
    func_01ff832c(FXM(data_ov005_02167e10, iVar3), &st[27], param_3, param_3);
    return;
  case 2:
    iVar3 = func_02028130(param_1);
    func_0202756c(param_1, &st[75]);
    st[87] = st[75];
    st[88] = st[76];
    st[89] = st[77];
    st[90] = st[78];
    st[91] = st[79];
    st[92] = st[80];
    st[93] = st[81];
    st[94] = st[82];
    st[95] = st[83];
    func_020275dc(param_1, param_3);
    func_01ff832c(FXM(data_ov005_02167e08, iVar3), &st[87], param_3, param_3);
    func_01ff832c(FXM(data_ov005_02167e04, iVar3), &st[90], param_3, param_3);
    func_01ff832c(FXM(data_ov005_02167e00, iVar3), &st[93], param_3, param_3);
    return;
  case 3:
    iVar3 = func_02028130(param_1);
    func_0202756c(param_1, &st[96]);
    st[108] = st[96];
    st[109] = st[97];
    st[110] = st[98];
    st[111] = st[99];
    st[112] = st[100];
    st[113] = st[101];
    st[114] = st[102];
    st[115] = st[103];
    st[116] = st[104];
    func_020275dc(param_1, param_3);
    func_01ff832c(FXM(-data_ov005_02167e08, iVar3), &st[108], param_3, param_3);
    func_01ff832c(FXM(data_ov005_02167e04, iVar3), &st[111], param_3, param_3);
    func_01ff832c(FXM(data_ov005_02167e00, iVar3), &st[114], param_3, param_3);
    return;
  case 4:
    iVar3 = func_02028130(param_1);
    func_0202756c(param_1, &st[30]);
    st[42] = st[33];
    st[43] = st[34];
    st[44] = st[35];
    func_020275b4(param_1, param_3);
    func_01ff832c(FXM(data_ov005_02167e0c, iVar3), &st[42], param_3, param_3);
    return;
  case 5:
    iVar3 = func_02028130(param_1);
    func_0202756c(param_1, &st[45]);
    st[57] = st[48];
    st[58] = st[49];
    st[59] = st[50];
    func_020275a0(param_1, param_3);
    func_01ff832c(FXM(data_ov005_02167e0c, iVar3), &st[57], param_3, param_3);
    return;
  case 6:
    iVar3 = func_02028130(param_1);
    func_0202756c(param_1, &st[60]);
    func_020275f0(param_1, &st[72]);
    st[69] = st[72];
    st[70] = st[73];
    st[71] = st[74];
    idx = func_02028118(param_1);
    tb = &data_ov005_02167ca0[idx];
    *(V3 *)&st[72] = *tb;
    st[72] = FXM(st[72], iVar3);
    st[73] = FXM(st[73], iVar3);
    st[74] = FXM(st[74], iVar3);
    func_01ff8058(&st[72], &st[60], param_3);
    return;
  }
}
