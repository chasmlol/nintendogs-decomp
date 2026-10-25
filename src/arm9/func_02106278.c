#include "ctx.h"

extern u32 data_0215be48;
extern u32 data_02147d94;
extern u32 data_02147da4;
extern u32 data_02147db4;
extern u32 data_02147dc8;
extern u32 data_02147dfc;
extern u32 data_02147dd8;
extern u32 data_02147de8;
extern u32 data_02147df8;

extern u32 func_0210e968(u32 a, void *b);
extern void func_02113090(u32 a, u32 b);
extern void func_021130c4(u32 a, u32 b);
extern void func_02112ed0(u32 a, u32 b);
extern void func_02112e74(u32 a, u32 b);
extern void func_020fc76c(u32 a, void *b, void *c, void *d, void *e);

void func_02106278(u32 *param_1)
{
  u8 *g;
  u32 iVar2;
  u32 iVar3;
  u32 iVar4;
  u32 iVar5;
  g = *(u8 **)&data_0215be48;
  *(u32 *)(g + 0x483c) = 0;
  iVar2 = func_0210e968(0, &data_02147d94);
  iVar3 = func_0210e968(0, &data_02147da4);
  iVar4 = func_0210e968(0, &data_02147db4);
  iVar5 = func_0210e968(0, &data_02147dc8);
  func_02113090(0, iVar2);
  func_021130c4(0, iVar3);
  func_02112ed0(0, iVar4);
  func_02112e74(0, iVar5);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  func_020fc76c(0, &data_02147dd8, &data_02147de8, &data_02147df8, &data_02147dfc);
}
