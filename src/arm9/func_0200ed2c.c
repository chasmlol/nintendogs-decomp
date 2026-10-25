#include "ctx.h"

#define FXM(a, b) ((s32)((((s64)(a)) * ((s64)(b)) + 0x800) >> 12))

extern s32 func_02028124(u8 *p);
extern s32 func_0202518c(u8 *p, s32 a, s32 b);
extern s32 func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_0203567c(u8 *p);
extern s32 func_02036578(u8 *p);
extern s32 func_020364cc(u8 *p);
extern s32 func_02036484(u8 *p);
extern s32 func_0203646c(u8 *p);
extern s32 func_02058728(u8 *p, s32 a);
extern s32 func_ov003_0219a368(u8 *p);
extern s32 func_0202fb38(u8 *p);
extern s32 func_ov003_0218c504(u8 *p, s32 a);
extern void func_0202fd8c(u8 *p, s32 a);

void func_0200ed2c(u8 *param_1)
{
  s32 iVar3;
  s32 iVar4;
  s32 iVar5;
  s32 uVar2;
  s32 bVar1;

  uVar2 = func_02028124(param_1);
  iVar3 = func_0202518c(param_1, 12, FXM(uVar2, 0x4aa));
  if (iVar3 == 0) {
    uVar2 = func_02028124(param_1);
    func_0202518c(param_1, 29, FXM(uVar2, 0x121));
  }
  iVar3 = func_0203541c(param_1);
  if (iVar3 == 0) {
    goto z0;
  }
  func_0203e8cc(param_1, 2, 1);
  switch (*(s16 *)(iVar3 + 0x90)) {
  case 4:
    goto c4;
  case 7:
    goto c7;
  }
  goto after;
c4:
  if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
    *(u32 *)(param_1 + 0x948) = 1;
  }
  goto after;
c7:
  if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
    *(u32 *)(param_1 + 0x948) = 8;
  }
after:
  iVar3 = func_ov003_02198298(param_1);
  goto chk;
z0:
  iVar3 = 0;
chk:
  if (iVar3 != 0) {
    return;
  }
  if (func_0203567c(param_1) == 0) {
    return;
  }
  iVar3 = func_02036578(param_1);
  iVar4 = func_020364cc(param_1);
  iVar5 = func_02036484(param_1);
  bVar1 = func_0203646c(param_1);
  if (iVar3 != 0 && func_02058728(param_1, iVar3) != 0) {
    return;
  }
  if (iVar4 != 0 && func_ov003_0219a368(param_1) != 0) {
    return;
  }
  if (iVar5 != 0 && func_0202fb38(param_1) != 0) {
    return;
  }
  if (bVar1 && func_ov003_0218c504(param_1, 0) != 0) {
    return;
  }
  func_0202fd8c(param_1, 0);
}
