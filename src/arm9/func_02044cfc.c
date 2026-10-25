#include "ctx.h"

extern u8 data_0214f464[];
extern u32 func_02036578(u8 *p);
extern u32 func_0202fcd4(u8 *p);
extern void func_0202fcc0(u8 *p);
extern u8 func_02029504(u8 *p);
extern s32 func_02044c8c(void);
extern u32 func_02039cc4(u8 *p);
extern void func_020bbe14(u32 a, u32 b);
extern u8 *func_020bc3c4(void);
extern void func_02044bf0(s32 a);
extern s32 func_02027708(u32 a);
extern void func_020362ec(u8 *p, s16 n);
extern u32 func_020449bc(u32 a);
extern void func_0202fd7c(u8 *p);
extern void func_0203e908(u8 *p, u32 n);
extern u32 func_02027894(u8 *p, u32 n);
extern void func_0202707c(u8 *p, u32 n);

u8 func_02044cfc(u8 *param_1)
{
  s32 iVar2;
  s32 iVar3;
  u32 uVar4;
  s32 iVar10;
  s32 sw;
  u16 bit;
  s32 t8;
  u8 *Q;
  iVar2 = (s32)func_02036578(param_1);
  if (iVar2 == 0) {
    iVar2 = (s32)func_0202fcd4(param_1);
  }
  if (iVar2 == 0) {
    goto Ltail;
  }
  iVar3 = func_02044c8c();
  if (*(s8 *)(param_1 + 0x88) == iVar3) {
    if (func_02039cc4(param_1) != 0) {
      func_020bbe14(1, -1);
      {
        u32 q = (u32)func_020bc3c4() + 136;
        *(s32 *)(q + 0x6c) = 0;
      }
    }
    func_02044bf0(*(s8 *)(param_1 + 0x88));
  }
  iVar3 = func_02027708((u32)iVar2);
  func_020362ec(param_1, (s16)iVar3);
  sw = (s16)*(s16 *)(param_1 + 0xf0) - 66;
  switch (sw) {
  case 0:
    iVar2 = (s32)func_02036578(param_1);
    uVar4 = func_020449bc((u32)iVar2);
    if ((uVar4 & 1) == 0) {
      func_0202fd7c(param_1);
    } else if (iVar2 != 0) {
      Q = *(u8 **)data_0214f464;
      iVar10 = *(s32 *)Q * 0x10dcd + 1;
      bit = (u16)(((u32)iVar10 << 16) >> 31);
      *(s32 *)Q = iVar10;
      switch (bit) {
      case 0:
        func_0203e908(param_1, 0x278);
        break;
      case 1:
        func_0203e908(param_1, 0x279);
        break;
      }
    }
    break;
  case 1:
    iVar2 = (s32)func_02036578(param_1);
    uVar4 = func_020449bc((u32)iVar2);
    if ((uVar4 & 2) == 0) {
      func_0202fd7c(param_1);
    } else if (iVar2 != 0) {
      func_0203e908(param_1, 0x282);
    }
    break;
  case 2:
    iVar2 = (s32)func_02036578(param_1);
    uVar4 = func_020449bc((u32)iVar2);
    if ((uVar4 & 4) == 0) {
      func_0202fd7c(param_1);
    } else if (iVar2 != 0) {
      func_0203e908(param_1, 0x289);
    }
    break;
  case 3:
    iVar2 = (s32)func_02036578(param_1);
    uVar4 = func_020449bc((u32)iVar2);
    if ((uVar4 & 8) == 0) {
      func_0202fd7c(param_1);
    } else if (iVar2 != 0) {
      func_0203e908(param_1, 0x28f);
    }
    break;
  case 4:
    iVar2 = (s32)func_02036578(param_1);
    uVar4 = func_020449bc((u32)iVar2);
    if ((uVar4 & 0x10) == 0) {
      func_0202fd7c(param_1);
    } else if (iVar2 != 0) {
      iVar2 = (s32)func_02027894(param_1, (u32)iVar2);
      *(s32 *)(param_1 + 0x484) = iVar2;
      func_0203e908(param_1, 0x295);
    }
    break;
  case 5:
    iVar2 = (s32)func_02036578(param_1);
    uVar4 = func_020449bc((u32)iVar2);
    if ((uVar4 & 0x20) == 0) {
      func_0202fd7c(param_1);
    } else if (iVar2 != 0) {
      Q = *(u8 **)data_0214f464;
      iVar10 = *(s32 *)Q * 0x10dcd + 1;
      bit = (u16)(((u32)iVar10 << 16) >> 31);
      *(s32 *)Q = iVar10;
      switch (bit) {
      case 0:
        func_0203e908(param_1, 0x2cd);
        break;
      case 1:
        func_0203e908(param_1, 0x2ce);
        break;
      }
    }
    break;
  case 6:
    iVar2 = (s32)func_02036578(param_1);
    uVar4 = func_020449bc((u32)iVar2);
    if ((uVar4 & 0x40) == 0) {
      func_0202fd7c(param_1);
    } else if (iVar2 != 0) {
      func_0203e908(param_1, 0x2fd);
    }
    break;
  case 7:
    uVar4 = func_020449bc((u32)sw);
    if ((uVar4 & 0x80) == 0) {
      func_0202fd7c(param_1);
    } else if ((u8)(s8)(*(s8 *)(param_1 + 0x8b) - 4) > 1 && (u8)(s8)(*(s8 *)(iVar2 + 0x8b) - 4) > 1) {
      t8 = *(s8 *)(iVar2 + 0x88);
      func_020362ec(param_1, (s16)t8);
      func_0203e908(param_1, 0x26e);
      t8 = *(s8 *)(param_1 + 0x88);
      func_020362ec((u8 *)iVar2, (s16)t8);
      func_0202707c((u8 *)iVar2, 0x17);
    }
    break;
  case 8:
    uVar4 = func_020449bc((u32)sw);
    if ((uVar4 & 0x100) == 0) {
      func_0202fd7c(param_1);
    } else if ((u8)(s8)(*(s8 *)(param_1 + 0x8b) - 4) > 1 && (u8)(s8)(*(s8 *)(iVar2 + 0x8b) - 4) > 1) {
      t8 = *(s8 *)(iVar2 + 0x88);
      func_020362ec(param_1, (s16)t8);
      func_0203e908(param_1, 0x26f);
      t8 = *(s8 *)(param_1 + 0x88);
      func_020362ec((u8 *)iVar2, (s16)t8);
      func_0202707c((u8 *)iVar2, 0x18);
    }
    break;
  default:
    func_0202fcc0(param_1);
  }
  return func_02029504(param_1);
Ltail:
  func_0202fcc0(param_1);
  return func_02029504(param_1);
}
