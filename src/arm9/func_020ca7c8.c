#include "ctx.h"

typedef struct {
  s32 w[3];
} T12;

extern u32 data_02142e44;
extern s32 data_02142ca4;
extern s32 data_02142ca0;

extern void func_02006a30(s32 *a, s32 *b);
extern void func_01ff832c(u32 a, s32 *b, s32 *c, s32 *d);
extern u32 func_020be240(void);
extern s32 func_01ffdb08(s32 a);
extern s32 func_02028130(s32 a);
extern s32 func_02067898(s32 a, s32 b);
extern s16 func_02068078(s32 a, u32 b);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_020ca7c8(s32 *param_1, s32 *param_2, u32 param_3, s32 param_4)
{
  s32 local_30[3];
  s32 local_24[3];
  s32 iVar3;
  u32 iVar4;
  s16 sVar2;
  *(T12 *)param_1 = *(T12 *)param_2;
  local_30[0] = -param_1[0];
  local_30[1] = 0;
  local_30[2] = -param_1[2];
  iVar3 = data_02142e44;
  func_02006a30(local_30, local_30);
  local_24[0] = param_1[0];
  local_24[1] = 0;
  local_24[2] = param_1[2];
  func_01ff832c(iVar3, local_30, local_24, param_1 + 3);
  param_1[6] = 0;
  param_1[7] = 0x1000;
  param_1[8] = 0;
  iVar4 = func_020be240();
  iVar3 = func_01ffdb08(param_4);
  iVar3 = func_02028130(iVar3);
  iVar3 = (iVar3 * 2) / 2 * 2;
  param_1[1] = data_02142ca4 + FX_Mul(data_02142ca0, iVar3);
  iVar3 = func_02067898(iVar3, param_3);
  sVar2 = func_02068078(iVar3, iVar4);
  param_1[9] = (s32)((((s64)sVar2 * 23592960) + 0x80000) >> 20);
}
