#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u32 data_02159444;
extern u32 data_02152cd8;
extern void func_02027ee0(int p, int a, int b);
extern void func_ov005_0215da28(int p, void *a, int b);
extern u32 func_02028130(int p);
extern void func_01ff832c(u32 a, void *b, void *c, void *d);
extern void func_0203e908(int p, int a);
extern void func_ov005_0215dbec(int p, int a);

void func_ov005_0215caf8(int param_1, int *param_2, int param_3)
{
  u32 v;
  u8 *ptr;
  s16 sVar1;
  s32 iVar3;
  s32 iVar2;
  u32 st[6];

  ptr = *(u8 **)&data_02159444;
  if ((*(u16 *)(ptr + 0x84) & 1) != 0) {
    iVar2 = *(s32 *)(ptr + 0x98);
    iVar3 = *(s32 *)(ptr + 0x94);
    if (iVar2 <= 0) {
      iVar2 = -iVar2;
    }
    if (iVar3 <= 0) {
      iVar3 = -iVar3;
    }
    if (iVar3 + iVar2 > 10) {
      func_02027ee0(param_1, 5, 30);
    } else {
      func_02027ee0(param_1, 5, -10);
    }
  }
  func_ov005_0215da28(param_1, param_2, param_3);
  st[0] = *(u32 *)((u8 *)&data_02152cd8 + 0x4c);
  st[1] = *(u32 *)((u8 *)&data_02152cd8 + 0x58);
  st[2] = *(u32 *)((u8 *)&data_02152cd8 + 0x64);
  st[3] = *(u32 *)((u8 *)&data_02152cd8 + 0x54);
  st[4] = *(u32 *)((u8 *)&data_02152cd8 + 0x60);
  st[5] = *(u32 *)((u8 *)&data_02152cd8 + 0x6c);
  sVar1 = *(s16 *)(*(u8 **)&data_02159444 + 0x86);
  v = func_02028130(param_1);
  func_01ff832c(v * ((0x28 - sVar1) >> 3), &st[0], (void *)(param_1 + 672), (void *)(param_1 + 948));
  sVar1 = *(s16 *)(*(u8 **)&data_02159444 + 0x88);
  v = func_02028130(param_1);
  func_01ff832c(v * ((10 - sVar1) >> 3), &st[3], (void *)(param_1 + 948), (void *)(param_1 + 948));
  *(u32 *)(param_1 + 0x488) = *(u32 *)(param_1 + 0x488) + 1;
  if (*(u16 *)(param_1 + 0x11c) > 20) {
    if ((*(u16 *)(*(u8 **)&data_02159444 + 0x84) & 1) != 0) {
      func_0203e908(param_1, 0x43d);
      return;
    }
    func_0203e908(param_1, 0x440);
    return;
  }
  if ((*(u16 *)(*(u8 **)&data_02159444 + 0x84) & 2) == 0 && *(u16 *)(param_1 + 0x11c) <= 1) {
    return;
  }
  func_ov005_0215dbec(param_1, 1);
}
