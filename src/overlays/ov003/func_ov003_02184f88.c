#include "ctx.h"

extern int func_02035770(int p, int a);
extern void func_ov003_0218c050(int p, int a);
extern int func_02039cc4(int p);
extern void func_020bbe14(int a, s16 b);
extern void func_02039c68(int p);
extern void func_0203e908(int p, int a);

void func_ov003_02184f88(int param_1)
{
  int iVar1;

  iVar1 = func_02035770(param_1, 10);
  func_ov003_0218c050(param_1, 0);
  *(u16 *)(param_1 + 0x11c) = 1;
  *(u16 *)(param_1 + 0x11e) = 0;
  if (iVar1 != 0) {
    iVar1 = func_02039cc4(param_1);
    if (iVar1 != 0) {
      func_020bbe14(4, (s16)*(s8 *)(param_1 + 0x88));
      func_02039c68(param_1);
    }
    *(u32 *)(param_1 + 0x48c) = 0;
    func_0203e908(param_1, 936);
    return;
  }
  return;
}
