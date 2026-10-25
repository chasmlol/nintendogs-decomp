#include "ctx.h"

extern u32 data_0215be48;
extern s32 func_0209638c(void);
extern s32 func_020039f4(void);
extern s32 func_02111b58(void);
extern void func_02111b3c(void);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_021127b8(s32 a, s32 b, s32 c);
extern void func_02112978(s32 a, s32 b, s32 c, s32 d);
extern void func_020fcf48(void);

void func_0212290c(s32 *param_1)
{
  s32 iVar2;

  iVar2 = func_0209638c();
  if (iVar2 == 0) {
    return;
  }
  if ((*(s32 **)&data_0215be48)[0x2f] != 29) {
    if (func_020039f4() != 0) {
      goto c60;
    }
  }
  if ((*(s32 **)&data_0215be48)[0x2f] != 29) {
    return;
  }
  if (func_02111b58() == 0) {
    return;
  }
c60:
  func_02112798(2, 2, 1);
  func_02111b3c();
  iVar2 = param_1[4];
  if (iVar2 == 0) goto s0;
  if (iVar2 == 1) goto s1;
  if (iVar2 == 2) goto s2;
  return;
s0:
  param_1[0] = param_1[0] + 1;
  if (param_1[0] > 16) {
    func_021127b8(2, 2, 0);
    func_021127b8(2, 1, 1);
    func_02112798(2, 1, 1);
    param_1[0] = 0;
    param_1[4] = 1;
  }
  return;
s1:
  param_1[0] = param_1[0] + 1;
  if (param_1[0] > 16) {
    func_021127b8(2, 1, 0);
    func_021127b8(2, 0, 1);
    func_021127b8(2, 3, 1);
    func_02112798(2, 0, 1);
    func_02112798(2, 3, 1);
    param_1[0] = 0;
    param_1[4] = 2;
  }
  return;
s2:
  param_1[0] = param_1[0] + 1;
  if (param_1[0] <= 16) goto s2in;
  func_021127b8(2, 0, 0);
  func_021127b8(2, 3, 0);
  func_02112978(2, 3, 0, 0);
  param_1[0] = 0;
  param_1[4] = 3;
  func_020fcf48();
  return;
s2in:
  if (param_1[2] >= 0) {
    return;
  }
  param_1[2] = param_1[2] + 4;
  func_02112978(2, 3, (s16)param_1[2], 0);
}
