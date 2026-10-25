#include "ctx.h"
#pragma opt_lifetimes off

typedef struct { u32 w[3]; } T12;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_020364cc(s32 p);
extern void func_02039448(s32 p);
extern void func_02037450(s32 p, s32 n);
extern s32 func_02036a88(s32 p, s32 a, s32 *b, s32 *c, s16 *d);
extern s32 func_020c1e90(s32 p);
extern s32 func_0203579c(s32 p, s32 v);
extern s32 func_02028130(s32 p);
extern void func_02081198(s32 a, s32 b, u32 c);
extern void func_02027ee0(s32 p, s32 a, s32 b);
extern void func_02027b38(s32 p, s32 a);
extern void func_0202802c(s32 p, s32 a, s32 b);
extern s32 func_02027f78(s32 p, s32 a);
extern void func_0209bdcc(s32 p, s32 a, s32 b);
extern void func_020c1e9c(s32 p, s32 b);
extern s32 func_020c1f34(s32 p);
extern void func_0203e908(s32 p, s32 v);
extern void func_020362f8(s32 p);
extern void func_ov003_0219a368(s32 p);
extern s32 func_020aaf38(u32 a, s32 *b, s32 c);

extern u32 data_0215be34;
extern u32 data_02139e50[];
extern u32 data_0215942c;
extern u32 data_0214f460;
extern u32 data_0214f464;

