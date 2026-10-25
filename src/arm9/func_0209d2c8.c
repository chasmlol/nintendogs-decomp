#include "ctx.h"

extern s32 func_020df0d4(void);
extern u32 func_0209cef4(u32 *p, u32 a, u32 b);
extern void func_02070800(u32 *p, u32 a, u32 b);

u32 func_0209d2c8(u32 *param_1, u32 param_2, u32 param_3)
{
  s32 iVar1;
  u32 uVar2;
  uVar2 = 0xffffffff;
  iVar1 = func_020df0d4();
  if (iVar1 != -11) {
    uVar2 = func_0209cef4(param_1, 7, param_3);
    if (uVar2 != 0xffffffff) {
      func_02070800((param_1 + 6) + uVar2, 0, param_2);
    }
  }
  return uVar2;
}
