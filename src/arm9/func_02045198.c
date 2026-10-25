#include "ctx.h"

extern u32 data_0214f464;

extern s32 func_02036510(u8 *p);
extern void func_02039448(u8 *p);
extern void func_02027668(s32 a, void *b);
extern void func_02027654(s32 a, void *b);
extern void func_02037450(u8 *p, u32 n);
extern s32 func_0200f8e0(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern void func_020397fc(u8 *p);

void func_02045198(u8 *param_1)
{
  s32 iVar1;
  u32 bVar3;
  u32 uVar2;
  u32 *pv;
  bVar3 = 0;
  if (*(u16 *)(param_1 + 252) > 100) {
    pv = *(u32 **)&data_0214f464;
    uVar2 = *pv * 0x10dcd + 1;
    *pv = uVar2;
    if ((u16)(((u32)(u16)uVar2 * 3) >> 16) == 0) {
      bVar3 = 1;
    }
  }
  iVar1 = func_02036510(param_1);
  if (iVar1 != 0) {
    func_02039448(param_1);
    func_02027668(iVar1, param_1 + 632);
    func_02027654(iVar1, param_1 + 948);
    func_02037450(param_1, 768);
  }
  if (func_0200f8e0(param_1) != 0) {
    return;
  }
  if (func_020289d0(param_1, 0, 1) != 0) {
    return;
  }
  if (bVar3 != 0) {
    func_020397fc(param_1);
  }
}
