#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_0202a5c4(u8 *p);
extern void func_020264f4(void *p);
extern void func_020255a4(void *p);
extern void func_0202db24(void *p, u32 n);

static inline void SwapByte(u32 v, vu8 *p)
{
  *(u8 *)(p) = (u8)(v);
}

void func_ov003_021690b4(u8 *p)
{
  s32 iVar1;
  u32 uVar2;
  iVar1 = func_0202a5c4(p);
  switch (iVar1) {
  case 1:
    uVar2 = 0x1e3;
    break;
  case 2:
    uVar2 = 0x1e4;
    break;
  default:
    uVar2 = 0x1e3;
    break;
  }
  {
    vu16 *q = (vu16 *)(p + 0x152);
    *q = (u16)uVar2;
  }
  SwapByte(1, (vu8 *)(p + 151));
  func_020264f4(p);
  func_020255a4(p);
  func_0202db24(p, 0);
}
