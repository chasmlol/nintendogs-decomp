#include "ctx.h"

extern s32 func_02036578(u8 *p);
extern void func_02027654(s32 a, void *b);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, s32 a);
extern void func_02035be8(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0203592c(u8 *p, s32 a);
extern s32 func_020357c8(u8 *p, s32 a);
extern void func_0202fcc0(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_020526d4(u8 *p);

void func_0204ac54(u8 *param_1)
{
  s32 iVar2;
  s32 iVar3;
  s32 bVar1;

  iVar2 = func_02036578(param_1);
  if (iVar2 != 0) {
    func_02027654(iVar2, param_1 + 620);
    func_0203942c(param_1);
    func_02037450(param_1, 0x302);
  }
  func_02035be8(param_1);
  iVar3 = func_020289d0(param_1, 0, 1);
  if (iVar3 != 0) {
    bVar1 = 1;
    goto done;
  }
  if (func_0203592c(param_1, 0) != 0) {
    bVar1 = 1;
    goto done;
  }
  if (func_020357c8(param_1, 0) != 0) {
    bVar1 = 1;
    goto done;
  }
  if (iVar2 != 0) {
    bVar1 = 0;
    goto done;
  }
  func_0202fcc0(param_1);
  func_020362f8(param_1);
  bVar1 = 1;
done:
  if (bVar1 != 0) {
    return;
  }
  func_020526d4(param_1);
}
