#include "ctx.h"

extern u32 data_ov011_0215d324;
extern u32 data_027c0360;
extern s16 data_02126868[];

extern s32 func_02044aa8(s32 a, s32 b, s32 c);
extern void func_02067288(u32 *a, s32 *b, s32 c, s32 d);
extern void func_02066cd4(void *a, u32 *b, void *c);

void func_ov011_0215ccf4(s32 param_1, s32 *param_2, s32 param_3)
{
  s32 sum;
  s32 idxA;
  s32 idxB;
  s32 iVar1;
  s32 iVar5;
  u32 uVar6;
  u8 *gp;
  u8 *p3;
  s32 iVar4;
  s32 iVar3;
  s32 iVar2;
  s32 loc[6];
  u32 a80[12];
  u32 a50[12];
  s32 t3;
  s32 t4;
  s32 t5;
  s32 t6;
  s32 t7;
  s32 t8;

  iVar2 = param_2[11];
  iVar3 = param_2[10];
  iVar4 = param_2[9];
  t5 = param_2[5];
  t4 = param_2[4];
  t3 = param_2[3];
  loc[0] = t3;
  loc[1] = t4;
  loc[2] = t5;
  t8 = ((vu32 *)param_2)[8];
  t7 = ((vu32 *)param_2)[7];
  t6 = ((vu32 *)param_2)[6];
  loc[5] = t8;
  loc[4] = t7;
  loc[3] = t6;

  p3 = *(u8 **)&data_ov011_0215d324;
  gp = *(u8 **)&data_027c0360;
  uVar6 = (u16)(*(u32 *)(gp + 0x9c));
  iVar1 = func_02044aa8(*(s16 *)(*(u8 **)(p3 + 4) + 0x7a), *(s16 *)(p3 + 0x878), param_3);
  iVar5 = *(s32 *)(gp + 0xa0);
  sum = (u16)(iVar5 + iVar1);
  if (param_3 == 0) {
    uVar6 = (u32)((s32)(uVar6 << 16) >> 1) >> 16;
  }
  idxA = (s32)uVar6 >> 4;
  func_02067288(a80, &loc[0], data_02126868[idxA * 2], data_02126868[idxA * 2 + 1]);
  idxB = sum >> 4;
  func_02067288(a50, &loc[3], data_02126868[idxB * 2], data_02126868[idxB * 2 + 1]);
  func_02066cd4(param_2, a50, param_2);
  func_02066cd4(param_2, a80, param_2);
  param_2[9] = iVar4;
  param_2[10] = iVar3;
  param_2[11] = iVar2;
}
