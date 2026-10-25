#include "ctx.h"

extern s32 func_02036578(u8 *p);
extern void func_02027654(s32 a, void *b);
extern void func_02035be8(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern s32 func_0203592c(u8 *p, u32 a);
extern s32 func_020357c8(u8 *p, u32 a);
extern void func_020362f8(u8 *p);
extern void func_0202fcc0(u8 *p);

void func_020458dc(u8 *param_1)
{
  s32 iVar2;
  iVar2 = func_02036578(param_1);
  if (iVar2 != 0) {
    func_02027654(iVar2, param_1 + 948);
  }
  func_02035be8(param_1);
  if (func_020289d0(param_1, 0, 1) != 0) {
    return;
  }
  if (func_0203592c(param_1, 0) != 0) {
    return;
  }
  if (func_020357c8(param_1, 0) != 0) {
    return;
  }
  if (iVar2 != 0 && *(s16 *)((u8 *)iVar2 + 234) == 0x2fd) {
    return;
  }
  func_020362f8(param_1);
  func_0202fcc0(param_1);
}
