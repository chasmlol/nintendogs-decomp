#include "ctx.h"

extern u32 data_ov005_02167e9c;
extern u32 data_ov005_02167ea8;
extern u32 data_0215be34;
extern void func_020bd868(int p);
extern s32 func_020d9024(s32 a);
extern s32 func_01ffdb08(s32 a);
extern s32 func_02028130(s32 a);
extern u32 *func_0208122c(s32 a, s32 b, s32 *c);

#define FX(a, b) ((u32)((s32)(((s64)(s32)(a) * (s64)(s32)(b) + 0x800) >> 12)))

void func_ov005_0216679c(int param_1)
{
  s16 v;
  s16 *psVar6;
  s32 iVar3;
  s32 iVar7;
  u32 uVar5;
  u32 *piVar4;

  v = *(s16 *)(param_1 + 0x90);
  if (v == 0) {
    return;
  }
  if (v == 2) {
    goto two;
  }
  if (v == 3) {
    *(u32 *)(param_1 + 0xa8) = 0;
  }
  return;
two:
  psVar6 = *(s16 **)(param_1 + 0x214);
  func_020bd868(param_1);
  *psVar6 = (s16)func_020d9024(-1);
  iVar3 = func_01ffdb08(*(s16 *)*(u32 *)(param_1 + 0x214));
  iVar3 = func_02028130(iVar3);
  *(u32 *)(param_1 + 0x120) = FX(data_ov005_02167e9c, iVar3);
  iVar3 = func_01ffdb08(*psVar6);
  iVar7 = (s32)data_ov005_02167ea8;
  iVar3 = func_02028130(iVar3);
  uVar5 = FX(iVar3, iVar7);
  *(u32 *)(param_1 + 0x24) = uVar5;
  *(u32 *)(param_1 + 0x28) = uVar5;
  *(u32 *)(param_1 + 0x2c) = uVar5;
  {
    s32 aiStack[3] = {0, 0, 0};
    iVar3 = 0;
    if (data_0215be34 != 0) {
      iVar3 = *(s32 *)data_0215be34;
    }
    piVar4 = func_0208122c(iVar3, 0x29, aiStack);
  }
  *(u32 **)(psVar6 + 0x10) = piVar4;
  *(u32 *)(*(u8 **)(psVar6 + 0x10) + 0x1c) = *(u32 *)(*(u8 **)(psVar6 + 0x10) + 0x1c) | 2;
  psVar6[0xe] = 0;
}
