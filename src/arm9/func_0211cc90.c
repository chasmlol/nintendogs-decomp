#include "ctx.h"

extern u8 *data_02159060;
extern u8 *data_02159424;
extern void func_0211ea50(void);
extern void func_0211dfc8(s32 *p);
extern void func_0211d658(s32 *p);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_02107d9c(s32 a);
extern void func_02107c80(void);
extern s32 func_0209531c(void);
extern void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);
extern s16 *func_0210f100(s32 a, s32 b);
extern s32 func_0211c294(s16 *a, s32 b);
extern void func_0209401c(s32 a);
extern void func_020942c0(s16 *a, s32 b);
extern s32 func_0211b4c0(s16 *a);
extern void func_02093ef8(u32 a);
extern void func_0209ad58(u32 a);

void func_0211cc90(s32 *param_1)
{
  s32 *piVar8;
  s32 *piVar6;
  s16 *puVar5;
  s16 *psVar2;
  s32 iVar4;
  s16 hi;
  s16 lo;
  s16 st[2];

  piVar8 = (s32 *)((u8 *)param_1 + 0x1ce0);
  piVar6 = param_1 + 0x730;
  puVar5 = (s16 *)((u8 *)param_1 + 0x1ce8);
  switch (param_1[7]) {
  case 0:
    func_0211dfc8(param_1);
    if (*piVar8 == 0) {
      func_0211d658(param_1);
    }
    return;
  case 1:
    param_1[5] = param_1[5] + 1;
    if (param_1[5] > 10) {
      param_1[5] = 0;
      iVar4 = 2;
      param_1[7] = 2;
      if (param_1[0x738] == 0) {
        if (param_1[9] == 0) {
          iVar4 = 9;
        } else {
          iVar4 = 12;
        }
      } else if (param_1[9] != 0) {
        iVar4 = 5;
      }
      func_02112798(2, iVar4, 0);
    }
    return;
  case 2:
    param_1[5] = param_1[5] + 1;
    if (param_1[5] <= 10) {
      return;
    }
    param_1[5] = 0;
    if (param_1[9] == 0) {
      param_1[7] = 3;
      return;
    }
    if (*piVar6 == 4) {
      func_02107c80();
      return;
    }
    func_02107d9c(*piVar6);
    return;
  case 3:
    if (*(s32 *)(data_02159060 + 0xa4) == 0) {
      return;
    }
    psVar2 = func_0210f100(*(s16 *)((u8 *)piVar6 + 8), *(s16 *)((u8 *)piVar6 + 10));
    iVar4 = func_0211c294(psVar2, *piVar6);
    hi = *(s16 *)((u8 *)piVar6 + 10);
    lo = *(s16 *)((u8 *)piVar6 + 8);
    st[0] = lo;
    st[1] = hi;
    switch (*piVar6) {
    case 2:
      func_0209401c(param_1[1] * iVar4 + param_1[2]);
      func_020942c0(st, (s16)-param_1[1]);
      func_02107d9c(*piVar6);
      return;
    case 4:
      func_0209401c(param_1[2] - param_1[1] * iVar4);
      *(s16 *)(*(u8 **)(data_02159424 + 4) + 10) = *puVar5;
      return;
    case 3:
      func_0209401c(param_1[2] - param_1[1] * iVar4);
      if (func_0211b4c0(psVar2) == 0) {
        func_020942c0(st, (s16)param_1[1]);
      }
      func_02093ef8((u16)st[1]);
      func_0209ad58(30);
      piVar6[6] = 1;
      param_1[7] = -1;
      return;
    default:
      func_0209401c(param_1[2] - param_1[1] * iVar4);
      func_020942c0(st, (s16)param_1[1]);
      func_02107d9c(*piVar6);
      return;
    }
  case 4:
    if (*(s16 *)(data_02159060 + 0x9a) == 0) {
      goto zero_arm;
    }
    if (*(s16 *)(data_02159060 + 0x9a) == 1) {
      goto one_arm;
    }
    return;
  zero_arm:
    {
      s32 unaff_r4;
      u32 uVar7;

      uVar7 = 0;
      if (*piVar6 == 4) {
        unaff_r4 = 0x238f;
        iVar4 = func_0209531c();
        if (iVar4 == 0) {
          uVar7 = 1;
        }
      } else if (*piVar6 == 3) {
        unaff_r4 = 0x24b9;
      }
      func_02097b94(8, unaff_r4, uVar7, (u32)func_0211ea50, 0);
      param_1[7] = 3;
      return;
    }
  one_arm:
    if (param_1[0x738] == 0) {
      if (param_1[9] == 0) {
        iVar4 = 9;
      } else {
        iVar4 = 12;
      }
    } else if (param_1[9] == 0) {
      iVar4 = 2;
    } else {
      iVar4 = 5;
    }
    func_02112798(2, iVar4, 0);
    param_1[7] = 0;
    break;
  }
}
