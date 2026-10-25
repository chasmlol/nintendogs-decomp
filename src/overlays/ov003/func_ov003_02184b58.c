#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_02026e68(u8 *p);
extern void func_ov003_0218c050(u8 *p, s32 n);
extern void func_ov003_0218bc08(u8 *p, u32 n);
extern s32 func_02029b7c(u8 *p, u32 a, u32 b, u32 c);
extern void func_0203e908(u8 *p, u32 n);
extern void func_ov003_0218e360(u8 *p, u32 n);

static inline void SwapByte(u32 v, vu8 *p)
{
  *(u8 *)(p) = (u8)(v);
}

u32 func_ov003_02184b58(u8 *param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5)
{
  s32 iVar1;
  iVar1 = func_02026e68(param_1);
  func_ov003_0218c050(param_1, iVar1);
  *(u16 *)(param_1 + 0x11c) = 1;
  *(u16 *)(param_1 + 0x11e) = 0;
  func_ov003_0218bc08(param_1, param_2);
  if (iVar1 != 0) {
    SwapByte(1, (vu8 *)(param_1 + 185));
  } else {
    SwapByte(0, (vu8 *)(param_1 + 185));
  }
  iVar1 = func_02029b7c(param_1, param_2, param_3, 0);
  if (iVar1 != 0) {
    return 1;
  }
  if (param_4 != 0) {
    func_0203e908(param_1, (s16)(param_2 + 0xec));
    return 1;
  }
  if (param_5 != 0) {
    func_ov003_0218e360(param_1, param_2);
    return 1;
  }
  return 0;
}
