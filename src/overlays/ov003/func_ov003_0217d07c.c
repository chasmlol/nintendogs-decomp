#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u32 data_02159444;
extern int func_0200f8e0(int p);
extern int func_0203567c(int p);
extern int func_0203541c(int p);
extern int func_0202d108(int p, int a, int b, int c);
extern void func_ov003_0218c3e0(int p, int a, int b);
extern void func_ov003_02198420(int p, int a, int b);

void func_ov003_0217d07c(int param_1)
{
  int iVar1;

  *(T3 *)(param_1 + 948) = *(T3 *)(*(u8 **)((u8 *)*(u32 *)&data_02159444 + 0x1c) + 48);
  if (func_0200f8e0(param_1) != 0) {
    return;
  }
  if (func_0203567c(param_1) == 0) {
    return;
  }
  iVar1 = func_0203541c(param_1);
  if (func_0202d108(param_1, 0, iVar1, 1) != 0) {
    return;
  }
  if (iVar1 != 0) {
    func_ov003_02198420(param_1, iVar1, 0);
    return;
  }
  func_ov003_0218c3e0(param_1, 0, 0);
}
