#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026820(int p);
extern void func_02025bb0(int p);
extern void func_02023654(int p, int a, int b);

static inline void SwapByte(u32 v, u8 *p)
{
  *(u8 *)(p) = (u8)(v);
}

void func_ov003_02164924(int param_1)
{
  u8 *p;

  p = (u8 *)param_1;
  *(u16 *)(p + 0x152) = 0x17;
  SwapByte(5, p + 147);
  func_02026820(param_1);
  func_02025bb0(param_1);
  switch (*(s16 *)(p + 0xee)) {
  case 0x39c:
  case 0x39e:
  case 0x3a0:
  case 0x3a2:
    break;
  case 0x39d:
  case 0x39f:
  case 0x3a1:
  case 0x3a3:
    goto L8;
  default:
    goto Ldef;
  }
  SwapByte(7, p + 152);
  goto after;
L8:
  SwapByte(8, p + 152);
  goto after;
Ldef:
  if (*(s8 *)(p + 150) == 1) {
    SwapByte(7, p + 152);
  } else {
    SwapByte(8, p + 152);
  }
after:
  if (*(s8 *)(p + 152) == 7) {
    func_02023654(param_1, 0x23, 7);
    return;
  }
  func_02023654(param_1, 0x23, 8);
}
