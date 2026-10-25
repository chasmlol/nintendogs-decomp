#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T3;
#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u32 data_0213b7d0;
extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, s32 a);
extern s32 func_02028130(u8 *p);
extern void func_02009408(u8 *p, s32 a, s32 b, s32 *c, s32 d);
extern void func_02023590(u8 *p);
extern void func_020a1a40(s32 a);

static inline void SwapByte(u32 v, u8 *p)
{
  *(u8 *)(p) = (u8)(v);
}

void func_ov003_02162a24(u8 *param_1)
{
  s32 blk[3];
  s32 uVar1;
  s32 uVar2;

  *(u16 *)(param_1 + 0x152) = 0x4e;
  *(u16 *)(param_1 + 0x154) = 0x43;
  SwapByte(4, param_1 + 151);
  func_02026c24(param_1);
  func_02025548(param_1);
  func_0202da00(param_1, *(s32 *)((u8 *)&data_0213b7d0 + 0x18));
  *(T3 *)blk = *(T3 *)(param_1 + 0x2dc);
  uVar1 = func_02028130(param_1);
  blk[1] = blk[1] + FX_Mul(uVar1, 0x1ccd);
  *(T3 *)(param_1 + 0x490) = *(T3 *)blk;
  func_02009408(param_1, 79, 0, blk, 1);
  func_02009408(param_1, 73, 0, blk, 1);
  func_02009408(param_1, 74, 0, blk, 1);
  func_02009408(param_1, 75, 0, blk, 1);
  func_02009408(param_1, 76, 0, blk, 1);
  func_02009408(param_1, 77, 0, blk, 1);
  func_02009408(param_1, 78, 0, blk, 1);
  func_02023590(param_1);
  func_020a1a40(69);
}
