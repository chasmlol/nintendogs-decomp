#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0213b7d0;
extern u32 data_0215be34;
extern u32 data_02139f10;
extern u32 data_02139ea4;

extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, u32 n);
extern void func_02081198(u32 a, u32 b, u32 c);
extern void func_0209eeec(u32 a, u32 b);
extern void func_02023590(u8 *p);

static inline void SwapByte(u32 v, vu8 *p)
{
  *(u8 *)(p) = (u8)(v);
}

void func_ov003_021635ac(u8 *param_1)
{
  u32 *piVar1;
  u32 iVar2;
  *(u16 *)(param_1 + 0x152) = 0x1e7;
  SwapByte(4, (vu8 *)(param_1 + 151));
  func_02026c24(param_1);
  func_02025548(param_1);
  func_0202da00(param_1, *(u32 *)((u8 *)&data_0213b7d0 + 0x34));
  piVar1 = *(u32 **)&data_0215be34;
  iVar2 = (piVar1 != 0) ? *piVar1 : 0;
  func_02081198(iVar2, 15, *(u32 *)((u8 *)&data_02139f10 + (s32)(*(s8 *)(param_1 + 136)) * 4));
  piVar1 = *(u32 **)&data_0215be34;
  iVar2 = (piVar1 != 0) ? *piVar1 : 0;
  func_02081198(iVar2, 16, *(u32 *)((u8 *)&data_02139ea4 + (s32)(*(s8 *)(param_1 + 136)) * 4));
  func_0209eeec(0x1e, 0x7f);
  func_02023590(param_1);
}
