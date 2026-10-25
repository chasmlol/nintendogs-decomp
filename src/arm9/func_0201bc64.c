#include "ctx.h"

#define FX_Mul(a, b) ((s32)((((s64)(a)) * ((s64)(b)) + 0x800) >> 12))

extern s32 func_02028124(u8 *p);
extern s32 func_0202508c(u8 *p, s32 a, s32 b, s32 c);
extern s32 func_02024d40(u8 *p, s32 a, s32 b, s32 c);

void func_0201bc64(u8 *param_1, s32 param_2)
{
  s32 uVar1;
  s32 iVar2;

  uVar1 = func_02028124(param_1);
  iVar2 = func_0202508c(param_1, 11, 26, FX_Mul(uVar1, 149));
  if (iVar2 == 0) {
    uVar1 = func_02028124(param_1);
    func_0202508c(param_1, 42, 60, FX_Mul(uVar1, 100));
  }
  uVar1 = func_02028124(param_1);
  iVar2 = func_02024d40(param_1, 6, 28, param_2 * FX_Mul(uVar1, 93));
  if (iVar2 == 0) {
    uVar1 = func_02028124(param_1);
    func_02024d40(param_1, 43, 66, param_2 * FX_Mul(uVar1, -421));
    return;
  }
  return;
}
