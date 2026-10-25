#include "ctx.h"

extern void func_02067728(u32 a, u32 b);
extern u32 func_020677c8(void);

void func_0207aaa8(s32 *param_1, u8 *param_2)
{
  u32 iVar1;
  u32 iVar2;
  u32 uVar3;
  iVar1 = (u32)*(u16 *)(param_2 + 44) << 12;
  iVar2 = (u32)*(u16 *)(param_2 + 46) << 12;
  func_02067728(iVar2, iVar1);
  param_1[0] = (s32)*(s16 *)(param_2 + 34);
  param_1[5] = (s32)*(s16 *)(param_2 + 34);
  uVar3 = func_020677c8();
  param_1[1] = ((-(s32)*(s16 *)(param_2 + 32)) * (s32)uVar3) >> 12;
  func_02067728(iVar1, iVar2);
  param_1[12] = (s32)((u32)*(u16 *)(param_2 + 44) *
                      ((s32)(-((s32)*(s16 *)(param_2 + 32) + (s32)*(s16 *)(param_2 + 34))) + 0x1000)) * 8;
  if (0) param_1[12] = (s32)((u32)*(u16 *)(param_2 + 44) *
                      (0x1000 - ((s32)*(s16 *)(param_2 + 32) + (s32)*(s16 *)(param_2 + 34)))) * 8;
  param_1[13] = (s32)((u32)*(u16 *)(param_2 + 46) *
                      (((s32)*(s16 *)(param_2 + 32) - (s32)*(s16 *)(param_2 + 34)) + 0x1000)) * 8;
  uVar3 = func_020677c8();
  param_1[4] = ((s32)*(s16 *)(param_2 + 32) * (s32)uVar3) >> 12;
}
