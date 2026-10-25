#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f464;

extern void func_02026478(void *p);
extern void func_020256a0(void *p);
extern void func_02023654(void *p, u32 a, u32 b);

static inline void SwapByte(u32 v, vu8 *p)
{
  *(u8 *)(p) = (u8)(v);
}

void func_02059740(u8 *p)
{
  u32 *pp;
  u32 iv;
  *(u16 *)(p + 0x152) = 235;
  SwapByte(1, (vu8 *)(p + 151));
  func_02026478(p);
  func_020256a0(p);
  pp = *(u32 **)&data_0214f464;
  iv = *pp * 0x10dcd + 1;
  *pp = iv;
  *(u32 *)(p + 0x464) = (u16)((iv << 16) >> 31);
  func_02023654(p, 59, 1);
}
