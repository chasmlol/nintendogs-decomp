#include "ctx.h"

extern u8 *data_021594d0;
extern s32 func_020d65c4(u8 *p);
extern s32 func_02064a80(s32 a, s32 b);
extern s32 func_020649d8(s32 a, void *b, s32 c);
extern void func_020d3b50(void);
extern void func_020d3cf4(void);
extern void func_020d613c(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, u16 *g);
extern void func_020d6c60(s32 a);
extern s32 func_020d6c84(void);

void func_020d4610(u8 *param_1)
{
  u16 asStack_c[2];
  s32 iVar5;
  s32 iVar6;
  s32 uVar1;
  s32 bVar2;
  u8 *P;
  void (*pcVar7)(u8 *);

  iVar5 = func_020d65c4(param_1);
  if (iVar5 == 0) {
    return;
  }
  uVar1 = *(u16 *)(param_1 + 8);
  if (uVar1 > 7) goto gt7;
  if (uVar1 >= 7) goto case7;
  if (uVar1 > 2) return;
  if (uVar1 < 0) return;
  if (uVar1 == 0) goto case0;
  if (uVar1 == 2) return;
  return;
gt7:
  if (uVar1 == 9) goto case9;
  return;
case0:
  P = data_021594d0;
  iVar6 = *(s32 *)(P + 0x24);
  if (iVar6 == 1) goto c1;
  if (iVar6 == 2) goto c2;
  if (iVar6 == 3) goto c3;
  return;
c1:
  if (*(s16 *)(P + 0x30) == 0) {
    *(s16 *)(P + 0x30) = 1;
  }
  return;
c2:
  iVar5 = func_020649d8(5, func_020d3b50, 0);
  asStack_c[0] = iVar5;
  if (asStack_c[0] != 0) {
    return;
  }
  P = data_021594d0;
  func_020d613c(func_020d3cf4, *(s32 *)(P + 0x10), (u16)*(s32 *)(P + 0xc), *(s32 *)(P + 8), (u16)*(s32 *)(P + 4), 0, asStack_c);
  return;
c3:
  if (*(s16 *)(P + 0x30) == 0) {
    *(s16 *)(P + 0x30) = 1;
  }
  return;
case7:
  P = data_021594d0;
  if (*(s16 *)(P + 0x50) <= 0) goto tail7;
  if (*(u8 *)(param_1 + 0x14) == 3 && *(u8 *)(param_1 + 0x15) == 6 && *(u8 *)(param_1 + 0x16) == 0) {
    bVar2 = 1;
  } else {
    bVar2 = 0;
  }
  if (bVar2 == 0) {
    iVar5 = func_02064a80(0, *(u16 *)(param_1 + 0x10));
    if (iVar5 == 2) {
      return;
    }
    P = data_021594d0;
    if (*(s32 *)(P + 0x2c) == 1) {
      return;
    }
    *(s32 *)(P + 0x2c) = 1;
    P = data_021594d0;
    *(s16 *)(P + 0x28) = iVar5;
    *(s16 *)(data_021594d0 + 0x2a) = 13;
    return;
  }
tail7:
  P = data_021594d0;
  pcVar7 = *(void (**)(u8 *))(P + 0x18);
  if (pcVar7 != 0) {
    pcVar7(param_1);
  }
  func_020d6c60(*(u16 *)(param_1 + 0x10));
  return;
case9:
  if (*(s32 *)(data_021594d0 + 0x40) == 0) {
    return;
  }
  if (func_020d6c84() != 0) {
    return;
  }
  P = data_021594d0;
  if (*(s32 *)(P + 0x2c) == 1) {
    return;
  }
  *(s32 *)(P + 0x2c) = 1;
  P = data_021594d0;
  *(s16 *)(P + 0x28) = 20;
  *(s16 *)(data_021594d0 + 0x2a) = 8;
  return;
}
