#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T3;

typedef struct {
  u8 pad[0x38];
  u32 f38;
} GB;

extern GB data_0213b7d0;
extern void func_02026c24(int p);
extern void func_02025548(int p);
extern void func_0202da00(int p, u32 a);
extern u32 func_02028130(int p);
extern void func_02009408(int p, int a, int b, void *c, int d);
extern void func_02023590(int p);
extern void func_020a1a40(int a);

#define FX(a, b) ((u32)((s32)(((s64)(s32)(a) * (s64)(s32)(b) + 0x800) >> 12)))

static inline void SwapByte(u32 v, u8 *p)
{
  *(u8 *)(p) = (u8)(v);
}

void func_ov003_02161dd8(int param_1)
{
  u32 st[4];
  u32 v;
  u8 *q;

  u32 kv;
  kv = 0x1ed;
  q = (u8 *)param_1 + 256;
  *(u16 *)(q + 82) = (u16)kv;
  SwapByte(4, (u8 *)param_1 + 151);
  func_02026c24(param_1);
  func_02025548(param_1);
  func_0202da00(param_1, data_0213b7d0.f38);
  *(T3 *)&st[0] = *(T3 *)(param_1 + 0x2dc);
  v = func_02028130(param_1);
  st[1] = st[1] + FX(v, 0x1ccd);
  *(T3 *)((u8 *)param_1 + 0x490) = *(T3 *)&st[0];
  func_02009408(param_1, 79, 0, &st[0], 1);
  func_02009408(param_1, 73, 0, &st[0], 1);
  func_02009408(param_1, 74, 0, &st[0], 1);
  func_02009408(param_1, 75, 0, &st[0], 1);
  func_02009408(param_1, 76, 0, &st[0], 1);
  func_02009408(param_1, 77, 0, &st[0], 1);
  func_02009408(param_1, 78, 0, &st[0], 1);
  func_02023590(param_1);
  func_020a1a40(69);
}
