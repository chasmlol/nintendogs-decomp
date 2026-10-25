#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(void *p);
extern void func_020255a4(void *p);
extern void func_02023654(void *p, u32 a, u32 b);
extern void func_0202db24(void *p, u32 n);

static inline void SwapByte(u32 v, vu8 *p)
{
  *(u8 *)(p) = (u8)(v);
}

void func_ov003_0216b6a0(u8 *p)
{
  *(u16 *)(p + 0x152) = 0x18b;
  *(u16 *)(p + 0x154) = 12;
  SwapByte(4, (vu8 *)(p + 151));
  func_020264f4(p);
  func_020255a4(p);
  func_02023654(p, 7, 2);
  func_0202db24(p, 7);
}
