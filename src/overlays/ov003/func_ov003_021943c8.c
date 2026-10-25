#include "ctx.h"

typedef struct { u32 w[3]; } T12;

extern u8 data_0215942c[];
extern s32 func_020364cc(u8 *p);
extern void func_02039448(u8 *p);
extern void func_02037450(u8 *p, u32 n);
extern u32 func_0203592c(u8 *p, s32 q);
extern u32 func_020c1f34(s32 q);
extern u32 func_02026c40(u8 *p, s32 q);
extern void func_0202fd7c(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_0203e908(u8 *p, u32 n);
extern s32 func_ov003_02197f94(u8 *p, s32 n);
extern s32 func_02027ec8(u8 *p, u32 n);
extern void func_ov003_0219a368(u8 *p);

void func_ov003_021943c8(u8 *param_1)
{
  s32 iVar4;
  s32 iVar5;
  u32 uVar8;
  u32 bVar3;
  iVar4 = func_020364cc(param_1);
  uVar8 = *(u16 *)(param_1 + 0xfc);
  if (iVar4 != 0) {
    func_02039448(param_1);
    *(T12 *)(param_1 + 0x278) = *(T12 *)(iVar4 + 0xbc);
    *(T12 *)(param_1 + 0x3b4) = *(T12 *)(param_1 + 0x278);
    func_02037450(param_1, 0x300);
    if (*(u16 *)(iVar4 + 0xa4) != 0) {
      uVar8 = *(u16 *)(iVar4 + 0xa4);
    }
  }
  if (func_0203592c(param_1, iVar4) != 0) {
    return;
  }
  *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
  if (*(u16 *)(*(u8 **)data_0215942c) == 0x8003) {
    bVar3 = 0;
    goto AFTER;
  }
  if (*(s16 *)(param_1 + 0xfa) == 0x23) {
    bVar3 = 0;
    goto AFTER;
  }
  if (iVar4 == 0) {
    goto B93;
  }
  if (*(s16 *)(iVar4 + 0x90) == 0 || *(s16 *)(iVar4 + 0x90) == 2) {
    bVar3 = 1;
  } else if (*(s16 *)(iVar4 + 0x94) == 0x35 && func_020c1f34(iVar4) == 0) {
    bVar3 = 1;
  } else {
    bVar3 = 0;
  }
  if (bVar3 == 0) {
    goto NOTB;
  }
B93:
  func_0203e908(param_1, 0x5d);
  func_020362f8(param_1);
  bVar3 = 1;
  goto AFTER;
NOTB:
  if (func_02026c40(param_1, iVar4) != 0) {
    func_0202fd7c(param_1);
    func_020362f8(param_1);
    bVar3 = 1;
  } else {
    bVar3 = 0;
  }
AFTER:
  if (bVar3 != 0) {
    return;
  }
  if ((*(s8 *)(param_1 + 0x88) == *(s16 *)(iVar4 + 0x98)) || *(s16 *)(param_1 + 0xfa) == 0x23) {
    iVar5 = 1;
  } else {
    iVar5 = 0;
  }
  iVar5 = func_ov003_02197f94(param_1, iVar5);
  if (iVar5 != 0) {
    return;
  }
  iVar5 = func_02027ec8(param_1, 0);
  if ((s32)uVar8 > 60 - ((iVar5 * 246) >> 12)) {
    func_ov003_0219a368(param_1);
  }
}
