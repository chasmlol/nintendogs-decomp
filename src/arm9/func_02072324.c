#include "ctx.h"

extern u32 func_0208a710(u32 a, u32 b);
extern void func_0208a758(u32 a, u32 b, u32 c);
extern void func_020896c8(u32 a, u32 b);

void func_02072324(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
  u32 uVar1;
  uVar1 = func_0208a710(param_3, param_4);
  if (param_1 == uVar1) {
    func_0208a758(param_3, param_4, 0);
  }
  func_020896c8(param_1, param_1 + param_2);
}
