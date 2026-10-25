#include "ctx.h"

extern u32 data_0214f464;
extern u64 func_02099fc0(void);
extern void func_0204160c(int p, u32 lo, u32 hi);
extern void func_02041d4c(int p);

#define FX(a, b) ((u32)((s32)(((s64)(s32)(a) * (s64)(s32)(b) + 0x800) >> 12)))

void func_020411c8(int param_1)
{
  u64 uVar6;
  u32 v;
  s32 x;

  uVar6 = func_02099fc0();
  func_0204160c(param_1, (u32)uVar6, (u32)(uVar6 >> 32));
  v = *(u32 *)*(u32 *)&data_0214f464 * 0x10dcd + 1;
  x = (s16)(u16)(v & 0xfff);
  *(u32 *)*(u32 *)&data_0214f464 = v;
  *(u32 *)(param_1 + 0x2a0) = FX(x, 81920) - 40960;
  *(u32 *)(param_1 + 0x2a4) = 0;
  v = *(u32 *)*(u32 *)&data_0214f464 * 0x10dcd + 1;
  *(u32 *)*(u32 *)&data_0214f464 = v;
  x = (s16)(u16)(v & 0xfff);
  *(u32 *)(param_1 + 0x2a8) = FX(x, 81920) - 40960;
  func_02041d4c(param_1);
  switch (*(s8 *)(param_1 + 0x8b)) {
  case 0:
  case 1:
  case 2:
  case 3:
    goto S599;
  case 4:
    goto C4;
  case 5:
    goto C5;
  default:
    goto END;
  }
S599:
  *(s16 *)(param_1 + 0xea) = 599;
  return;
C4:
  *(s16 *)(param_1 + 0xea) = *(s8 *)(param_1 + 0x88) + 4;
  return;
C5:
  v = *(u32 *)*(u32 *)&data_0214f464 * 0x10dcd + 1;
  *(u32 *)*(u32 *)&data_0214f464 = v;
  {
    s32 base = *(s8 *)(param_1 + 0x88) * 2 + 7;
    *(s16 *)(param_1 + 0xea) = (s16)(base + (u16)(((u32)v << 16) >> 31));
  }
  return;
END:
  return;
}
