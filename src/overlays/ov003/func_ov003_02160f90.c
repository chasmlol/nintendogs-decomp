#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0214f464[];
extern u8 data_0213b7d0[];
extern u8 data_0215be34[];
extern u32 data_02139ee0[];
extern u32 data_02139ec8[];
extern u32 data_02139eb0[];

extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, u32 v);
extern void func_02081198(u32 a, u32 b, u32 c);
extern void func_02023590(u8 *p);
extern void func_020a1a40(u32 a);

static inline u32 SwapOld(u32 v, vu8 *p)
{
  u32 old;
  *(u8 *)(p) = (u8)(v);
  return old;
}

void func_ov003_02160f90(u8 *param_1)
{
  s32 iVar2;
  u32 bitv;
  u32 *piVar1;
  *(u16 *)(param_1 + 0x152) = 0x4e;
  iVar2 = *(s32 *)(*(u8 **)data_0214f464) * 0x10dcd + 1;
  *(s32 *)(*(u8 **)data_0214f464) = iVar2;
  bitv = (u16)(((u32)iVar2 << 16) >> 31);
  *(u16 *)(param_1 + 0x154) = (u16)(bitv + 0x49);
  SwapOld(4, (vu8 *)(param_1 + 0x97));
  func_02026c24(param_1);
  func_02025548(param_1);
  func_0202da00(param_1, *(u32 *)(data_0213b7d0 + 0x18));
  piVar1 = *(u32 **)data_0215be34;

  iVar2 = (piVar1 != 0) ? (s32)*piVar1 : 0;
  func_02081198((u32)iVar2, 0x3f, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
  piVar1 = *(u32 **)data_0215be34;

  iVar2 = (piVar1 != 0) ? (s32)*piVar1 : 0;
  func_02081198((u32)iVar2, 0x40, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
  piVar1 = *(u32 **)data_0215be34;

  iVar2 = (piVar1 != 0) ? (s32)*piVar1 : 0;
  func_02081198((u32)iVar2, 0x41, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
  piVar1 = *(u32 **)data_0215be34;

  iVar2 = (piVar1 != 0) ? (s32)*piVar1 : 0;
  func_02081198((u32)iVar2, 0x42, data_02139ec8[*(s8 *)(param_1 + 0x88)]);
  piVar1 = *(u32 **)data_0215be34;

  iVar2 = (piVar1 != 0) ? (s32)*piVar1 : 0;
  func_02081198((u32)iVar2, 0x43, data_02139ec8[*(s8 *)(param_1 + 0x88)]);
  piVar1 = *(u32 **)data_0215be34;

  iVar2 = (piVar1 != 0) ? (s32)*piVar1 : 0;
  func_02081198((u32)iVar2, 0x44, data_02139ec8[*(s8 *)(param_1 + 0x88)]);
  piVar1 = *(u32 **)data_0215be34;

  iVar2 = (piVar1 != 0) ? (s32)*piVar1 : 0;
  func_02081198((u32)iVar2, 0x45, data_02139eb0[*(s8 *)(param_1 + 0x88)]);
  piVar1 = *(u32 **)data_0215be34;

  iVar2 = (piVar1 != 0) ? (s32)*piVar1 : 0;
  func_02081198((u32)iVar2, 0x46, data_02139eb0[*(s8 *)(param_1 + 0x88)]);
  piVar1 = *(u32 **)data_0215be34;

  iVar2 = (piVar1 != 0) ? (s32)*piVar1 : 0;
  func_02081198((u32)iVar2, 0x47, data_02139eb0[*(s8 *)(param_1 + 0x88)]);
  func_02023590(param_1);
  func_020a1a40(0x51);
}
