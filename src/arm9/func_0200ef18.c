#include "ctx.h"

extern s32 func_02028124(u8 *p);
extern s32 func_0202518c(u8 *p, u32 a, s32 b);
extern s32 func_0203567c(u8 *p);
extern s32 func_02036510(u8 *p);
extern void func_02027654(s32 a, void *b);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern void func_020397fc(u8 *p);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_0200ef18(u8 *param_1)
{
  s32 x;
  s32 r4;
  s32 b;
  s32 r3;
  u8 *r6;
  x = func_02028124(param_1);
  if (func_0202518c(param_1, 3, FX_Mul(x, 0x2aa)) == 0) {
    x = func_02028124(param_1);
    if (func_0202518c(param_1, 20, FX_Mul(x, 0x1e1)) == 0) {
      x = func_02028124(param_1);
      func_0202518c(param_1, 38, FX_Mul(x, 0x2aa));
    }
  }
  r4 = func_0203567c(param_1);
  r3 = func_02036510(param_1);
  if (r3 != 0) {
    func_02027654(r3, param_1 + 948);
  }
  r6 = func_0203541c(param_1);
  if (r6 == 0) {
    goto zero;
  }
  func_0203e8cc(param_1, 2, 1);
  if (*(s16 *)(r6 + 0x90) == 4) {
    goto arm4;
  }
  if (*(s16 *)(r6 + 0x90) != 7) {
    goto call;
  }
  goto arm7;
arm4:
  if (*(s8 *)(param_1 + 139) != 5) {
    if (*(s8 *)(param_1 + 139) != 4) {
      *(u32 *)(param_1 + 0x948) = 1;
    }
  }
  goto call;
arm7:
  if (*(s8 *)(param_1 + 139) != 5) {
    if (*(s8 *)(param_1 + 139) != 4) {
      *(u32 *)(param_1 + 0x948) = 8;
    }
  }
call:
  b = func_ov003_02198298(param_1);
  goto after;
zero:
  b = 0;
after:
  if (b != 0) {
    return;
  }
  if (r4 == 0) {
    return;
  }
  func_020397fc(param_1);
}
