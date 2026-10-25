#include "ctx.h"

extern u8 data_021332b8[];
extern u8 data_021332a8[];
extern u8 data_021332ac[];
extern u8 data_021332b0[];
extern s32 func_02092af0(s32 a);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_02112a50(s32 a, s32 b, s32 c, s32 d);

void func_020fa470(s32 *param_1)
{
  u8 *pbVar1;
  s32 iVar3;
  s32 iVar6;
  u8 *pbVar5;
  s32 iVar7;
  u8 uVar4;
  u8 uVar8;
  u8 *tb;

  iVar3 = func_02092af0(*(s16 *)((u8 *)param_1 + 0x1ca8));
  pbVar5 = data_021332b8;
  iVar6 = 0;
  do {
    if (param_1[0] != 0 && param_1[0] != 4) {
      func_02112798(2, *pbVar5, 1);
      func_02112a50(2, *pbVar5, (param_1[5] << 4) >> 16, 0);
    } else {
      func_02112798(2, *pbVar5, 0);
    }
    iVar6 = iVar6 + 1;
    pbVar5 = pbVar5 + 1;
  } while (iVar6 < 0x16);
  pbVar1 = data_021332a8;
  if (param_1[0] != 0 && param_1[0] != 4) {
    func_02112798(2, *pbVar1, 1);
    func_02112a50(2, *pbVar1, (param_1[8] << 4) >> 16, 0);
  } else {
    func_02112798(2, *pbVar1, 0);
  }
  iVar7 = 0;
  iVar6 = 0;
  {
    u8 *c2 = data_021332ac;
    do {
      u8 u4, u8b;
      func_02112798(2, *c2, 0);
      u4 = *(u8 *)(data_021332b0 + (u32)iVar6 * 2);
      func_02112798(2, u4, 0);
      u8b = ((u8 *)((u32)data_021332b0 + (u32)iVar6 * 2))[1];
      func_02112798(2, u8b, 0);
      func_02112a50(2, u4, (param_1[5] << 4) >> 16, 0);
      func_02112a50(2, u8b, (param_1[5] << 4) >> 16, 0);
      c2 = c2 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
  }
  pbVar5 = data_021332ac;
  if (param_1[0] == 0) return;
  if (param_1[0] == 4) return;
  {
  u8 *p3 = data_021332ac;
  s32 k3 = 0;
  do {
    if (*(u16 *)(iVar3 + 0x68) != 0xffff) {
      func_02112798(2, *p3, 1);
      func_02112a50(2, *p3, (param_1[5] << 4) >> 16, 0);
      if (*(u8 *)(iVar3 + 0x6b) == 0) {
        func_02112798(2, data_021332b0[(u32)iVar7 << 1], 1);
        func_02112798(2, *(data_021332b0 + (u32)iVar7 * 2 + 1), 0);
      } else {
        func_02112798(2, data_021332b0[(u32)iVar7 << 1], 0);
        func_02112798(2, *(data_021332b0 + (u32)iVar7 * 2 + 1), 1);
      }
      p3 = p3 + 1;
      iVar7 = iVar7 + 1;
    }
    k3 = k3 + 1;
    iVar3 = iVar3 + 0x14;
  } while (k3 < 3);
  }
}
