#include "ctx.h"

extern u32 func_02002e60(void);
extern u8 *func_02002e58(u32 a);
extern void func_020068c4(u8 *p, u16 *q);
extern void func_020068c0(u8 *p, u32 n);
extern void func_02006700(u32 idx, u32 fn);
extern void func_02005e18(u16 *q);
extern u16 *func_0200563c(u8 *p, u16 *q);
extern void func_0200560c(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
extern u8 *func_020038b8(u8 *p, u32 n);
extern void func_020042e8(u16 *q);
extern u32 func_ov019_02160ec4(u8 *p);
extern void func_02005900(u32 v);
extern void func_020068a0(void);
extern void func_020067d8(void);
extern void func_02006734(void);
extern void func_ov019_0216119c(void);
extern u8 data_ov019_02161618[];

void func_ov019_02160d78(void)
{
  u16 a38[2];
  u16 a34[20];
  u8 *p;
  u16 *q;
  u8 *r6;
  u32 t;
  u16 *hw;
  u32 **pp;
  u32 uVar1;
  p = func_02002e58(func_02002e60());
  a38[0] = 255;
  a38[1] = 0;
  func_020068c4(p, a38);
  func_020068c0(p, 4);
  func_02006700(0, (u32)func_020068a0);
  func_02006700(1, (u32)func_020067d8);
  func_02006700(2, (u32)func_02006734);
  func_02006700(3, (u32)func_ov019_0216119c);
  func_02005e18(a34);
  a34[1] = 1;
  a34[3] = 1;
  a34[5] = 1;
  a34[4] = 0;
  a34[7] = 8;
  a34[11] = 7;
  a34[12] = 16;
  q = func_0200563c(p, a34);
  func_0200560c((u8 *)(q + 22), 1, 0, 0, 1, 5, 1, 0);
  r6 = func_020038b8(p, 8);
  *(u32 *)r6 = 0;
  *(u32 *)(r6 + 4) = 0;
  *(u8 **)data_ov019_02161618 = r6;
  func_020042e8(q);
  t = func_ov019_02160ec4(p);
  pp = (u32 **)data_ov019_02161618;
  hw = (u16 *)0x04000304;
  *(*pp) = t;
  uVar1 = *hw;
  *hw = (u16)(uVar1 & 0xffff7fff);
  func_02005900(uVar1 & 0xffff7fff);
}