void func_ov003_021901d4(s32 param_1, s32 param_2, s32 param_3)
{
  s32 iVar5;
  s32 uVar12;
  s32 bVar14;
  s32 bDone;
  s32 uVar11;
  s16 sVar1;
  s32 local_3c;
  s16 asStack_38[2];
  s32 aiStack_34[4];
  s32 *piVar7;
  s32 iVar6;
  s32 iVar8;
  u16 bit;

  iVar5 = func_020364cc(param_1);
  uVar12 = 0;
  local_3c = 0;
  if (iVar5 != 0) {
    func_02039448(param_1);
    *(T12 *)(param_1 + 0x278) = *(T12 *)(iVar5 + 0xbc);
    func_02037450(param_1, 0x200);
    local_3c = func_02036a88(param_1, iVar5, (s32 *)(param_1 + 0x278), aiStack_34, asStack_38);
    if (*(u16 *)(iVar5 + 0x96) <= 1) {
      uVar12 = func_020c1e90(iVar5);
      uVar12 = FX_Mul(uVar12, 0x1200);
    }
    iVar6 = func_0203579c(param_1, *(s16 *)(param_2 + *(s32 *)(param_1 + 0x468) * 2));
    if (iVar6 != 0) {
      uVar11 = func_02028130(param_1);
      sVar1 = *(s16 *)(iVar5 + 0x94);
      uVar11 = FX_Mul(0x666, uVar11);
      *(s32 *)(param_1 + 0x468) = *(s32 *)(param_1 + 0x468) + 1;
      bVar14 = 0;
      if (*(s16 *)(param_2 + *(s32 *)(param_1 + 0x468) * 2) == -1) {
        *(s32 *)((u8 *)param_1 + 0x468) = 0;
        bVar14 = 1;
      }
      if (*(u16 *)(param_1 + 0xfc) > 0x14) {
        switch ((s32)sVar1) {
        case 0x35:
          piVar7 = (s32 *)data_0215be34;
          iVar6 = piVar7 != 0 ? *piVar7 : 0;
          func_02081198(iVar6, 0x65, data_02139e50[*(s8 *)(param_1 + 0x88)]);
          func_02027ee0(param_1, 0, 0x50);
          func_02027ee0(param_1, 3, -0x1e);
          func_02027ee0(param_1, 1, -0x32);
          func_02027ee0(param_1, 2, 0x32);
          func_02027ee0(param_1, 5, -100);
          func_02027b38(param_1, -0x3c);
          if (bVar14) {
            if (param_3 != 0) {
              func_0202802c(param_1, 1, -2);
              func_0202802c(param_1, 2, 2);
              func_0202802c(param_1, 4, -2);
            } else {
              func_0202802c(param_1, 0, -2);
              func_0202802c(param_1, 1, 2);
              func_0202802c(param_1, 3, 2);
              func_0202802c(param_1, 4, 2);
            }
          }
          iVar6 = func_02027f78(param_1, 3);
          if (iVar6 <= 0) {
            *(s32 *)(param_1 + 0x464) = 1;
          }
          break;
        case 0x36:
          piVar7 = (s32 *)data_0215be34;
          iVar6 = piVar7 != 0 ? *piVar7 : 0;
          func_02081198(iVar6, 0x68, data_02139e50[*(s8 *)(param_1 + 0x88)]);
          func_02027ee0(param_1, 0, 0x5a);
          func_02027ee0(param_1, 3, -0x1e);
          func_02027ee0(param_1, 1, -0x32);
          func_02027ee0(param_1, 2, 0x32);
          func_02027ee0(param_1, 5, -0x96);
          func_02027b38(param_1, -0x50);
          if (bVar14) {
            if (param_3 != 0) {
              func_0202802c(param_1, 1, -4);
              func_0202802c(param_1, 2, 4);
              func_0202802c(param_1, 4, -4);
            } else {
              func_0202802c(param_1, 0, -4);
              func_0202802c(param_1, 1, 4);
              func_0202802c(param_1, 3, 4);
              func_0202802c(param_1, 4, 4);
            }
          }
          iVar6 = func_02027f78(param_1, 3);
          if (iVar6 <= 0) {
            *(s32 *)(param_1 + 0x464) = 1;
          }
          break;
        case 0x37:
          piVar7 = (s32 *)data_0215be34;
          iVar6 = piVar7 != 0 ? *piVar7 : 0;
          func_02081198(iVar6, 0x67, data_02139e50[*(s8 *)(param_1 + 0x88)]);
          func_02027ee0(param_1, 0, 100);
          func_02027ee0(param_1, 3, -0x1e);
          func_02027ee0(param_1, 1, -0x32);
          func_02027ee0(param_1, 2, 0x32);
          func_02027ee0(param_1, 5, -200);
          func_02027b38(param_1, -100);
          if (bVar14) {
            if (param_3 != 0) {
              func_0202802c(param_1, 1, -6);
              func_0202802c(param_1, 2, 6);
            } else {
              func_0202802c(param_1, 0, -6);
              func_0202802c(param_1, 3, 6);
              func_0202802c(param_1, 4, 6);
            }
          }
          iVar6 = func_02027f78(param_1, 3);
          if (iVar6 <= 0) {
            *(s32 *)(param_1 + 0x464) = 1;
          }
          break;
        case 0x38:
          piVar7 = (s32 *)data_0215be34;
          iVar6 = piVar7 != 0 ? *piVar7 : 0;
          func_02081198(iVar6, 0x66, data_02139e50[*(s8 *)(param_1 + 0x88)]);
          func_02027ee0(param_1, 0, 0x32);
          func_02027ee0(param_1, 4, -0x14);
          func_02027ee0(param_1, 1, -0x32);
          func_02027ee0(param_1, 5, -0x32);
          func_02027b38(param_1, -0x14);
          if (bVar14) {
            if (param_3 != 0) {
              func_0202802c(param_1, 1, -1);
              func_0202802c(param_1, 2, 1);
              func_0202802c(param_1, 4, -1);
            } else {
              func_0202802c(param_1, 0, -1);
              func_0202802c(param_1, 1, 1);
              func_0202802c(param_1, 3, 1);
              func_0202802c(param_1, 4, 1);
            }
          }
          iVar6 = func_02027f78(param_1, 4);
          if (iVar6 <= 0) {
            *(s32 *)(param_1 + 0x464) = 1;
          }
          break;
        case 0x39:
          piVar7 = (s32 *)data_0215be34;
          iVar6 = piVar7 != 0 ? *piVar7 : 0;
          func_02081198(iVar6, 0x69, data_02139e50[*(s8 *)(param_1 + 0x88)]);
          func_02027ee0(param_1, 0, 0x3c);
          func_02027ee0(param_1, 4, -0x14);
          func_02027ee0(param_1, 1, -0x32);
          func_02027ee0(param_1, 5, -0x96);
          func_02027b38(param_1, -0x28);
          if (bVar14) {
            if (param_3 != 0) {
              func_0202802c(param_1, 1, -2);
              func_0202802c(param_1, 2, 2);
            } else {
              func_0202802c(param_1, 0, -2);
              func_0202802c(param_1, 3, 2);
              func_0202802c(param_1, 4, 2);
            }
          }
          iVar6 = func_02027f78(param_1, 4);
          if (iVar6 <= 0) {
            *(s32 *)(param_1 + 0x464) = 1;
          }
        }
        func_0209bdcc(param_1 + 0x95c, sVar1, uVar11);
        func_020c1e9c(iVar5, uVar11);
      }
    }
  }
  *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
  if (*(u16 *)data_0215942c == 0x8003) {
    bDone = 0;
    goto LAB_944;
  }
  if (*(s16 *)(param_1 + 0xfa) == 0x23) {
    bDone = 0;
    goto LAB_944;
  }
  if (iVar5 != 0) {
    if (*(s16 *)(iVar5 + 0x90) == 0 || *(s16 *)(iVar5 + 0x90) == 2) {
      bDone = 1;
    } else if (*(s16 *)(iVar5 + 0x94) == 0x35 && func_020c1f34(iVar5) == 0) {
      bDone = 1;
    } else {
      bDone = 0;
    }
    if (bDone == 0) goto LAB_zero;
  }
  func_0203e908(param_1, 0x5d);
  func_020362f8(param_1);
  bDone = 1;
  goto LAB_944;
LAB_zero:
  bDone = 0;
LAB_944:
  if (bDone != 0) {
    return;
  }
  if (((*(u16 *)0x04000304) & 0x8000) >> 15 == 0) {
    iVar6 = func_02028130(param_1);
    iVar8 = func_02028130(param_1);
    uVar11 = FX_Mul(iVar8, iVar6);
    iVar6 = func_020aaf38(data_0214f460, (s32 *)(param_1 + 0x378), FX_Mul(uVar11, 0x1004));
    if (iVar6 != 0) {
      func_0203e908(param_1, 0x41f);
      return;
    }
  }
  if (*(u16 *)(param_1 + 0xfc) > 0x12 && local_3c > FX_Mul(uVar12, uVar12)) {
    func_ov003_0219a368(param_1);
    return;
  }
  if (*(s32 *)(param_1 + 0x464) != 0) {
    func_0203e908(param_1, 0x422);
    return;
  }
  if (func_020c1f34(iVar5) != 0) {
    return;
  }
  iVar6 = *(s32 *)data_0214f464 * 0x10dcd + 1;
  *(s32 *)data_0214f464 = iVar6;
  bit = (u32)(iVar6 << 16) >> 31;
  switch (bit) {
  case 0:
    func_0203e908(param_1, 0x426);
    break;
  case 1:
    func_0203e908(param_1, 0x427);
    break;
  }
}
