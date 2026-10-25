#include "ctx.h"

extern void func_0203942c(u8 *p);
extern s32 func_02037450(u8 *p, u32 n);
extern void func_02035c98(u8 *p, u32 n);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern s32 func_020357c8(u8 *p, u32 a);
extern s32 func_02028124(u8 *p);
extern void func_0202fcc0(u8 *p);

void func_ov003_0217e304(u8 *param_1)
{
  s32 iVar1;
  s32 iVar2;
  func_0203942c(param_1);
  iVar1 = func_02037450(param_1, 0x392);
  func_02035c98(param_1, 1);
  if (*(u16 *)(param_1 + 252) > 40) {
    if (func_020289d0(param_1, 0, 1) != 0) {
      return;
    }
  }
  if (func_020357c8(param_1, 0) != 0) {
    return;
  }
  iVar2 = func_02028124(param_1);
  if (iVar1 >= iVar2 * 0x40) {
    goto big;
  }
  func_0202fcc0(param_1);
  return;
big:
  if (*(u16 *)(param_1 + 252) > 400) {
    func_0202fcc0(param_1);
    return;
  }
}
