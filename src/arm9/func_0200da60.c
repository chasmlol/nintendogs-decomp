#include "ctx.h"

extern void func_02035c98(int p, int a);
extern u32 func_020289d0(int p, int a, int b);
extern u32 func_0203592c(int p, int a);
extern u32 func_020357c8(int p, int a);
extern u32 func_0202fa08(int p);
extern void func_020362f8(int p);
extern u32 func_0202fd7c(int p);

u32 func_0200da60(int param_1, int param_2, int param_3)
{
  u32 r;
  u32 uVar2;

  func_02035c98(param_1, 0);
  r = func_020289d0(param_1, 0, 1);
  if (r != 0) {
    return r;
  }
  r = func_0203592c(param_1, 0);
  if (r != 0) {
    return r;
  }
  r = func_020357c8(param_1, 0);
  if (r != 0) {
    return r;
  }
  uVar2 = r;
  if (param_2 != 0) {
    uVar2 = *(u16 *)(param_1 + 0xfc);
    if (uVar2 > 60) {
      return func_0202fa08(param_1);
    }
  }
  if (param_3 == 0) {
    return uVar2;
  }
  if (*(u16 *)(param_1 + 0xfc) > 60) {
    func_020362f8(param_1);
    return func_0202fd7c(param_1);
  }
  return *(u16 *)(param_1 + 0xfc);
}
