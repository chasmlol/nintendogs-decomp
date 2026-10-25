#include "ctx.h"

extern s32 func_0203567c(u8 *p);
extern s32 func_02036510(u8 *p);
extern void func_02039448(u8 *p);
extern void func_02027668(s32 a, void *b);
extern void func_02027654(s32 a, void *b);
extern void func_02037450(u8 *p, u32 n);
extern s32 func_0200f8e0(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern void func_020397fc(u8 *p);

void func_02045360(u8 *param_1)
{
  s32 iVar1;
  s32 iVar2;
  iVar1 = func_0203567c(param_1);
  iVar2 = func_02036510(param_1);
  if (iVar2 != 0) {
    func_02039448(param_1);
    func_02027668(iVar2, param_1 + 632);
    func_02027654(iVar2, param_1 + 948);
    func_02037450(param_1, 768);
  }
  if (func_0200f8e0(param_1) != 0) {
    return;
  }
  if (func_020289d0(param_1, 0, 1) != 0) {
    return;
  }
  if (iVar1 != 0) {
    func_020397fc(param_1);
  }
}
