#include "ctx.h"

extern u8 data_02159424[];
extern u8 data_0214f130[];
extern s32 func_01ffdb08(u8 *p);
extern s32 func_0202817c(s32 a);
extern s32 func_02094f58(s32 a);
extern s32 func_02094c5c(s32 a, u32 *b, s32 *c);
extern s32 func_02094ee4(s32 a, u32 *b, s32 *c);
extern s32 func_02027f78(s32 a, u32 b);

u32 func_020b10f4(u8 *param_1)
{
  s32 iVar2;
  s32 iVar3;
  s32 iVar4;
  u32 uVar5;
  u8 *Q;
  u8 *X;
  iVar2 = func_01ffdb08(param_1);
  iVar3 = func_0202817c(iVar2);
  uVar5 = 0xffffffff;
  Q = *(u8 **)(*(u8 **)data_02159424 + 4);
  if (*(s16 *)Q != 7) {
    iVar4 = 0;
  } else {
    iVar4 = (s32)*(s16 *)(*(u8 **)(Q + 0x1c) + 4);
  }
  switch (iVar4) {
  case 0:
    break;
  case 1:
    goto C1;
  case 2:
    goto C2;
  case 3:
    goto C3;
  case 4:
  case 5:
    goto C45;
  case 6:
    goto C6;
  case 7:
    goto C7;
  }
  goto END;
C6:
  if (func_02094f58(iVar3) == 0) {
    uVar5 = 0;
    goto END;
  }
  X = *(u8 **)data_0214f130;
  if (func_02094ee4(iVar3, (u32 *)(X + 0x1c), (s32 *)(X + 0x2c)) == 0) {
    uVar5 = 1;
  }
  goto END;
C7:
  if (func_02094f58(iVar3) == 0) {
    uVar5 = 0;
  }
  goto END;
C1:
  if (func_02094f58(iVar3) == 0) {
    uVar5 = 0;
    goto END;
  }
  X = *(u8 **)data_0214f130;
  if (func_02094c5c(iVar3, (u32 *)(X + 0x1c), (s32 *)(X + 0x2c)) != 0) {
    uVar5 = 2;
    goto END;
  }
  if (func_02027f78(iVar2, 3) == 10000) {
    uVar5 = 4;
    goto END;
  }
  if (func_02027f78(iVar2, 4) == 10000) {
    uVar5 = 5;
    goto END;
  }
  if (func_02027f78(iVar2, 7) == 0) {
    uVar5 = 6;
  }
  goto END;
C3:
  if (func_02094f58(iVar3) == 0) {
    uVar5 = 0;
    goto END;
  }
  X = *(u8 **)data_0214f130;
  if (func_02094c5c(iVar3, (u32 *)(X + 0x1c), (s32 *)(X + 0x2c)) != 0) {
    uVar5 = 2;
    goto END;
  }
  if (func_02027f78(iVar2, 3) == 10000) {
    uVar5 = 4;
    goto END;
  }
  if (func_02027f78(iVar2, 4) == 10000) {
    uVar5 = 5;
    goto END;
  }
  if (func_02027f78(iVar2, 7) == 0) {
    uVar5 = 6;
  }
  goto END;
C2:
  if (func_02094f58(iVar3) == 0) {
    uVar5 = 0;
    goto END;
  }
  X = *(u8 **)data_0214f130;
  if (func_02094c5c(iVar3, (u32 *)(X + 0x1c), (s32 *)(X + 0x2c)) != 0) {
    uVar5 = 2;
    goto END;
  }
  if (*(s16 *)(iVar3 + 0x6a) <= 0) {
    uVar5 = 3;
    goto END;
  }
  if (func_02027f78(iVar2, 3) == 10000) {
    uVar5 = 4;
    goto END;
  }
  if (func_02027f78(iVar2, 4) == 10000) {
    uVar5 = 5;
    goto END;
  }
  if (func_02027f78(iVar2, 7) == 0) {
    uVar5 = 6;
  }
  goto END;
C45:
  if (func_02094f58(iVar3) == 0) {
    uVar5 = 0;
  }
END:
  return uVar5;
}
