#include "ctx.h"

extern u8 data_02152cd8[];
extern u32 data_02159444;
extern u32 data_0215f89c_val[];
extern s32 func_02028130(u8 *p);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_02027b38(u8 *p, s32 a);
extern void func_02027ee0(u8 *p, s32 a, s32 b);
extern void func_ov005_021601e8(u8 *p, s32 *a, s32 b, s32 *c, s32 d);
extern s32 func_ov005_0215ffdc(u8 *p, s32 a, s32 b, s32 c);
extern void func_020399ec(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern void func_ov005_0216047c(u8 *p, s32 a);

void func_ov005_0215f6dc(u8 *param_1)
{
  s32 iVar2;
  s32 loc[6];
  s16 sVar1;
  s32 iVar3;
  u8 *g;
  s32 vb;
  s32 va;

  loc[0] = *(s32 *)((u8 *)data_02152cd8 + 0x4c);
  loc[1] = *(s32 *)((u8 *)data_02152cd8 + 0x58);
  loc[2] = *(s32 *)((u8 *)data_02152cd8 + 0x64);
  loc[3] = *(s32 *)((u8 *)data_02152cd8 + 0x54);
  loc[4] = *(s32 *)((u8 *)data_02152cd8 + 0x60);
  loc[5] = *(s32 *)((u8 *)data_02152cd8 + 0x6c);
  sVar1 = *(s16 *)(*(u8 **)&data_02159444 + 0x86);
  iVar2 = func_02028130(param_1);
  func_01ff832c(iVar2 * ((sVar1 - 60) >> 3), &loc[3], (s32 *)(0x2a0 + param_1), (s32 *)(0x3b4 + param_1));
  sVar1 = *(s16 *)(*(u8 **)&data_02159444 + 0x88);
  iVar2 = func_02028130(param_1);
  func_01ff832c(iVar2 * ((10 - sVar1) >> 3), &loc[0], (s32 *)(param_1 + 0x3b4), (s32 *)(0x3b4 + param_1));
  g = *(u8 **)&data_02159444;
  if ((*(u16 *)(g + 0x84) & 1) != 0) {
    va = *(s32 *)(g + 0x98);
    vb = *(s32 *)(g + 0x94);
    if (va <= 0) {
      va = -va;
    }
    if (vb <= 0) {
      vb = -vb;
    }
    if (vb + va > 10) {
      func_02027ee0(param_1, 1, 30);
    } else {
      *(u16 *)(param_1 + 0x128) = *(u16 *)((u32)param_1 + 0x128) + 1;
      if (*(u16 *)(0x128 + param_1) >= 60) {
        *(u16 *)(0x128 + param_1) = 0;
        func_02027b38(param_1, -20);
      }
      func_02027ee0(param_1, 1, -10);
    }
  }
  func_ov005_021601e8(param_1, (s32 *)(0x2dc + param_1), 0x668, 0, 0);
  iVar2 = func_ov005_0215ffdc(param_1, 60, 12, 0);
  if (iVar2 == 0) {
    func_020399ec(param_1);
  }
  *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
  if (*(u16 *)(0x11c + param_1) > 20) {
    func_0203e908(param_1, 0x451);
    return;
  }
  func_ov005_0216047c(param_1, 1);
}
