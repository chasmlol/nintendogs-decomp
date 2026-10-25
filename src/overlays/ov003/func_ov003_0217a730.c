#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u32 data_0214f464;
extern u32 data_02159444;
extern void func_ov003_0217b43c(void *p, int a, int b, int c, int d, int e, int f, int g);
extern void func_02025d70(void *p);
extern void func_02026c24(void *p);

static inline void SwapB(u8 *p, u32 v)
{
  *(u8 *)(p) = (u8)(v);
}

static inline u32 Lcg(u32 mul)
{
  u32 v;
  v = *(u32 *)*(u32 *)&data_0214f464 * 0x10dcd + 1;
  *(u32 *)*(u32 *)&data_0214f464 = v;
  return (u16)(((u32)(u16)v * mul) >> 16);
}

void func_ov003_0217a730(u8 *p)
{
  T3 saved;
  s32 iVar2;
  s8 s;

  saved = *(T3 *)(p + 948);
  iVar2 = 0;
  if (*(u16 *)(p + 252) >= 60) {
    if (Lcg(30) == 0) iVar2 = 1;
  }
  func_ov003_0217b43c(p, -1, -1, 0, 1, iVar2, 20, 20);
  s = *(s8 *)(p + 151);
  if (s == 4) goto L4;
  if (s == 5) goto L5;
  if (Lcg(20) == 0) SwapB(p + 151, 5);
  func_02025d70(p);
  return;
L5:
  if (*(u16 *)(*(u32 *)&data_02159444 + 132) & 1) *(s32 *)(p + 0x464) = 0;
  else *(s32 *)(p + 0x464) += 1;
  if (*(s32 *)(p + 0x464) > 100) {
    if (Lcg(200) == 0) SwapB(p + 151, 4);
  }
  func_02025d70(p);
  return;
L4:
  if (*(u16 *)(*(u32 *)&data_02159444 + 132) & 1) {
    u32 sel = Lcg(200);
    if (sel != 0) {
      if (sel == 1) SwapB(p + 151, 5);
      goto R;
    }
    SwapB(p + 151, 0);
  }
R:
  *(T3 *)(p + 948) = saved;
  func_02026c24(p);
  return;
}
