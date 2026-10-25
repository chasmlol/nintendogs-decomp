#include "ctx.h"

extern u8 data_0213b424[];

extern s32 func_02026fe0(u8 *p);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, u32 n);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 n);

void func_0201c878(u8 *param_1)
{
  s32 iVar1;
  u8 *r5;
  if (func_02026fe0(param_1) != 0) {
    ((void (*)(u8 *))(*(u32 *)(data_0213b424 + 4)))(param_1);
  }
  func_0201d1f0(param_1);
  func_02035c98(param_1, 1);
  r5 = func_0203541c(param_1);
  if (r5 == 0) {
    goto zero;
  }
  func_0203e8cc(param_1, 2, 1);
  if (*(s16 *)(r5 + 0x90) == 4) {
    goto arm4;
  }
  if (*(s16 *)(r5 + 0x90) != 7) {
    goto call;
  }
  goto arm7;
arm4:
  if (*(s8 *)(param_1 + 0x8b) != 5) {
    if (*(s8 *)(param_1 + 0x8b) != 4) {
      *(u32 *)(param_1 + 0x948) = 1;
    }
  }
  goto call;
arm7:
  if (*(s8 *)(param_1 + 0x8b) != 5) {
    if (*(s8 *)(param_1 + 0x8b) != 4) {
      *(u32 *)(param_1 + 0x948) = 8;
    }
  }
call:
  iVar1 = func_ov003_02198298(param_1);
  goto after;
zero:
  iVar1 = 0;
after:
  if (iVar1 != 0) {
    return;
  }
  iVar1 = func_0203567c(param_1);
  if (iVar1 == 0) {
    return;
  }
  func_0203e908(param_1, 2);
}
