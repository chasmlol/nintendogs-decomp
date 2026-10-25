#include "ctx.h"

#pragma opt_propagation off

extern u32 data_ov005_02167f00;
extern s32 func_01ffdb08(s32 a);
extern void func_020271b8(s32 a, s32 *buf, s32 n);
extern s32 func_02028130(s32 a);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))
#define PP18(p) (*(u8 **)(*(u8 **)((p) + 0x18)))

void func_ov005_02162c78(u8 *param_1)
{
  s32 l9, l10, l11;
  s32 iVar3;
  s32 uVar4;
  s32 uVar5;
  s32 buf[12];

  iVar3 = func_01ffdb08((s32)*(s16 *)(*(u8 **)&data_ov005_02167f00));
  func_020271b8(iVar3, buf, 27);
  l10 = buf[10];
  l9 = buf[9];
  l11 = buf[11];
  uVar4 = func_02028130(iVar3);
  {
    s64 p = (s64)uVar4 * 0x333;
    s32 fx = (s32)((p + 0x800) >> 12);
    s32 t;
    *(s32 *)(param_1 + 0x20) = l9 + *(s32 *)(PP18(param_1) + 4);
    *(s32 *)(param_1 + 0x24) = l10 + *(s32 *)(PP18(param_1) + 8);
    t = l11 + fx;
    *(s32 *)(param_1 + 0x28) = t + *(s32 *)(PP18(param_1) + 0xc);
  }
  uVar5 = func_02028130(iVar3);
  *(u32 *)(param_1 + 0x44) = (u32)FX_Mul(uVar5, 0x3ae);
  *(s32 *)(param_1 + 0x54) = *(s16 *)(*(u8 **)&data_ov005_02167f00 + 8);
  return;
}
