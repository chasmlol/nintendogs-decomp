#pragma avoid_byte strb
#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 data_0214f460[];
extern u32 func_02028130(u8 *p);
extern u32 func_020aaf38(u32 a, u8 *b, s32 c);
extern u32 func_0202dddc(u8 *p);
extern void func_ov003_0218bc08(u8 *p, u32 a);
extern void func_0202f9b4(u8 *p);
extern u32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 n);

static inline u32 SwapOld(u32 v, vu8 *p)
{
  u32 old;
  *(u8 *)(p) = (u8)(v);
  return old;
}

void func_ov003_02182fc0(u8 *param_1)
{
  s32 iVar2;
  s32 iVar3;
  iVar2 = (s32)func_02028130(param_1);
  iVar3 = (s32)func_02028130(param_1);

  iVar2 = (s32)func_020aaf38(*(u32 *)data_0214f460, param_1 + 0x378, FX_Mul(FX_Mul(iVar3, iVar2), 0x1004));
  if (iVar2 != 0) {
    goto FAIL;
  }
  iVar2 = (s32)func_02028130(param_1);
  iVar3 = (s32)func_02028130(param_1);

  iVar2 = (s32)func_020aaf38(*(u32 *)data_0214f460, param_1 + 0x384, FX_Mul(FX_Mul(iVar3, iVar2), 0x14d2));
  if (iVar2 != 0) {
    goto FAIL;
  }
  iVar2 = (s32)func_02028130(param_1);
  iVar3 = (s32)func_02028130(param_1);

  iVar2 = (s32)func_020aaf38(*(u32 *)data_0214f460, param_1 + 0x348, FX_Mul(FX_Mul(iVar3, iVar2), 0x14d2));
  if (iVar2 == 0) {
    goto OK_SET;
  }
FAIL:
  *(s16 *)(param_1 + 0x11c) = 0;
  *(s16 *)(param_1 + 0x11e) = 1;
  goto JOIN;
OK_SET:
  *(s16 *)(param_1 + 0x11c) = 1;
  *(s16 *)(param_1 + 0x11e) = 0;
JOIN:
  if (*(u16 *)(param_1 + 0x11c) == 0) {
    SwapOld(1, (vu8 *)(param_1 + 0xb9));
  } else {
    SwapOld(0, (vu8 *)(param_1 + 0xb9));
  }
  iVar2 = (s32)func_0202dddc(param_1);
  func_ov003_0218bc08(param_1, (u32)iVar2);
  func_0202f9b4(param_1);
  iVar2 = (s32)func_0203567c(param_1);
  if (iVar2 != 0) {
    func_0203e908(param_1, 0xf0);
  }
}
