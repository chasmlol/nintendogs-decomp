#include "ctx.h"

extern u8 *data_ov012_0215c720;
extern u8 data_ov012_0215c700[];
extern s32 func_02002e60(void);
extern u8 *func_02002e58(s32 a);
extern void func_020068c4(u8 *a, u16 *b);
extern void func_020068c0(u8 *a, s32 b);
extern void func_020068a0(void);
extern void func_020067d8(void);
extern void func_02006734(void);
extern void func_ov012_0215c6f0(void);
extern void func_02006700(s32 a, void *b);
extern u8 *func_ov012_0215c600(u8 *a);
extern void func_ov012_0215c4d0(u8 *a, s32 b);
extern void func_02090f40(u8 *a, s32 b);
extern void func_020042e8(u8 *a);
extern u8 *func_ov012_0215c43c(u8 *a);
extern void func_0209944c(void);
extern void func_02108dac(void);
extern void func_02108cb4(s32 a, s32 b, s32 c);
extern void func_02108138(s32 a, s32 b);
extern void func_021082e8(void);
extern void func_02108250(void);
extern void func_02108de8(void);
extern void func_02005900(void);

void func_ov012_0215c268(void)
{
  s32 iVar1;
  u8 *piVar2;
  u8 *puVar3;
  u8 *puVar4;
  u16 local_10[2];

  iVar1 = func_02002e60();
  piVar2 = func_02002e58(iVar1);
  local_10[0] = 255;
  local_10[1] = 0;
  func_020068c4(piVar2, local_10);
  func_020068c0(piVar2, 4);
  func_02006700(0, func_020068a0);
  func_02006700(1, func_020067d8);
  func_02006700(2, func_02006734);
  func_02006700(3, func_ov012_0215c6f0);
  puVar3 = func_ov012_0215c600(piVar2);
  func_ov012_0215c4d0(piVar2, 2);
  if (*(s32 *)(data_ov012_0215c720 + 8) == 0) {
    func_02090f40(piVar2, 7);
  }
  func_020042e8(puVar3);
  puVar4 = func_ov012_0215c43c(piVar2);
  *(u8 **)data_ov012_0215c720 = puVar4;
  func_0209944c();
  switch (*(s32 *)(data_ov012_0215c720 + 8)) {
  case 0:
    func_02108dac();
    break;
  case 1:
    func_02108cb4(7, 1, 0);
    break;
  case 2:
    func_02108138(0, -1);
    break;
  case 3:
    func_021082e8();
    break;
  case 4:
    func_02108250();
    break;
  case 5:
    func_02108cb4(7, 1, (s32)data_ov012_0215c700);
    break;
  case 6:
    func_02108de8();
  }
  func_02005900();
  switch (*(s32 *)(data_ov012_0215c720 + 8)) {
  case 0:
  case 1:
  case 2:
    break;
  case 3:
    goto clear;
  case 4:
  clear:
    *(u16 *)0x04000304 &= ~0x8000;
    return;
  case 5:
  case 6:
    break;
  }
  *(u16 *)0x04000304 |= 0x8000;
}
