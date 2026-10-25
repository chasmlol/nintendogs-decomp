#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T12;

extern u8 data_0213b7d0[];
extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, u32 v);
extern u32 func_02028130(u8 *p);
extern void func_02009408(u8 *p, u32 a, u32 b, s32 *c, u32 d);
extern void func_02023590(u8 *p);
extern void func_020a1a40(u32 a);

static inline u32 SwapOld(u32 v, vu8 *p)
{
  u32 old;
  *(u8 *)(p) = (u8)(v);
  return old;
}

void func_ov003_02162714(u8 *param_1)
{
  s32 blk[3];
  *(s16 *)(param_1 + 0x152) = 0x1eb;
  SwapOld(4, (vu8 *)(param_1 + 0x97));
  func_02026c24(param_1);
  func_02025548(param_1);
  func_0202da00(param_1, *(u32 *)(data_0213b7d0 + 0x20));
  *(T12 *)blk = *(T12 *)(param_1 + 0x2dc);
  blk[1] = blk[1] + (s32)((((s64)(s32)func_02028130(param_1) * 0x1ccd) + 0x800) >> 12);
  *(T12 *)(param_1 + 0x490) = *(T12 *)blk;
  func_02009408(param_1, 0x4f, 0, blk, 1);
  func_02009408(param_1, 0x49, 0, blk, 1);
  func_02009408(param_1, 0x4a, 0, blk, 1);
  func_02009408(param_1, 0x4b, 0, blk, 1);
  func_02009408(param_1, 0x4c, 0, blk, 1);
  func_02009408(param_1, 0x4d, 0, blk, 1);
  func_02009408(param_1, 0x4e, 0, blk, 1);
  func_02023590(param_1);
  func_020a1a40(0x45);
}
