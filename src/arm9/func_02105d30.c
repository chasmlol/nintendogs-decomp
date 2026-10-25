#include "ctx.h"

extern u32 data_0215be48;
extern u8 data_0214f004[];
extern void func_02091eec(s16 *p);
extern s32 func_02091080(s16 *p);
extern void func_02101dd0(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, u8 *g, s32 h, s32 i, s32 j);
extern void func_021045a4(s32 a);
extern void func_02105e64(u8 *p, s16 *q);

void func_02105d30(s32 *param_1)
{
  s32 iVar1;
  s16 *psVar2;
  s32 gflag;

  iVar1 = *(s32 *)&data_0215be48;
  psVar2 = (s16 *)((u8 *)iVar1 + 0x4cc8);
  if (*param_1 == 0) {
    return;
  }
  iVar1 = (psVar2[0] == 3);
  gflag = (*(u16 *)(data_0214f004 + 2) & 2) != 0;
  if (((*(u16 *)(psVar2 + 4) & 2U) == 0) && gflag && (iVar1 == 0)) {
    func_02091eec(psVar2);
  }
  iVar1 = func_02091080(psVar2);
  if (iVar1 != 0) {
    func_02101dd0(0, 4, 2, 2, 1, 3, (u8 *)(*(s32 *)&data_0215be48 + 0x4d22), psVar2[10], psVar2[0x2c], 0);
    func_021045a4(param_1[7]);
  }
  func_02105e64((u8 *)param_1, psVar2);
  if (psVar2[0] == 2) {
    param_1[3] = 1;
    param_1[13] = 0;
    *param_1 = 0;
    return;
  }
  param_1[13] = 0;
}
