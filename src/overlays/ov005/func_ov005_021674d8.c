#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_ov005_02167f0c;
extern s32 func_01ffdb08(s32 a);
extern s32 func_ov005_02160af4(s32 a);
extern s32 func_02027f78(s32 a, s32 b);
extern void func_ov005_02167268(s32 a, s32 *b);
extern s32 func_02028130(s32 a);

static inline u32 SwapRet2(u8 *p, u32 v)
{
  u32 old;
  *(u8 *)(p) = (u8)(v);
  return old;
}

static inline u32 SwapRet(u32 v, u8 *p)
{
  u32 old;
  *(u8 *)(p) = (u8)(v);
  return old;
}

void func_ov005_021674d8(u32 *param_1)
{
  s32 iVar3;
  s32 iVar4;
  s32 iVar7;
  s32 local[3];
  s32 uVar6;
  u32 uVar8;
  u32 bVar2;
  s32 t;

  iVar7 = *(s32 *)&data_ov005_02167f0c;
  iVar3 = func_01ffdb08(*(s16 *)(*(u8 **)(iVar7 + 0x214)));
  if (iVar3 == 0) {
    goto nope;
  }
  iVar4 = func_ov005_02160af4(iVar3);
  if (iVar4 == 0) {
    goto nope;
  }
  iVar4 = func_02027f78(iVar3, 7);
  func_ov005_02167268(iVar7, local);
  param_1[8] = local[0] + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 6)) + 4);
  param_1[9] = local[1] + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 6)) + 8);
  param_1[10] = local[2] + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 6)) + 0xc);
  param_1[0x15] = (s32)(s16)func_02028130(iVar3);
  uVar6 = func_02028130(iVar3);
  *(s32 *)(param_1 + 0x11) = (s32)(((s64)uVar6 * 0x733 + 0x800) >> 12);
  t = func_02028130(iVar3);
  *(s32 *)(param_1 + 0x13) = (s16)(((s64)t * 41 + 0x800) >> 12);
  if (iVar4 >= 0x2328) {
    uVar8 = param_1[7];
    param_1[7] = uVar8 & ~2u;
    bVar2 = SwapRet(1, (u8 *)param_1 + 0x5c);
    return;
  }
  if (iVar4 < 0x1770) {
    uVar6 = param_1[7] | 2;
    param_1[7] = uVar6;
    return;
  }
  {
    s32 tt = (iVar4 - 6000) * -4;
    uVar8 = param_1[7];
    param_1[7] = uVar8 & ~2u;
    bVar2 = SwapRet2((u8 *)param_1 + 0x5c, (u32)(tt / 3000 + 5));
  }
  return;
nope:
  uVar6 = param_1[7] | 2;
  param_1[7] = uVar6;
  return;
}
