#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u32 data_02159444;
extern u32 func_02028124(int p);
extern void func_02024d40(int p, int a, int b, s32 c);
extern int func_0200f8e0(int p);
extern int func_0203567c(int p);
extern int func_0203541c(int p);
extern int func_0202d108(int p, int a, int b, int c);
extern void func_ov003_0218c3e0(int p, int a, int b);
extern void func_ov003_02198420(int p, int a, int b);

#define FX(a, b) ((u32)((s32)(((s64)(s32)(a) * (s64)(s32)(b) + 0x800) >> 12)))

void func_ov003_0217ca54(int param_1)
{
  int iVar2;
  int iVar3;
  u32 uVar1;

  uVar1 = func_02028124(param_1);
  func_02024d40(param_1, 30, 49, 0 - FX(uVar1, 0x102));
  *(T3 *)(param_1 + 948) = *(T3 *)(*(u8 **)((u8 *)*(u32 *)&data_02159444 + 0x1c) + 0x30);
  if (func_0200f8e0(param_1) != 0) {
    return;
  }
  if (func_0203567c(param_1) == 0) {
    return;
  }
  iVar2 = func_0203541c(param_1);
  iVar3 = func_0202d108(param_1, 0, iVar2, 1);
  if (iVar3 != 0) {
    return;
  }
  if (iVar2 != 0) {
    func_ov003_02198420(param_1, iVar2, 0);
    return;
  }
  func_ov003_0218c3e0(param_1, 0, 0);
}
