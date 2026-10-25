#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern s32 func_02036578(u8 *p);
extern void func_02027654(s32 a, void *b);
extern void func_0203942c(u8 *p);
extern s32 func_02037450(u8 *p, s32 a);
extern u32 func_0203292c(u8 *p);
extern u32 func_02027708(s32 a);
extern void func_02035be8(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0203592c(u8 *p, s32 a);
extern s32 func_020357c8(u8 *p, s32 a);
extern void func_0202fd8c(u8 *p, s32 a);
extern s32 func_01ffdb08(u32 a);
extern void func_02027668(s32 a, s32 *b);
extern void func_0203945c(u8 *p, s32 *b, u32 c);
extern s32 func_0204e7e4(u8 *p, s32 a);
extern s32 func_02028124(u8 *p);
extern s32 func_02032aac(u8 *p, u32 a);
extern void func_02056724(u8 *p, s32 a);
extern void func_020557dc(u8 *p, s32 a);

void func_0204cc24(u8 *param_1, s32 param_2)
{
  s32 bVar1;
  s32 iVar2;
  s32 iVar3;
  s32 unaff_r4;
  u32 uVar5;
  u32 uVar4;
  s32 aiStack_28[3];

  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  iVar2 = func_02036578(param_1);
  if (iVar2 != 0) {
    func_02027654(iVar2, param_1 + 0x26c);
    *(T3 *)(param_1 + 0x3b4) = *(T3 *)(param_1 + 0x26c);
    func_0203942c(param_1);
    unaff_r4 = func_02037450(param_1, 0x302);
    uVar5 = func_0203292c(param_1);
    uVar4 = func_02027708(iVar2);
  }
  func_02035be8(param_1);
  iVar3 = func_020289d0(param_1, 0, 1);
  if (iVar3 != 0) {
    return;
  }
  if (func_0203592c(param_1, 0) != 0) {
    return;
  }
  if (func_020357c8(param_1, 0) != 0) {
    return;
  }
  if (iVar2 == 0) {
    func_0202fd8c(param_1, 0);
    return;
  }
  if (uVar5 != 0xffffffff && uVar5 != uVar4) {
    iVar2 = func_01ffdb08(uVar5);
    if (iVar2 == 0) {
      return;
    }
    func_02027668(iVar2, aiStack_28);
    func_0203945c(param_1, aiStack_28, uVar5);
    return;
  }
  iVar3 = func_0204e7e4(param_1, param_2);
  if (iVar3 != 0) {
    return;
  }
  iVar3 = *(s16 *)(iVar2 + 0xea);
  if (iVar3 < 0x270) goto za1;
  if (iVar3 <= 0x273) {
    bVar1 = 1;
    goto ja1;
  }
za1:
  bVar1 = 0;
ja1:
  if (bVar1 != 0) {
    bVar1 = 1;
    goto done1;
  }
  if (iVar3 < 0x259) goto zb1;
  if (iVar3 <= 0x25f) {
    bVar1 = 1;
    goto jb1;
  }
zb1:
  bVar1 = 0;
jb1:
  if (bVar1 == 0) goto zero1;
  iVar3 = *(s16 *)(iVar2 + 0xee);
  if (iVar3 < 0x270) goto zc1;
  if (iVar3 <= 0x273) {
    bVar1 = 1;
    goto jc1;
  }
zc1:
  bVar1 = 0;
jc1:
  if (bVar1 != 0) {
    bVar1 = 1;
    goto done1;
  }
zero1:
  bVar1 = 0;
done1:
  if (bVar1 && *(u16 *)(param_1 + 0xfc) > 300) {
    iVar3 = func_02028124(param_1);
    if (unaff_r4 < iVar3) {
      goto LAB_0204cf08;
    }
    uVar5 = func_02027708(iVar2);
    if (func_02032aac(param_1, uVar5) != 0) {
      goto LAB_0204cf08;
    }
  }
  iVar3 = *(s16 *)(iVar2 + 0xea);
  if (iVar3 < 0x270) goto za2;
  if (iVar3 <= 0x273) {
    bVar1 = 1;
    goto ja2;
  }
za2:
  bVar1 = 0;
ja2:
  if (bVar1 != 0) {
    bVar1 = 1;
    goto done2;
  }
  if (iVar3 < 0x259) goto zb2;
  if (iVar3 <= 0x25f) {
    bVar1 = 1;
    goto jb2;
  }
zb2:
  bVar1 = 0;
jb2:
  if (bVar1 == 0) goto zero2;
  iVar3 = *(s16 *)(iVar2 + 0xee);
  if (iVar3 < 0x270) goto zc2;
  if (iVar3 <= 0x273) {
    bVar1 = 1;
    goto jc2;
  }
zc2:
  bVar1 = 0;
jc2:
  if (bVar1 != 0) {
    bVar1 = 1;
    goto done2;
  }
zero2:
  bVar1 = 0;
done2:
  if (bVar1) {
    return;
  }
  iVar3 = func_02028124(param_1);
  if (unaff_r4 >= iVar3) {
    uVar5 = func_02027708(iVar2);
    if (func_02032aac(param_1, uVar5) == 0) {
      return;
    }
  }
LAB_0204cf08:
  if (param_2 == 3) {
    func_02056724(param_1, iVar2);
    return;
  }
  func_020557dc(param_1, iVar2);
}
