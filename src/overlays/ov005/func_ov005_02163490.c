#include "ctx.h"

extern s32 data_ov005_02167f00;
extern s32 data_0215be34;
extern void func_ov005_021635bc(void);
extern u32 func_02062164(u8 *p);
extern void func_02081198(s32 a, s32 b, void *c);

void func_ov005_02163490(u8 *param_1, s32 param_2)
{
  s32 *piVar6;
  s32 *piVar8;
  s32 iVar7;
  s32 iVar5;
  u32 uVar4;
  s32 *pw;
  s32 iVar9;
  u32 nx;
  s32 off;

  iVar7 = 1;
  if (param_1 == 0) {
    return;
  }
  uVar4 = func_02062164(param_1);
  if ((s32)uVar4 < 0x5998) {
    return;
  }
  piVar8 = *(s32 **)(param_1 + 8);
  if (piVar8 == 0) {
    return;
  }
  for (piVar6 = (s32 *)*piVar8; piVar6 != 0; piVar6 = (s32 *)*piVar6) {
    piVar8 = piVar6;
  }
  off = param_2 * 2;
  while (iVar7 > 0 && piVar8 != 0) {
    iVar5 = data_ov005_02167f00;
    nx = (u32)piVar8[1];
    *(s32 *)(iVar5 + 0x74) = piVar8[5] + piVar8[2];
    pw = (s32 *)((u32)iVar5 + 0x74);
    pw[1] = piVar8[6] + piVar8[3];
    pw[2] = piVar8[7] + piVar8[4];
    iVar5 = data_ov005_02167f00;
    *(u16 *)((u8 *)iVar5 + 0x80) = *(u16 *)(off + iVar5 + 100);
    iVar9 = data_0215be34;
    func_02081198((iVar9 != 0) ? *(s32 *)iVar9 : 0, 0x34, (void *)func_ov005_021635bc);
    iVar7 = iVar7 - 1;
    *(u16 *)((u8 *)piVar8 + 0x2e) = *(u16 *)((u8 *)piVar8 + 0x2c);
    piVar8 = (s32 *)nx;
  }
}
