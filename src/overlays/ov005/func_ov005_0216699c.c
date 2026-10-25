#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_ov005_02167ebc;
extern void func_020bdd1c(int p, int a);
extern u32 func_020038b8(int p, int a);
extern void func_02078164(u32 a, int b, u32 c);
extern void func_0208f9d8(int p, int a, int b);
extern void func_0205f050();
extern u32 func_0207df48(void *p);
extern u32 func_020785bc(u32 a, int b);
extern void func_0208e468(u32 a, u32 b);
extern u32 func_ov005_0216679c;
extern u32 func_ov005_02166008;
extern u32 func_ov005_02166940;

static inline void SwapByte(u32 v, u8 *p)
{
  *(u8 *)(p) = (u8)(v);
}

void func_ov005_0216699c(int param_1, int param_2)
{
  char acStack_50[68];
  u8 *q;
  u32 iVar2;

  func_020bdd1c(param_1, 0x6f);
  *(u32 *)(param_1 + 0x1f4) = (u32)&func_ov005_0216679c;
  *(u32 *)(param_1 + 0x1f8) = (u32)&func_ov005_02166008;
  *(u32 *)(param_1 + 0x1f0) = (u32)&func_ov005_02166940;
  *(u32 *)((u8 *)param_1 + 0x214) = func_020038b8(param_2, 0x24);
  q = *(u8 **)((u8 *)param_1 + 0x214);
  *(s16 *)q = -1;
  *(u32 *)(q + 0x20) = 0;
  *(u16 *)(q + 28) = 0;
  func_02078164(*(u32 *)(*(u32 *)(param_1 + 0x1c) + 8), 1, 0x1f0000);
  func_0208f9d8(param_1, param_2, 1);
  func_0205f050(acStack_50, 64, &data_ov005_02167ebc, *(u32 *)(param_1 + 0x1ec));
  iVar2 = func_0207df48(acStack_50);
  iVar2 = func_020785bc(iVar2, 0);
  q = *(u8 **)(param_1 + 0x78);
  func_0208e468((u32)q, iVar2);
  SwapByte(0, q);
  *(u32 *)(q + 8) = 0x1000;
}
