#pragma avoid_byte strb
#include "ctx.h"
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

extern u8 data_ov005_02167f04[];
extern u8 data_ov005_02167e24[];
extern u8 data_ov005_02167e28[];
extern u8 data_ov005_02167e40[];
extern u8 data_ov005_02167e54[];
extern u8 data_ov005_02167e58[];
extern u8 data_ov005_02167e6c[];
extern u8 *func_020038b8(u8 *p, u32 n);
extern void func_0208efac(u8 *p);
extern void func_0208f544(u8 *p, u32 fn);
extern void func_ov005_02163630(u8 *p);
extern u8 *func_0208c720(u8 *p, u32 a, u32 b);
extern void func_0205f050(u8 *dst, u32 n, u8 *src, u8 *src2);
extern u32 func_0207df48(u8 *p);
extern u8 *func_0208f43c(u8 *p, u32 a);
extern u32 func_020785bc(u32 a, u32 b);
extern void func_0207df9c(u8 *p);
extern u8 *func_0208fb00(u8 *p, u32 a, u32 b);
extern void func_0208f588(u8 *p, u32 a);
extern void func_02078164(u32 a, u32 b, u32 c);
extern void func_0208f9d8(u8 *p, u8 *q, u32 a);
extern void func_0208e468(u8 *p, u32 a);
extern void func_02006700(u32 idx, u32 fn);
extern void func_ov005_0216427c(void);
extern void func_ov005_02164268(void);

s32 func_ov005_02164cc0(u8 *param_1)
{

  u8 *puVar3;
  u8 *puVar4;
  u8 *puVar5;
  u8 *puVar7;
  u8 *pa;
  s32 iVar6;
  s32 iVar9;
  u8 acStack_50[64];
  if (*(u8 **)data_ov005_02167f04 != 0) {
    return (s32)*(u8 **)data_ov005_02167f04;
  }
  puVar3 = func_020038b8(param_1, 0x90);
  *(u8 **)data_ov005_02167f04 = puVar3;
  func_0208efac(puVar3);
  func_0208f544(*(u8 **)data_ov005_02167f04, (u32)func_ov005_0216427c);

  *(s16 *)(*(u8 **)data_ov005_02167f04 + 0x24) = -1;
  iVar9 = 0;
  do {
    *(u32 *)(*(u8 **)data_ov005_02167f04 + iVar9 * 4 + 0x60) = 0;
    iVar9 = (s16)(iVar9 + 1);
  } while (iVar9 < 6);
  func_ov005_02163630(param_1);
  puVar4 = func_0208c720(param_1, (u32)data_ov005_02167e24, (u32)data_ov005_02167e28);
  func_0205f050(acStack_50, 0x40, data_ov005_02167e40, data_ov005_02167e54);
  iVar9 = (s32)func_0207df48(acStack_50);
  puVar5 = func_0208f43c(param_1, (u32)iVar9);
  *(u8 **)(*(u8 **)data_ov005_02167f04 + 0x7c) = puVar5;
  func_0205f050(acStack_50, 0x40, data_ov005_02167e58, data_ov005_02167e6c);
  iVar9 = (s32)func_0207df48(acStack_50);
  iVar9 = (s32)func_020785bc((u32)iVar9, 0);
  *(s32 *)(*(u8 **)data_ov005_02167f04 + 0x80) = iVar9;
  func_0207df9c(puVar4);
  puVar7 = func_0208fb00(param_1, 0x88, (u32)*(u8 **)(*(u8 **)data_ov005_02167f04 + 0x7c));
  *(u8 **)(*(u8 **)data_ov005_02167f04 + 0x84) = puVar7;
  func_0208f588(*(u8 **)data_ov005_02167f04, (u32)*(u8 **)(*(u8 **)data_ov005_02167f04 + 0x84));
  func_02078164((u32)*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)data_ov005_02167f04 + 0x84) + 0x1c) + 8), 1, 0x1f0000);
  func_02078164((u32)*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)data_ov005_02167f04 + 0x84) + 0x1c) + 8), 1, 0x3f000000);
  func_0208f9d8(*(u8 **)(*(u8 **)data_ov005_02167f04 + 0x84), param_1, 1);
  puVar3 = *(u8 **)(*(u8 **)(*(u8 **)data_ov005_02167f04 + 0x84) + 0x78);
  func_0208e468(puVar3, (u32)*(u8 **)(*(u8 **)data_ov005_02167f04 + 0x80));
  SwapByte(0, (vu8 *)puVar3);
  *(u32 *)(puVar3 + 8) = 0x1000;
  func_02006700(0xb, (u32)func_ov005_02164268);
  return (s32)*(u8 **)data_ov005_02167f04;
}
