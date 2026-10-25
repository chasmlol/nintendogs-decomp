#include "ctx.h"

extern u32 data_0215be48;
extern u8 data_0214f004[];
extern s32 func_02112320(s32 a, s32 b, s32 c);
extern s32 func_021179b0(s32 *a, s32 b, s32 c);
extern void func_021041c8(void);
extern s32 func_021178a8(s32 *a);
extern void func_02112798(s32 a, s32 b, s32 c);

void func_02119238(s32 *param_1)
{
  s32 iVar3;
  s32 sa;
  s32 sb;

  if (*(s32 *)(*(u8 **)&data_0215be48 + 0x485c) != 0 && (*(u16 *)(data_0214f004 + 2) & 2) != 0) {
    sa = (s16)(s32)data_0214f004[0];
    sb = (s16)(s32)data_0214f004[1];
    iVar3 = func_02112320(0, sa, sb);
    if (iVar3 == 0) {
      iVar3 = func_021179b0(param_1 + 2, sa, sb);
      if (iVar3 != 0) {
        param_1[0x11] = 1;
        func_021041c8();
      }
    }
  }
  iVar3 = func_021178a8(param_1 + 2);
  if (iVar3 != 0) {
    param_1[0x12] = 1;
  }
  param_1[1] = param_1[1] + 1;
  if (param_1[1] > 60) {
    param_1[1] = 0;
  }
  if (param_1[1] > 50) {
    if (param_1[0x11] != 0) {
      func_02112798(0, 0, 0);
      func_02112798(0, 3, 0);
      func_02112798(0, 1, 1);
      func_02112798(0, 2, 0);
      return;
    }
    func_02112798(0, 0, 1);
    func_02112798(0, 3, 0);
    func_02112798(0, 1, 0);
    func_02112798(0, 2, 0);
    return;
  }
  if (param_1[0x11] != 0) {
    func_02112798(0, 0, 0);
    func_02112798(0, 3, 0);
    func_02112798(0, 1, 0);
    func_02112798(0, 2, 1);
    return;
  }
  func_02112798(0, 0, 0);
  func_02112798(0, 3, 1);
  func_02112798(0, 1, 0);
  func_02112798(0, 2, 0);
}
