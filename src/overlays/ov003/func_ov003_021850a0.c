#include "ctx.h"

extern u32 data_0215942c;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_02028124(u8 *p);
extern s32 func_0202518c(u8 *p, s32 a, s32 b);
extern s32 func_0202508c(u8 *p, s32 a, s32 b, s32 c);
extern void func_02022b7c(u8 *p);
extern s32 func_0202c3e0(u8 *p, s32 a);
extern s32 func_0203567c(u8 *p);
extern s32 func_020385e4(u8 *p);
extern void func_0203e908(u8 *p, s32 a);

void func_ov003_021850a0(u8 *param_1)
{
  s32 uVar1;
  s32 iVar2;

  uVar1 = func_02028124(param_1);
  iVar2 = func_0202518c(param_1, 12, FX_Mul(uVar1, 175));
  if (iVar2 == 0) {
    uVar1 = func_02028124(param_1);
    iVar2 = func_0202508c(param_1, 12, 49, FX_Mul(uVar1, -472));
    if (iVar2 == 0) {
      uVar1 = func_02028124(param_1);
      func_0202508c(param_1, 49, 73, FX_Mul(uVar1, 105));
    }
  }
  func_02022b7c(param_1);
  if (func_0202c3e0(param_1, 2) != 0) {
    return;
  }
  if (func_0203567c(param_1) == 0) {
    return;
  }
  if (*(u16 *)(*(u8 **)&data_0215942c) == 1) {
    goto b3ab;
  }
  if (*(u16 *)(*(u8 **)&data_0215942c) != 4) {
    goto sw;
  }
b3ab:
  func_0203e908(param_1, 0x3ab);
  return;
sw:
  iVar2 = func_020385e4(param_1);
  switch (iVar2) {
  case 0:
    func_0203e908(param_1, 0x3ab);
    return;
  case 1:
    func_0203e908(param_1, 0x3ad);
    return;
  case 2:
    func_0203e908(param_1, 0x3ae);
    return;
  case 3:
    func_0203e908(param_1, 0x3af);
  }
}
