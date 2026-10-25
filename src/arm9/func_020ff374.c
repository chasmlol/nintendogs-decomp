#include "ctx.h"

extern u8 data_02147a8c[];
extern u8 data_02147a9c[];
extern u8 data_02147aac[];
extern u8 data_02147ac8[];
extern u8 data_021479ec[];
extern u8 data_021479e4[];
extern u8 data_021479fc[];
extern u8 data_02147a04[];
extern u8 data_021479f4[];
extern u8 data_0215be48[];
extern void func_0210ea40(u32 a, u32 b);
extern u32 func_0210e968(u32 a, u8 *b);
extern void func_02113090(u32 a, u32 b);
extern void func_021130c4(u32 a, u32 b);
extern void func_02112ed0(u32 a, u32 b);
extern void func_02112e74(u32 a, u32 b);
extern void func_02117a58(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
extern void func_02117f98(u8 *p, u32 a, u8 *b, u32 c, u32 d, u32 e, u32 f);
extern void func_02117cf0(u8 *p);
extern void func_021092fc(void);

void func_020ff374(u32 *param_1, u32 param_2, u32 param_3, u32 param_4)
{
  u32 iVar2;
  u32 iVar3;
  u32 iVar4;
  u32 iVar5;
  u8 *p;
  p = (u8 *)param_1;
  *param_1 = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0x1000;
  func_0210ea40(13, 0x1000);
  iVar2 = func_0210e968(13, data_02147a8c);
  iVar3 = func_0210e968(13, data_02147a9c);
  iVar4 = func_0210e968(13, data_02147aac);
  iVar5 = func_0210e968(13, data_02147ac8);
  func_02113090(2, iVar2);
  func_021130c4(2, iVar3);
  func_02112ed0(2, iVar4);
  func_02112e74(2, iVar5);
  func_02117a58(p + 4, 2, 0, 1, 2, 3, 0, 0, 0, 10, 5);
  func_02117a58(p + 0x40, 2, 1, 1, 4, 5, 0, 0, 0, 10, 5);
  func_02117a58(p + 0x7c, 2, 2, 1, 6, 7, 0, 0, 0, 10, 5);
  func_02117a58(p + 0xb8, 2, 3, 1, 8, 9, 0, 0, 0, 10, 5);
  func_02117a58(p + 0xf4, 2, 4, 1, 10, 11, 0, 0, 0, 10, 5);
  func_02117f98(p + 0x130, 2, data_021479ec, 0, 0x80, 0x6b, 0x10);
  func_02117f98(p + 0x150, 2, data_021479e4, 1, 0x80, 0x6b, 0x10);
  func_02117f98(p + 0x170, 2, data_021479fc, 2, 0x80, 0x6b, 0x10);
  func_02117f98(p + 0x190, 2, data_02147a04, 3, 0x80, 0x6b, 0x10);
  func_02117f98(p + 0x1b0, 2, data_021479f4, 4, 0x120, 0x95, 0x10);
  func_02117cf0(p + 0x130);
  func_02117cf0(p + 0x150);
  func_02117cf0(p + 0x170);
  func_02117cf0(p + 0x190);
  func_02117cf0(p + 0x1b0);
  *(u32 *)(*(u8 **)data_0215be48 + 0x1000 + 0xce0) = 6;
  *(u32 *)(*(u8 **)data_0215be48 + 0x4000 + 0x8c0) = 6;
  func_021092fc();
}
