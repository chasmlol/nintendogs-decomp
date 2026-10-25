#include "ctx.h"

typedef struct { u32 w[4]; } T16;

extern u8 data_0214e39c[];
extern u8 data_0214e3ac[];
extern u8 data_0214e3bc[];
extern u8 data_0214e3cc[];
extern u8 data_0214e3e8[];
extern u8 data_0214e44c[];
extern u8 data_0214e400[];
extern u8 data_0214e418[];
extern u8 data_0214e430[];
extern u8 data_0215be48[];
extern u8 data_02159030[];
extern u8 data_0214e350[];
extern u8 data_0214e358[];
extern void func_0210ea40(u32 a, u32 b);
extern u32 func_0210e968(u32 a, u8 *b);
extern void func_02113090(u32 a, u32 b);
extern void func_021130c4(u32 a, u32 b);
extern void func_0211305c(u32 a, u32 b);
extern void func_02112ed0(u32 a, u32 b);
extern void func_02112e74(u32 a, u32 b);
extern void func_020fc76c(u32 a, u8 *b, u8 *c, u8 *d, u8 *e);
extern void func_0211216c(u32 a, u32 b);
extern void func_02112958(u32 a, u32 b, u32 c);
extern void func_020fc8b0(u32 a, u32 b, u32 c);
extern void func_02101cf4(void);
extern void func_02101894(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_02101280(u32 a, u32 b);
extern void func_02100e38(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
extern s32 func_01ffdb08(s32 a);
extern u32 func_02023788(s32 a, s16 b);
extern u8 *func_02024114(s32 a, s16 b);
extern void func_02121170(u8 *p, u32 fn, u32 *a, u16 *b, u32 c, u32 d, u32 e, u32 f, u32 g);
extern u32 func_02044ce4(s32 a);
extern void func_02112798(u32 a, u32 b, u32 c);
extern void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_02108e24(u32 a);
extern void func_02125958(void);
extern void func_021258d4(void);

void func_02125538(u8 *param_1, u32 param_2, u32 param_3, u32 param_4)
{
  s32 iVar3, iVar4, iVar5, iVar6, iVar7;
  s32 i;
  u32 uVar9;
  u8 *puVar10;
  u16 local34[3];
  T16 local2c;
  (void)param_2;
  (void)param_3;
  (void)param_4;

  puVar10 = param_1 + 0x1d10;
  func_0210ea40(0x42, 0x1d10);
  iVar3 = (s32)func_0210e968(0x42, data_0214e39c);
  iVar4 = (s32)func_0210e968(0x42, data_0214e3ac);
  iVar5 = (s32)func_0210e968(0x42, data_0214e3bc);
  iVar6 = (s32)func_0210e968(0x42, data_0214e3cc);
  iVar7 = (s32)func_0210e968(0x42, data_0214e3e8);
  func_02113090(2, iVar3);
  func_021130c4(2, iVar4);
  func_0211305c(2, iVar5);
  func_02112ed0(2, iVar6);
  func_02112e74(2, iVar7);
  func_020fc76c(0x42, data_0214e400, data_0214e418, data_0214e430, data_0214e44c);
  *(u32 *)(*(u8 **)data_0215be48 + 0xc838) = 4;
  *(u32 *)(*(u8 **)data_0215be48 + 0xc83c) = 0;
  func_0211216c(1, 1);
  func_0211216c(0, 1);
  func_0211216c(3, 1);
  func_0211216c(2, 3);
  func_02112958(2, 0x15, 1);
  func_020fc8b0(2, 0, 2);
  func_02101cf4();
  func_02101894(0, iVar6, iVar4, 0x15, 0);
  func_02101280(0, 0x15);
  func_02100e38(0, iVar5, 0x15, 0, *(u32 *)(*(u8 **)data_02159030 + 0xc), 0xf6e, 0, (u32)func_02125958);
  for (i = 0; i < 6; i++) {
    func_02101894(0, iVar6, iVar4, i + 0x16, 0);
  }
  iVar3 = func_01ffdb08((s16)*(u32 *)puVar10);
  for (i = 0; i < 15; i++) {
    *(s16 *)(param_1 + (u32)i * 2 + 0x68) = -1;
  }
  *(u32 *)(param_1 + 0x88) = 0;
  for (i = 0; i < 20; i++) {
    if (func_02023788(iVar3, i) == 2) {
      if (*(u16 *)func_02024114(iVar3, i) != 1) {
        *(s16 *)(param_1 + *(u32 *)(param_1 + 0x88) * 2 + 0x68) = (s16)i;
        *(u32 *)(param_1 + 0x88) = *(u32 *)(param_1 + 0x88) + 1;
      }
    }
  }
  *(u32 *)(puVar10 + 4) = 0;
  local34[0] = *(u16 *)data_0214e350;
  local34[1] = *(u16 *)(data_0214e350 + 2);
  local34[2] = *(u16 *)(data_0214e350 + 4);
  local2c = *(T16 *)data_0214e358;
  func_02121170(param_1, (u32)func_021258d4, (u32 *)&local2c, local34, 3, 6, 0x28, *(u32 *)(param_1 + 0x88), *(u32 *)(puVar10 + 4));
  iVar3 = (s32)func_02044ce4((s16)*(u32 *)puVar10);
  if (iVar3 != 0) {
    for (i = 0; i < 6; i++) {
      func_02112798(2, (u16)(i + 9), 0);
    }
    *(u32 *)(param_1 + 0x94) = 6;
    uVar9 = 1;
  } else {
    uVar9 = 0;
    *(u32 *)(param_1 + 0x94) = 0;
  }
  func_02097b94(2, 0xf6f, uVar9, (u32)(void *)func_02125958, 1);
  func_02108e24(0);
}
