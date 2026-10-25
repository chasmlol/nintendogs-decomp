#include "ctx.h"

extern u32 data_0213b424;
extern int func_02026fe0(int p);
extern void func_0201d1f0(int p);
extern void func_02035c98(int p, int a);
extern int func_0203541c(int p);
extern void func_0203e8cc(int p, int a, int b);
extern int func_ov003_02198298(int p);
extern int func_0203567c(int p);
extern void func_0203e908(int p, int a);
extern void func_0202518c(int p, int a, u32 b);
extern u32 func_02028124(int p);
#define FX(a, b) ((u32)((s32)(((s64)(s32)(a) * (s64)(s32)(b) + 0x800) >> 12)))

void func_0201c544(int param_1)
{
  s32 iVar1;

  func_0202518c(param_1, 18, FX(func_02028124(param_1), -273));
  if (func_02026fe0(param_1) != 0) {
    ((void (*)(int))(*(u32 *)((u8 *)&data_0213b424 + 4)))(param_1);
  }
  func_0201d1f0(param_1);
  func_02035c98(param_1, 1);
  iVar1 = func_0203541c(param_1);
  if (iVar1 == 0) {
    goto zero;
  }
  func_0203e8cc(param_1, 2, 1);
  if (*(s16 *)(iVar1 + 0x90) == 4) {
    goto c4;
  }
  if (*(s16 *)(iVar1 + 0x90) != 7) {
    goto call;
  }
  goto c7;
c4:
  if (*(s8 *)(param_1 + 0x8b) != 5) {
    if (*(s8 *)(param_1 + 0x8b) != 4) {
      *(u32 *)(param_1 + 0x948) = 1;
    }
  }
  goto call;
c7:
  if (*(s8 *)(param_1 + 0x8b) != 5) {
    if (*(s8 *)(param_1 + 0x8b) != 4) {
      *(u32 *)(param_1 + 0x948) = 8;
    }
  }
call:
  iVar1 = func_ov003_02198298(param_1);
  goto check;
zero:
  iVar1 = 0;
check:
  if (iVar1 != 0) {
    return;
  }
  if (func_0203567c(param_1) == 0) {
    return;
  }
  func_0203e908(param_1, 5);
}
