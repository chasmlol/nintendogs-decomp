#include "ctx.h"
#pragma opt_common_subs off

extern u32 data_02159428;
extern BOOL func_020bd6b4(u8 *a, u8 *b);

#define SQ12(a) ((s32)((((s64)(a)) * ((s64)(a)) + 0x800) >> 12))

typedef struct { s32 w[3]; } T3;

BOOL func_02026c40(u8 *param_1, u8 *param_2)
{
  s32 iVar5;
  s32 iVar6;
  s32 iVar7;
  s32 l1, l2, l3;
  s32 w0, w2;
  BOOL bVar4;
  u8 *h;
  s32 v488;

  if (*(s16 *)(param_2 + 0x96) == 0xe) {
    return FALSE;
  }
  iVar6 = 0x708;
  if (*(s16 *)(param_2 + 0x96) == -1 && *(s16 *)(param_2 + 0x90) == 1) {
    T3 c;
    T3 *src = (T3 *)(param_2 + 0xbc);
    iVar7 = *(vu32 *)(*(u8 **)&data_02159428 + 0xc);
    c = *src;
    w2 = c.w[2];
    w0 = c.w[0];
    l1 = SQ12(w0);
    l2 = SQ12(w2);
    iVar5 = iVar7 - 0x3000;
    l3 = SQ12(iVar5);
    if (l1 + l2 > l3) {
      iVar6 = iVar6 >> 3;
    }
    bVar4 = func_020bd6b4(param_1, param_2);
    if (!bVar4) {
      iVar6 = iVar6 >> 2;
    }
  }
  h = *(u8 **)(param_1 + 0x9e8);
  v488 = *(s32 *)(param_1 + 0x488);
  return v488 > (s32)((u32)iVar6 * (u32)h[0x12]);
}
