#include "ctx.h"

extern u8 data_02159198[];
extern u8 data_021592ac[];
extern u8 data_02159184[];
extern u8 data_02159074[];
extern s32 func_0209a91c(void);
extern u32 func_02070888(u8 *p);
extern void func_02070c18(u8 *p, u32 n);
extern u32 func_020708d0(u8 *p);
extern void func_0209f848(u32 a, u32 b);
extern void func_02070ba8(u32 a, u32 b, u32 c);
extern s32 func_020df0d4(void);
extern void func_02072fe4(u8 *p, u32 a, u32 b);

u32 func_020a1a40(s32 param_1)
{
  u32 uVar1;
  s32 iVar2;
  switch (param_1) {
  case 115:
    *(u16 *)(data_02159198 + 0x36) = 1;
    break;
  case 77:
    uVar1 = func_02070888(data_021592ac);
    if (uVar1 == 0x13) {
      return 0xffffffff;
    }
    break;
  case 123:
    iVar2 = func_0209a91c();
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    break;
  case 40:
  case 68:
    uVar1 = func_020708d0(data_02159184);
    if (uVar1 == 0x1e) {
      return 0xffffffff;
    }
    break;
  case 64:
    uVar1 = func_020708d0(data_02159184);
    if (uVar1 == 0x1f) {
      return 0xffffffff;
    }
    break;
  case 41:
    uVar1 = func_02070888(data_021592ac);
    if (uVar1 == 0xc) {
      func_02070c18(data_021592ac, 0);
    }
    break;
  case 12:
    uVar1 = func_02070888(data_021592ac);
    if (uVar1 == 0x29) {
      return 0xffffffff;
    }
    break;
  case 4:
  case 5:
  case 62:
    uVar1 = func_02070888(data_021592ac);
    if (uVar1 == 0x41) {
      return 0xffffffff;
    }
    if (*(s32 *)(data_02159074 + 0x40) != 0) {
      func_02070ba8(0x38, 0xd, 0);
      func_02070ba8(0x43, 5, 0);
    }
    func_02070ba8(0x29, 4, 0);
    func_02070ba8(0x2c, 6, 0);
    break;
  case 65:
    uVar1 = func_02070888(data_021592ac);
    if (uVar1 == 4) {
      func_02070c18(data_021592ac, 0);
    }
    break;
  case 67:
    if (*(u16 *)(data_02159074 + 0x18) == 0x1e) {
      func_0209f848(0x32, 0x3c);
      *(u16 *)(data_02159198 + 0x10) = 0x32;
    }
    break;
  case 6:
    uVar1 = func_02070888(data_021592ac);
    if (uVar1 == 10) {
      return 0xffffffff;
    }
    break;
  case 10:
    uVar1 = func_02070888(data_021592ac);
    if (uVar1 == 6) {
      func_02070c18(data_021592ac, 0);
    }
    break;
  default:
    break;
  }
  uVar1 = func_02070888(data_021592ac);
  if (param_1 == uVar1) {
    return 0xffffffff;
  }
  iVar2 = func_020df0d4();
  if (iVar2 != -11) {
    func_02072fe4(data_021592ac, 0x13, param_1);
  }
  return 0;
}
