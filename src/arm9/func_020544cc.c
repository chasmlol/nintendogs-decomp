#include "ctx.h"

extern u8 data_0214f464[];
extern u32 func_0202e304(u8 *p);
extern void func_020362f8(u8 *p);
extern u32 func_0202fcc0(u8 *p);
extern s32 func_02027710(u8 *p, u8 *q);
extern u32 func_02036578(u8 *p);
extern u32 func_020449bc(u32 a);
extern u32 func_0202fd7c(u8 *p);
extern void func_0203e908(u8 *p, u32 n);
extern u32 func_02027894(u8 *p, u32 n);
extern void func_020362ec(u8 *p, u32 n);
extern void func_0202707c(u8 *p, u32 n);

u32 func_020544cc(u8 *param_1, u8 *param_2)
{
  s32 iVar3;
  s32 iVar4;
  u32 uVar5;
  u16 bit;
  u8 *Q;
  switch (*(s16 *)(param_2 + 0xea)) {
  case 0x27e:
  case 0x27f:
  case 0x280:
  case 0x281:
    goto Lz0;
  default:
    break;
  }
  if (func_0202e304(param_2) != 0) {
    func_020362f8(param_1);
    return func_0202fcc0(param_1);
  }
  iVar3 = func_02027710(param_1, param_2);
  if (iVar3 == -1) goto M1;
  if (iVar3 == 0) goto M0;
  if (iVar3 != 1) goto Lz1;
  Q = *(u8 **)data_0214f464;
  iVar4 = *(s32 *)Q * 0x10dcd + 1;
  *(s32 *)Q = iVar4;
  uVar5 = ((u32)(u16)iVar4 * 5) >> 16;
  switch ((u16)uVar5) {
  case 0:
    iVar3 = (s32)func_02036578(param_1);
    uVar5 = func_020449bc((u32)iVar3);
    if ((uVar5 & 2) == 0) {
      return func_0202fd7c(param_1);
    }
    if (iVar3 == 0) {
      return 0;
    }
    func_0203e908(param_1, 0x282);
    return 1;
  case 1:
    iVar3 = (s32)func_02036578(param_1);
    uVar5 = func_020449bc((u32)iVar3);
    if ((uVar5 & 4) == 0) {
      return func_0202fd7c(param_1);
    }
    if (iVar3 == 0) {
      return 0;
    }
    func_0203e908(param_1, 0x289);
    return 1;
  case 2:
    iVar3 = (s32)func_02036578(param_1);
    uVar5 = func_020449bc((u32)iVar3);
    if ((uVar5 & 8) == 0) {
      return func_0202fd7c(param_1);
    }
    if (iVar3 == 0) {
      return 0;
    }
    func_0203e908(param_1, 0x28f);
    return 1;
  case 3:
    iVar3 = (s32)func_02036578(param_1);
    uVar5 = func_020449bc((u32)iVar3);
    if ((uVar5 & 0x10) == 0) {
      return func_0202fd7c(param_1);
    }
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = (s32)func_02027894(param_1, (u32)iVar3);
    *(s32 *)(param_1 + 0x484) = iVar3;
    func_0203e908(param_1, 0x295);
    return 1;
  case 4:
    iVar3 = (s32)func_02036578(param_1);
    uVar5 = func_020449bc((u32)iVar3);
    if ((uVar5 & 0x20) == 0) {
      return func_0202fd7c(param_1);
    }
    if (iVar3 == 0) {
      return 0;
    }
    Q = *(u8 **)data_0214f464;
    iVar4 = *(s32 *)Q * 0x10dcd + 1;
    *(s32 *)Q = iVar4;
    bit = ((u32)iVar4 << 16) >> 31;
    if (bit == 0) goto B0;
    if (bit != 1) goto Lz2;
    goto B1;
  B0:
    func_0203e908(param_1, 0x2cd);
    return 1;
  B1:
    func_0203e908(param_1, 0x2ce);
    return 1;
  Lz2:
    return 0;
  default:
    goto Lz1;
  }
M0:
  func_020362f8(param_1);
  return func_0202fcc0(param_1);
M1:
  Q = *(u8 **)data_0214f464;
  iVar4 = *(s32 *)Q * 0x10dcd + 1;
  *(s32 *)Q = iVar4;
  bit = ((u32)iVar4 << 16) >> 31;
  if (bit == 0) goto C0;
  if (bit != 1) goto Lz1;
  goto C1;
C0:
  func_020362ec(param_2, (s16)(s32)*(s8 *)(param_1 + 0x88));
  func_0202707c(param_2, 9);
  return 1;
C1:
  func_020362ec(param_2, (s16)(s32)*(s8 *)(param_1 + 0x88));
  func_0202707c(param_2, 0x11);
  return 1;
Lz0:
  return 0;
Lz1:
  return 0;
}
