#include "ctx.h"

extern void func_02067728(s32 a, s32 b);
extern s32 func_020677c8(void);

void func_0207bbec(s32 *param_1, u8 *param_2)
{
  s32 h44;
  s32 h46;
  s32 uVar4;
  s32 iVar5;
  s32 uVar6;
  s32 uVar7;
  s32 uVar8;
  s32 uVar9;
  s32 iVar10;

  iVar5 = (s32)((u32)*(u16 *)(param_2 + 0x2c) << 12);
  iVar10 = (s32)((u32)*(u16 *)(param_2 + 0x2e) << 12);
  func_02067728(iVar10, iVar5);
  uVar9 = (s32)(((s64)*(s32 *)(param_2 + 0x18) * (s64)*(s16 *)(param_2 + 0x22)) >> 12);
  uVar8 = (s32)(((s64)*(s32 *)(param_2 + 0x18) * (s64)*(s16 *)(param_2 + 0x20)) >> 12);
  uVar7 = (s32)(((s64)*(s32 *)(param_2 + 0x1c) * (s64)*(s16 *)(param_2 + 0x22)) >> 12);
  uVar6 = (s32)(((s64)*(s32 *)(param_2 + 0x1c) * (s64)*(s16 *)(param_2 + 0x20)) >> 12);
  param_1[0] = uVar9;
  param_1[5] = uVar7;
  uVar4 = func_020677c8();
  param_1[1] = (s32)(uVar6 * uVar4) >> 12;
  func_02067728(iVar5, iVar10);
  h44 = (s32)*(u16 *)(param_2 + 0x2c);
  h46 = (s32)*(u16 *)(param_2 + 0x2e);
  iVar10 = *(s32 *)(param_2 + 0x28) * h46 + ((-h46) << 11);
  iVar5 = (-h44 << 11) - *(s32 *)(param_2 + 0x24) * h44;
  param_1[0xc] = (s32)(((s64)uVar9 * iVar5 - (s64)uVar8 * iVar10) >> 8) + h44 * 0x8000;
  param_1[0xd] = (s32)(((s64)uVar6 * iVar5 + (s64)uVar7 * iVar10) >> 8) + (s32)*(u16 *)(param_2 + 0x2e) * 0x8000;
  uVar4 = func_020677c8();
  param_1[4] = (s32)(-uVar8 * uVar4) >> 12;
  return;
}
