#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f464;
extern u32 data_0213b7d0;
extern u32 data_0215be34;
extern u32 data_02139ee0;
extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, u32 a);
extern void func_02081198(s32 a, s32 b, void *c);
extern void func_02023590(u8 *p);
extern void func_020a1a40(s32 a);

static inline void SwapByte(u32 v, u8 *p)
{
  *(u8 *)(p) = (u8)(v);
}

void func_ov003_0215ef40(u8 *param_1)
{
  s32 iVar2;
  s32 *piVar1;
  u32 t;

  iVar2 = *(s32 *)*(u32 **)&data_0214f464 * 0x10dcd + 1;
  *(s32 *)*(u32 **)&data_0214f464 = iVar2;
  t = ((u32)iVar2 << 16) >> 31;
  *(u16 *)(param_1 + 0x152) = (u16)((u16)t + 504);
  SwapByte(4, param_1 + 151);
  func_02026c24(param_1);
  func_02025548(param_1);
  func_0202da00(param_1, *(u32 *)((u8 *)&data_0213b7d0 + 0x38));
  piVar1 = *(s32 **)&data_0215be34;
  iVar2 = piVar1 != 0 ? *piVar1 : 0;
  func_02081198(iVar2, 0x73, (void *)((u32 *)&data_02139ee0)[*(s8 *)(param_1 + 136)]);
  piVar1 = *(s32 **)&data_0215be34;
  iVar2 = piVar1 != 0 ? *piVar1 : 0;
  func_02081198(iVar2, 0x72, (void *)((u32 *)&data_02139ee0)[*(s8 *)(param_1 + 136)]);
  piVar1 = *(s32 **)&data_0215be34;
  iVar2 = piVar1 != 0 ? *piVar1 : 0;
  func_02081198(iVar2, 0x74, (void *)((u32 *)&data_02139ee0)[*(s8 *)(param_1 + 136)]);
  func_02023590(param_1);
  func_020a1a40(81);
}
