#include "ctx.h"

typedef struct {
  u32 w[3];
} T12;

extern void func_020bc024(u32 *v);
extern s32 func_02009bd0(u32 *a, u32 *b);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_02034750(u8 *param_1, u8 *param_2, s32 param_3)
{
  u32 aiStack_28[3];
  u32 local_1c[3];
  s32 iVar2;
  s32 iVar3;
  s32 sv;
  func_020bc024(aiStack_28);
  *(T12 *)local_1c = *(T12 *)(param_2 + 0xbc);
  iVar2 = func_02009bd0(aiStack_28, local_1c);
  sv = *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 42);
  iVar3 = (s32)((u32)sv * 82) + 0x3c000;
  if (param_3 != 0) {
    iVar3 = iVar3 - 0x32000;
  } else {
    iVar3 = iVar3 + 0x8000;
  }
  if (iVar2 > FX_Mul(iVar3, iVar3)) {
    return 1;
  }
  if (param_3 != 0 && iVar2 > 0x2710000) {
    return 1;
  }
  return 0;
}
