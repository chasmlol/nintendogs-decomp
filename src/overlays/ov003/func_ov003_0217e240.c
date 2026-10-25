#include "ctx.h"

extern void func_0203942c(int p);
extern int func_02037450(int p, int a);
extern void func_02035c98(int p, int a);
extern int func_020289d0(int p, int a, int b);
extern int func_020357c8(int p, int a);
extern int func_02028124(int p);
extern void func_0202fcc0(int p);

void func_ov003_0217e240(int param_1)
{
  int iVar1;
  int iVar2;

  func_0203942c(param_1);
  iVar1 = func_02037450(param_1, 0x392);
  func_02035c98(param_1, 1);
  if (*(u16 *)(param_1 + 0xfc) > 40) {
    if (func_020289d0(param_1, 0, 1) != 0) {
      return;
    }
  }
  if (func_020357c8(param_1, 0) != 0) {
    return;
  }
  iVar2 = func_02028124(param_1);
  if (iVar1 >= iVar2 * 64) {
    goto ge;
  }
  func_0202fcc0(param_1);
  return;
ge:
  if (*(u16 *)(param_1 + 0xfc) > 400) {
    func_0202fcc0(param_1);
  }
}
