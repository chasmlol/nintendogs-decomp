#include "ctx.h"

typedef struct {
  s32 w[3];
} T12;

extern void func_02067e68(u8 *a, s32 *b, u8 *c);
extern void func_0209d430(u8 *a, s32 b, s32 c);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_020c770c(u8 *param_1, s32 *param_2, s32 param_3, s32 param_4, s32 param_5)
{
  s32 local_20[3];
  s32 iVar3;
  s32 iVar2;
  *(T12 *)local_20 = *(T12 *)param_2;
  func_02067e68(param_1 + 0xbc, local_20, param_1 + 0xbc);
  if (*(s32 *)(param_1 + 0xb4) >= 0) {
    return;
  }
  *(s32 *)(param_1 + 0xb4) = -FX_Mul(*(s32 *)(param_1 + 0xb4), param_3);
  iVar2 = *(s32 *)(param_1 + 0xb0);
  iVar3 = (iVar2 > 0) ? iVar2 : -iVar2;
  if (iVar3 < 41) {
    *(s32 *)(param_1 + 0xb0) = 0;
  } else {
    *(s32 *)(param_1 + 0xb0) = FX_Mul(iVar2, param_4);
  }
  iVar2 = *(s32 *)(param_1 + 0xb8);
  iVar3 = (iVar2 > 0) ? iVar2 : -iVar2;
  if (iVar3 < 41) {
    *(s32 *)(param_1 + 0xb8) = 0;
  } else {
    *(s32 *)(param_1 + 0xb8) = FX_Mul(iVar2, param_4);
  }
  if (param_5 < 0) {
    return;
  }
  iVar3 = *(s32 *)(param_1 + 0xb4);
  iVar3 = (iVar3 > 0) ? iVar3 : -iVar3;
  func_0209d430(param_1 + 400, 0, iVar3);
}
